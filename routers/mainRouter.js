const router = require('express').Router();
const bankRouter = require('../routers/bankRouter')
const userRouter = require('../routers/userRouter')

router.use('/bank', bankRouter);
router.use('/user', userRouter)

module.exports = router;
