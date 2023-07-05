const { nextTick } = require('process');
const customer = require('./userSchema');

module.exports = {
    registerCustomerValidation : async (req, res, next)=>{
        const value = await customer.customerRegister.validate(req.body, {abortEarly : false })
        if(value.error){
            res.json({
                success : 0,
                message : value.error.details[0].message
            })
        }else{
            next()
        }
    },
    loginUserValidation : async (req, res, next)=>{
        const value = await customer.loginUser.validate(req.body, {abortEarly : false})
        if(value.error){
            res.json({
                success : 0,
                message : value.error.details[0].message
            })
        }else {
            next()
        }
    }
}