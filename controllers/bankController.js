const bank = require('../models/bankSchema')
const jwt = require('jsonwebtoken')
const bcrypt = require('bcrypt')
const fs = require('fs')
const path = require('path')

// API for add Bank 
const addBank = async (req, res) => {
    const { bankEmail, bankPassword } = req.body;
    let fileNames = []
    try {
        const hashPassword = await bcrypt.hashSync(bankPassword, 10)
        //const randomBankId = Math.floor(Math.random()*100)
        fileNames = req.files.map((file) => file.filename)
        const bankData = await bank.create({
            bankName: req.body.bankName,
            bankId: req.body.bankId,
            bankEmail: req.body.bankEmail,
            bankPhone: req.body.bankPhone,
            bankCity: req.body.bankCity,
            bankState: req.body.bankState,
            bankPassword: hashPassword,
            bankLogo: fileNames,
            bankFullAddress: req.body.bankFullAddress,
            bankCountry: req.body.bankCountry,
            bankPostalCode: req.body.bankPostalCode,
        })
        res.status(200).json({
            success: true,
            message: "Bank added successfully...",
            bankData
        })
    }   
     catch (error) {
        res.status(500).json({  
            success: false,
            message: error.message
        })
        if (fileNames.length > 0) {
            fileNames.forEach((file) => {
            fs.unlinkSync(path.join(__dirname, "..", "/uploads", file));
            });
        }
    }

}

// API for Bank Login
const bankLogin = async (req, res) => {
    const { bankEmail, bankPassword } = req.body;
    try {
        const isBankExists = await bank.findOne({
            where: {
                bankEmail: req.body.bankEmail,
            }
        })
        if (isBankExists !== null) {
            const pwdComfirm = await bcrypt.compare(bankPassword, isBankExists.bankPassword)
            if (pwdComfirm && isBankExists) {
                const token = jwt.sign({ bankId: isBankExists.id }, process.env.jwt, { expiresIn: "20m" })
                res.status(200).json({
                    success: true,
                    message: "Login successfully...!",
                    isBankExists,
                    token
                })
            } else {
                res.status(401).json({
                    success: false,
                    message: "please enter correct bankId and password"
                })
            }
        } else {
            res.status(500).json({
                success: false,
                message: "This email does not exists"
            })
        }
    } catch (error) {
        res.status(500).json({
            success: false,
            message: error.message
        })
    }
}
module.exports = { addBank, bankLogin };
