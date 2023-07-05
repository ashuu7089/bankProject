const router = require('express').Router();
const user = require('../controllers/userController');
const { uploads } = require('../middleware/imgStorage')
const validate = require('../validate/user/userValidation')

router.post('/customer', uploads.single("customerImage"), validate.registerCustomerValidation ,user.addCustomer);
router.post('/login', validate.loginUserValidation, user.loginUser)

module.exports = router;
