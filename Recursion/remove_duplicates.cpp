void removeConsecutiveDuplicates(char *input) {

if (input[0] == '\0') 
        return; 
  
    // if the adjacent characters are same 
    if (input[0] == input[1]) { 
          
        // Shift character by one to left 
        int i = 0;  
        while (input[i] != '\0') { 
            input[i] = input[i + 1]; 
            i++; 
        } 
  
        // Check on Updated String input 
        removeConsecutiveDuplicates(input); 
    } 
  
    // If the adjacent characters are not same 
    // Check from input+1 string address 
    removeConsecutiveDuplicates(input + 1); 

}