#include <iostream>
#include <fstream>

using namespace std;

int main(){

    // Create and open a text file
    ofstream MyFile("filename.txt");

    //write to the file 
    MyFile << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed viverra ultrices elit eget finibus. Mauris id sagittis nisl. Sed iaculis, felis ut molestie dapibus, nibh magna pretium purus, eu lobortis orci libero vitae leo. Phasellus nec dapibus quam. Sed sed urna sed tortor egestas finibus nec eget enim. Fusce hendrerit diam ac arcu placerat accumsan. Phasellus pharetra massa mauris, non condimentum orci posuere sit amet. Curabitur a porttitor lectus. Maecenas hendrerit consequat diam, vel mattis lorem hendrerit eu. Sed id turpis ac arcu vehicula varius. Etiam bibendum vulputate eleifend. Phasellus viverra augue sit amet quam vehicula, vel luctus nisi condimentum. Cras sem velit, feugiat in metus luctus, rutrum euismod arcu. Nam porttitor dignissim orci, ut placerat nibh molestie vel. Sed dolor eros, porta nec tincidunt at, tincidunt ut enim.";
    // Create a text string, wich is used to output the text file
    string myText;

    // Close the file
    MyFile.close();

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use while loop together with the getline() function to read file line by line
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        cout << myText;
    }
    
    // Close the file
    MyReadFile.close();

    return 0;
}