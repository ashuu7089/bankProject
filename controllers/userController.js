const user = require('../models/userSchema')
const bcrypt = require('bcrypt')
const jwt = require('jsonwebtoken')
const fs = require('fs');
const path = require('path');

// API for add user 
const addCustomer = async (req, res) => {
    const { customerEmail, customerPassword } = req.body;
    let fileName = null;
    try {
        const hashPassword = await bcrypt.hashSync(customerPassword, 10)
        if (req.file) {
            fileName = req.file.filename;
        }
        const randomCustomerAccount = Math.floor(Math.random() * 1000000000)
        const customerData = await user.create({
            customerName: req.body.customerName,
            customerEmail: req.body.customerEmail,
            customerPhone: req.body.customerPhone,
            customerCity: req.body.customerCity,
            customerBankId: req.body.customerBankId,
            customerState: req.body.customerState,
            customerFullAddress: req.body.customerFullAddress,
            customerCountry: req.body.customerCountry,
            customerPostalCode: req.body.customerPostalCode,
            customerPassword: hashPassword,
            customerBankAccountNumber: randomCustomerAccount,
            bankWalletAddress: req.body.bankWalletAddress,
            customerCurrentAmount: req.body.customerCurrentAmount,
            customerTransectionLimit: req.body.customerTransectionLimit,
            customerImage: fileName
        })
        res.status(200).json({
            success: true,
            message: "Customer add successfully...",
            customerData
        })
    } catch (error) {
        res.status(500).json({
            success: false,
            message: error.message
        })
        if (fileName) {
            fs.unlinkSync(path.join(__dirname, "..", "/uploads", fileName));
        }
    }
}

// API for login user
const loginUser = async (req, res) => {
    const { customerEmail, customerPassword } = req.body;
    const isCustomerLogin = await user.findOne({
        where: {
            customerEmail: req.body.customerEmail
        }
    })
    if (isCustomerLogin !== null) {
        const pwdComfirm = await bcrypt.compare(customerPassword, isCustomerLogin.customerPassword)
        if (pwdComfirm && isCustomerLogin) {
            const token = jwt.sign({ customerId: isCustomerLogin.id }, process.env.jwt, { expiresIn: "20m" });
            res.status(200).json({
                success: true,
                message: "Login successfully...!",
                isCustomerLogin,
                token
            })
        } else {
            res.status(401).json({
                success : false,
                message : "Customer not found"
            })
        }
    }else{
        res.status(400).json({
            success : false,
            message : "customer email or password are incorrect"
        })
    }
}
module.exports = { addCustomer, loginUser }
