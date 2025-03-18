import express from "express";
import mongoose from "mongoose";
import dotenv from "dotenv";

dotenv.config();

const app = express();

// Validate environment variables
if (!process.env.PORT || !process.env.MONGO_URL) {
    throw new Error("PORT and MONGO_URL environment variables are required");
}

const PORT = process.env.PORT || 8000;
const MONGO_URL = process.env.MONGO_URL;

mongoose.connect(MONGO_URL)
    .then(() => {
        console.log("Database connected");
        app.listen(PORT, () => {
            console.log(`Server is running on port ${PORT}`);
        });
    })
    .catch((error) => console.log(error));

const userSchema = new mongoose.Schema({
    Name: String,
    Age: Number,
});

const userModel = mongoose.model("users", userSchema);

app.get("/getUsers", async (req, res) => {
    try {
        const userData = await userModel.find();
        res.json(userData);
    } catch (error) {
        console.log(error);
        res.status(500).json({ message: "Error fetching users" });
    }
});