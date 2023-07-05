const { sequelize, DataTypes } = require('sequelize');
const Sequelize = require('./config');

const bankSchema = Sequelize.define("bank", {
    bankName: {
        type: DataTypes.STRING,
        allowNull: false
    },
    bankId: {
        type: DataTypes.INTEGER,
        allowNull: false,
        unique: true
    },
    bankEmail: {
        type: DataTypes.STRING,
        allowNull: false,
        unique: true
    },
    bankPhone: {
        type: DataTypes.BIGINT,
        allowNull: false,
        unique: true
    },
    bankCity: {
        type: DataTypes.STRING,
        allowNull: false
    },
    bankState: {
        type: DataTypes.STRING,
        allowNull: false
    },
    bankPassword: {
        type: DataTypes.CHAR,
        allowNull: false
    },
    bankLogo: {
        type: DataTypes.BLOB,
        allowNull: false
    },
    bankFullAddress: {
        type: DataTypes.STRING,
        allowNull: false
    },
    bankCountry: {
        type: DataTypes.STRING,
        allowNull: false
    },
    bankPostalCode: {
        type: DataTypes.INTEGER,
        allowNull: false
    },
    isActive: {
        type: DataTypes.BOOLEAN,
        defaultValue: true
    }
})

bankSchema.sync({ froce : true })

module.exports = bankSchema;
