class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();       // Total number of characters
        int writeIndex = 0;         // Position to write the compressed characters

        for (int i = 0; i < n; i++) {
            int count = 0;          // To count how many times current character repeats
            char currentChar = chars[i];  // Get the current character

            // Count how many times currentChar appears consecutively
            while (i < n && chars[i] == currentChar) {
                count++;
                i++;
            }

            // Since the outer loop also does i++, we decrease it here to correct position
            i--;

            // Write the character once
            chars[writeIndex] = currentChar;
            writeIndex = writeIndex + 1;

            // If count > 1, write the digits of the count one by one
            if (count > 1) {
                string countStr = to_string(count);  // Convert count to string

                // Write each digit of the count separately
                for (int j = 0; j < countStr.length(); j++) {
                    chars[writeIndex] = countStr[j];
                    writeIndex = writeIndex + 1;
                }
            }
        }

        // Resize the chars vector to the final compressed length
        chars.resize(writeIndex);

        // Return the length of the compressed vector
        return writeIndex;
    }
};
