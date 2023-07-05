const express = require('express');
require('dotenv').config()
require('./models/config')
const app = express();
const mainRouter = require('./routers/mainRouter')
app.use(express.json())
app.use('/', mainRouter)


app.listen(process.env.PORT, (req, res)=>{
    console.log(`Server is running on port number ${process.env.PORT}`)
})