const joi = require('@hapi/joi');
const { joiPasswordExtendCore } = require('joi-password');
const joiPassword = joi.extend(joiPasswordExtendCore);
const { loginUser } = require('../../controllers/userController')

const schema = {
    customerRegister: joi.object({
        customerName: joi.string().max(20).required(),
        customerEmail: joi.string().email().required(),
        customerPhone: joi.number().integer().min(1000000000).max(999999999999).message('invalid number').required(),
        customerCity: joi.string().required(),
        customerState: joi.string().required(),
        customerPassword: joiPassword.string().minOfSpecialCharacters(2)
            .minOfLowercase(2)
            .minOfUppercase(2)
            .minOfNumeric(2)
            .noWhiteSpaces()
            .onlyLatinCharacters()
            .messages({
                'password.minOfUppercase': '{#label} should contain at least {#min} uppercase character',
                'password.minOfSpecialCharacters':
                    '{#label} should contain at least {#min} special character',
                'password.minOfLowercase': '{#label} should contain at least {#min} lowercase character',
                'password.minOfNumeric': '{#label} should contain at least {#min} numeric character',
                'password.noWhiteSpaces': '{#label} should not contain white spaces',
                'password.onlyLatinCharacters': '{#label} should contain only latin characters',
            }),

        customerFullAddress: joi.string().required(),
        customerCountry: joi.string().required(),
        customerPostalCode: joi.number().integer().required(),
        customerTransectionLimit: joi.number().min(1).max(10).integer().required(),
        customerCurrentAmount: joi.number().integer().required(),
        bankWalletAddress: joi.number().integer().required(),
        customerBankAccountNumber: joi.number().integer().required(),
        customerBankId: joi.number().integer().required()
    }).unknown(true),

    // Validation Schema for login
    loginUser : joi.object({
        customerEmail : joi.string().email().required(),
        customerPassword : joi.string().min(6).required()
    }).unknown(true)
}

module.exports = schema;
