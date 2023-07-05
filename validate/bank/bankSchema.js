const joi = require('@hapi/joi');
const { joiPasswordExtendCore } = require('joi-password');
const joiPassword = joi.extend(joiPasswordExtendCore);
const { bankLogin } = require('../../controllers/bankController')

const schema = {
    bankRegister: joi.object({
        bankName : joi.string().required(),
        bankId: joi.string().required(),
        bankEmail: joi.string().email().required(),
        bankPhone: joi.number().integer().min(1000000000).max(999999999999).message('invalid number').required(),
        bankCity: joi.string().required(),
        bankState: joi.string().required(),
        bankPassword: joiPassword.string().minOfSpecialCharacters(2)
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
        bankLogo : joi.string(),
        bankFullAddress: joi.string().required(),
        bankCountry: joi.string().required(),
        bankPostalCode: joi.number().integer().required()
    }).unknown(true),

    // Validation Schema for login
    bankLogin: joi.object({
        bankEmail: joi.string().email().required(),
        bankPassword: joi.string().min(6).required()
    }).unknown(true)
}

module.exports = schema ;
