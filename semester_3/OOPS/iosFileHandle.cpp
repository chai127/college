// | Flag          | Meaning                                            | Example usage                                                         |                |              |
// | ------------- | -------------------------------------------------- | --------------------------------------------------------------------- | -------------- | ------------ |
// | `ios::in`     | Open file for **reading**                          | `std::ifstream file("example.txt", ios::in);` (default for ifstream)  |                |              |
// | `ios::out`    | Open file for **writing**                          | `std::ofstream file("example.txt", ios::out);` (default for ofstream) |                |              |
// | `ios::app`    | Open file for **appending** (write at end of file) | `std::ofstream file("example.txt", ios::app);`                        |                |              |
// | `ios::trunc`  | **Truncate** file (clear contents) when opening    | \`std::ofstream file("example.txt", ios::out                          | ios::trunc);\` |              |
// | `ios::ate`    | Open file and move **write/read position to end**  | \`std::fstream file("example.txt", ios::in                            | ios::out       | ios::ate);\` |
// | `ios::binary` | Open file in **binary mode** (not text mode)       | `std::ifstream file("example.bin", ios::binary);`                     |                |              |



// ios::in — open file for reading (default for ifstream).

// ios::out — open file for writing (default for ofstream).

// ios::app — append to file; writing always goes to the file’s end, doesn’t overwrite existing content.

// ios::trunc — truncate file contents (clear it) when opening for writing (default for ofstream unless app used).

// ios::ate — open file and set initial position at the end, but allows reading/writing anywhere afterward.

// ios::binary — open in binary mode, to prevent newline translation and read/write raw bytes.