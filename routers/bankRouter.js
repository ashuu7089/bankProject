const router = require('express').Router()
const bank = require('../controllers/bankController')
const { uploads } = require('../middleware/imgStorage')
const validate = require('../validate/bank/bankValidation')

router.post('/addbank', uploads.array("bankLogo", 2), validate.registerUserValidation ,bank.addBank )
router.post('/login', validate.userLoginValidation, bank.bankLogin)
module.exports = router ;
