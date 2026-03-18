#include <iostream>
#include <cstdlib>
#include <string> 

using namespace std;

int main(){
    // Colour of cmd
    system("color 0A"); 
    system("cls");

    int choice;
    string command, url;
    
    
    cout << "========================================\n";
    cout << "   __   __  ___    __  __ \n";
    cout << "   \\ \\ / / |   \\  |  \\/  |\n";
    cout << "    \\ V /  | |) | | |\\/| |\n";
    cout << "     |_|   |___/  |_|  |_|\n";
    cout << "========================================\n";
    cout << "   YouTube Downloader By Umer\n\n";

    cout << "Select Option:\n";
    cout << "[1] Audio (MP3)\n[2] Video (MP4)\n[3] Exit \n";
    cout << "Enter Your Choice: \a";
    cin >> choice;
    
    switch(choice){
        case 1: {
            cout << "\nPaste Video URL: ";
            cin >> url;
            
            command = "engine --js-runtimes node -q --progress -x --audio-format mp3 \"" + url + "\"";
            
            system("cls"); //Clears screen before downloading
            cout << "Downloading Audio... Please wait.\n";
            system(command.c_str());//.c_str()! system() uses old style c languege so that fun helps to understand advace type
            cout << "\nDownload Complete! Check your folder.\n";
            break;

        }
        case 3:{
                cout << "\nExiting YouTube Downloader. Goodbye!\n"; 
                return 0;
                }
                
        case 2: {
            cout << "\nPaste Video URL: ";
            cin >> url;

            cout << "\nSelect Quality:\n";
            cout << "[1] 1080p (Best)\n[2] 720p (Standard)\n";
            cout << "Enter Your Choice: \a";
            cin >> choice;

            switch (choice){
                case 1: {
                    command = "engine --js-runtimes node -q --progress -f \"bestvideo[height<=1080]+bestaudio\" --merge-output-format mp4 \"" + url + "\"";
                    system("cls"); 
                    cout << "Downloading 1080p Video... Please wait.\n";
                    system(command.c_str());
                    cout << "\nDownload Complete! Check your folder.\n";
                    break;
                }
                case 2: {
                    command = "engine --js-runtimes node -q --progress -f \"bestvideo[height<=720]+bestaudio\" --merge-output-format mp4 \"" + url + "\"";
                    system("cls"); 
                    cout << "Downloading 720p Video... Please wait.\n";
                    system(command.c_str());
                    cout << "\nDownload Complete! Check your folder.\n";
                    break;
                }
                
                default:{
                    system("color 0C"); //Error clr
                    cout << "\n[ERROR] Invalid choice! Please restart and type 1 or 2.\n";
                    break;
                }
            }
        }
    }

    //For keeping cmd open til user press enter
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();
    
    return 0;
}