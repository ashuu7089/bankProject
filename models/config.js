const Sequelize = require('sequelize');

const sequelize = new Sequelize(process.env.databaseName, process.env.user, process.env.password, {
    host : 'localhost',
    dialect : 'mysql'
});
try{
    sequelize.authenticate();
    console.log("Database connection successfully")
}catch(error){
    console.error(error)
}

module.exports = sequelize;
