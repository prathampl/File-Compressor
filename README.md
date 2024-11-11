# File Compression and Decompression Tool

A high-performance file compression and decompression tool built in C++ using custom Huffman coding. This tool demonstrates efficient data encoding and decoding with optimized memory management and binary tree operations.

## Features

- Compresses text files using Huffman coding.
- Decompresses encoded files back to original text format.
- Demonstrates expertise in data structures, memory management, and binary tree operations.

## Project Structure

- `main.cpp`: Entry point of the application.
- `HuffmanNode.h`: Defines the Huffman tree node structure.
- `HuffmanTree.h` and `HuffmanTree.cpp`: Implements Huffman encoding and decoding functions.
- `FileCompressor.h` and `FileCompressor.cpp`: Manages file compression and decompression logic.

## Requirements

- **C++ Compiler**: Ensure you have `g++` or another C++ compiler installed.
- **Visual Studio Code** (optional but recommended): Use for code editing and debugging.

## Setup

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/your-repository.git
   cd your-repository

Compile the Project: Run the following command in the project root to compile all files together:
g++ main.cpp HuffmanTree.cpp FileCompressor.cpp -o FileCompressionTool

Usage
Run the Executable:
./FileCompressionTool
Follow On-screen Prompts:

Enter the name of the text file you want to compress (e.g., sample.txt).
The program will create two new files:
compressed.huff: The compressed file.
decompressed.txt: The decompressed file.
Verify Output:

Compare the original file with decompressed.txt to confirm successful compression and decompression.
Example

Enter the file to compress: sample.txt
File compressed successfully!
File decompressed successfully!
File Structure Example

FileCompressionTool/
├── main.cpp
├── HuffmanNode.h
├── HuffmanTree.h
├── HuffmanTree.cpp
├── FileCompressor.h
├── FileCompressor.cpp
├── README.md
└── sample.txt       # Sample input file for testing

Contributing
Feel free to submit issues or fork this repository to contribute. Contributions are welcome to enhance the compression algorithms or add new features!

License
This project is licensed under the MIT License. See LICENSE for details.

---

### Instructions

1. **Customize** the `git clone` URL to your repository URL.
2. **Add sample input** (`sample.txt`) and example output files for users to test the functionality.
3. **Upload** this `README.md` file to your Git repository to serve as a guide for other users.






