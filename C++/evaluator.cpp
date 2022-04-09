// A Windows C++ script to evaluate the time of compressing and decompressing textual files (.html, .txt, .xml) with XWRT
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
  // No arguments given
  system("cls");
  if (argc == 1)
  {
    std::cout << "./evaluator <Textual file>\n";
    std::cout << "  - Evaluates compression/decompression of textual file using best zlib settings\n\n";
    std::cout << "./evaluator <Textual file> <Compressor setting>\n";
    std::cout << "  - Evaluates the compression/decompression of textual file using selected compressor setting\n";
    std::cout << "***Make sure files are in ./C++/***\n";
  }
  // One argument given, evaluate with best zlib setting
  else if (argc == 2)
  {
    // Making sure this is a file
    std::string file = argv[1];
    // Making file lowercase
    for (int i = 0; i < file.length(); i++) file[i] = tolower(file[i]);
    // Grabbing the extension
    for (int i = (file.length() - 1); i >= 0; i--)
    {
      // i != 0 is for avoiding hidden files (dot files)
      if (file[i] == '.' && i != 0)
      {
        std::string extension = file.substr(i + 1);
        if (extension == "html" || extension == "txt" || extension == "xml") break;
        else return 1;
      }
      if (i == 0) return 1;
    }

    std::cout << "--- Evaluation of " << argv[1] << " ---\n\n";
    file = argv[1]; // Making file a string

    std::cout << "--- COMPRESSION ---\n";
    // -o = overwrite, -l3 = zlib best option
    std::string compressionCommand = "XWRT\\xwrt.exe -o -l3 " + file;
    system(compressionCommand.c_str()); std::cout << "\n";

    std::cout << "--- DECOMPRESSION ---\n";
    // -o = overwrite
    std::string decompressionCommand = "XWRT\\xwrt.exe -o " + file + ".xwrt";
    system(decompressionCommand.c_str());
  }
  // Two arguments given, evaluate with given compressor ratios
  else if (argc == 3)
  {
    // Making sure argv[1] is a file
    std::string file = argv[1];
    // Making file lowercase
    for (int i = 0; i < file.length(); i++) file[i] = tolower(file[i]);
    // Grabbing the extension
    for (int i = (file.length() - 1); i >= 0; i--)
    {
      // i != 0 is for avoiding hidden files (dot files)
      if (file[i] == '.' && i != 0)
      {
        std::string extension = file.substr(i + 1);
        if (extension == "html" || extension == "txt" || extension == "xml") break;
        else return 1;
      }
      if (i == 0) return 1;
    }

    // Displaying on the screen what compression option the user is selecting
    std::string option = argv[2]; int optionInt = std::stoi(option);
    switch (optionInt)
    {
      case 1:
        option = "zlib (fast)";
        break;
      case 2:
        option = "zlib (normal/default)";
        break;
      case 3:
        option = "zlib (best)";
        break;
      case 4:
        option = "LZMA (64KB)";
        break;
      case 5:
        option = "LZMA (1MB)";
        break;
      case 6:
        option = "LZMA (8MB)";
        break;
      case 7:
        option = "PPMd (16MB)";
        break;
      case 8:
        option = "PPMd (32MB)";
        break;
      case 9:
        option = "PPMd (64MB)";
        break;
      case 10:
        option = "lpaq6 (104MB)";
        break;
      case 11:
        option = "lpaq6 (198MB)";
        break;
      case 12:
        option = "lpaq6 (390MB)";
        break;
      case 13:
        option = "lpaq6 (774MB)";
        break;
      case 14:
        option = "lpaq6 (1542MB)";
        break;
      // Exit case
      default:
        return 1;
    }

    std::cout << "--- Evaluation of " << argv[1] << " with " << option << " compression level ---\n\n";

    std::cout << "--- COMPRESSION ---\n";
    std::string compressionLevel = argv[2];
    // -o = overwrite, -lX = compression level
    std::string compressionCommand = "XWRT\\xwrt.exe -o -l" + compressionLevel + " " + file;
    system(compressionCommand.c_str()); std::cout << "\n";

    std::cout << "--- DECOMPRESSION ---\n";
    // -o = overwrite
    std::string decompressionCommand = "XWRT\\xwrt.exe -o " + file + ".xwrt";
    system(decompressionCommand.c_str());
  }
  // Exit case
  else return 1;

  return 0;
}

