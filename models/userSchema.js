const { Sequelize, DataTypes } = require('sequelize');
const sequelize = require('./config');
const bank = require('../models/bankSchema')

const userSchema = sequelize.define("user", {
    customerName : {
        type : DataTypes.STRING,
        allowNull : false
    },
    customerEmail : {
        type : DataTypes.STRING,
        allowNull : false,
    },
    customerPhone : {
        type : DataTypes.BIGINT,
        allowNull : false
    },
    customerBankId : {
        type : DataTypes.INTEGER,
        allowNull : false,
        reference : {
            model : bank,
            key :  'bankId'
        }
    },
    customerCity : {
        type : DataTypes.STRING,
        allowNull : false
    },
    customerState : {
        type : DataTypes.STRING,
        allowNull : false
    },
    customerFullAddress : {
        type : DataTypes.STRING,
        allowNull : false
    },
    customerCountry : {
        type : DataTypes.STRING,
        allowNull : false
    },
    customerPostalCode : {
        type : DataTypes.INTEGER,
        allowNull : false
    },
    customerPassword : {
        type : DataTypes.CHAR,
        allowNull : false
    },
    customerBankAccountNumber :{
        type : DataTypes.INTEGER,
        allowNull : false
    },
    bankWalletAddress : {
        type : DataTypes.INTEGER,
        allowNull : false
    },
    customerCurrentAmount : {
        type : DataTypes.INTEGER,
        allowNull : false
    },
    customerTransectionLimit : {
        type : DataTypes.INTEGER,
        allowNull : false
    },
    customerImage : {
        type : DataTypes.BLOB,
    }

} )

userSchema.sync({ alert : true })

module.exports = userSchema ;
