// Import the MongoDB Node.js driver
const { MongoClient } = require('mongodb');

// MongoDB connection URI
const uri = 'mongodb://localhost:27017';

// Connect to MongoDB
const client = new MongoClient(uri, { useNewUrlParser: true, useUnifiedTopology: true });

async function main() {
try {
// Connect to the MongoDB server
await client.connect();

// Access the "sample" database
const database = client.db('sample');

// Access the "users" collection
const collection = database.collection('users');

// // Insert a new document
// const result = await collection.insertOne({ name: 'John Doe', age: 30 });

// // Retrieve a document
// const document = await collection.findOne({ name: 'John Doe' });
// console.log(document);

// Inserting a document with nested structure
await collection.insertOne({
    name: 'John Doe',
    age: 30,
    address: {
    street: '123 Main St',
    city: 'Anytown',
    country: 'USA'
    },
    hobbies: ['reading', 'traveling', 'photography']
    });
    
    // Retrieving a document with nested structure
    const doc = await collection.findOne({ name: 'John Doe' });
    console.log(doc);
} 
finally {
// Close the MongoDB connection
await client.close();
}
}

main().catch(console.error);