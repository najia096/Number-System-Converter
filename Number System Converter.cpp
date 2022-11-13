//Najia Jahan
//Empl: 23932033
#include <iostream>
#include<string> //To perform string operations
#include<cmath> // To perform different math operations
#include <cctype> //To check alphaneumeric numbers

using namespace std;

int main() {
  while(true) {
      cout << "=====================================" << "\nNumber System Conversion======================" <<"\n=====================================" <<endl;
      cout << "CHOOSE YOUR SOURCE NUMBER SYSTEM: " << endl;
      cout << "(2) BINARY" << endl;
      cout << "(3) TERNARY" << endl;
      cout << "(4) QUATERNARY" << endl;
      cout << "(5) QUINARY" << endl;
      cout << "(6) SENARY" << endl;
      cout << "(7) SEPTENARY" << endl;
      cout << "(8) OCTAL" << endl;
      cout << "(9) NONARY" << endl;
      cout << "(10) DECIMAL" << endl;
      cout << "(16) HEXADECIMAL" << endl;
      cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." <<"\n=====================================" << endl;
      int R; //Source Number System from main menu
      int D; // Target Number System
      int digit; 
      int hex_to_dec = 0; 
      string src_num; //Input Source Number System
      int tar_num, temp; 
      int dec_src_num; //Decimal Value Input
      string dec_tar_num; //Decimal to other Target base
      string hex_to_oct; //Hexadecimal to Octal
      string hex_to_bin; //Hexadecimal to Binary
      bool isValid = false; //Flag
      cout << "Source Number System : ";
      cin >> R; //Input Source Number System
      cout << "=====================================" << endl;

    switch(R){
      case 2: 
          cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n(10) DECIMAL\nINPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
          cin >> D; //Input Target Number System
          switch(D){
            case 10:
              cout << "Source Number System : 2, " << "Target Number System : 10\n=====================================" <<endl;

              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nBINARY: ";
              cin >> src_num;
              tar_num = 0;
              temp = 1;
              for(int i = src_num.size()-1; i >= 0; --i){
                  tar_num += temp*(src_num.at(i) - '0');
                  temp *= 2;
              }
              cout << "DECIMAL: " << tar_num << endl;
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break;
            default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
        }
          break;
      case 3:  
          cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n(10) DECIMAL\nINPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
          cin >> D; //Input Target Number System
          switch(D){

            case 10:
              cout << "Source Number System : 3, " << "Target Number System : 10\n=====================================" <<endl;
              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nTERNARY: ";
              cin >> src_num;
              tar_num = 0;
              temp = 1;
              for(int i = src_num.size()-1; i >= 0; --i){
                  tar_num += temp*(src_num.at(i) - '0');
                  temp *= 3;
              }
              cout << "DECIMAL: " << tar_num << endl;
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break;
            default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
        }
          break;    

      case 4:
          cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n(10) DECIMAL\nINPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
          cin >> D; //Input Target Number System
          switch(D){
            case 10:
              cout << "Source Number System : 4, " << "Target Number System : 10\n=====================================" <<endl;
              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nQUATERNARY: ";
              cin >> src_num;
              tar_num = 0;
              temp = 1;
              for(int i = src_num.size()-1; i >= 0; --i){
                  tar_num += temp*(src_num.at(i) - '0');
                  temp *= 4;
              }
              cout << "DECIMAL: " << tar_num << endl;
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break;
            default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
        }
          break;    
      
      case 5:
          cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n(10) DECIMAL\nINPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
          cin >> D; //Input Target Number System
          switch(D){
            case 10:
              cout << "Source Number System : 5, " << "Target Number System : 10\n=====================================" <<endl;
              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nQUINARY: ";
              cin >> src_num;
              tar_num = 0;
              temp = 1;
              for(int i = src_num.size()-1; i >= 0; --i){
                  tar_num += temp*(src_num.at(i) - '0');
                  temp *= 5;
              }
              cout << "DECIMAL: " << tar_num << endl;
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break;
            default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
        }
          break;

      case 6: 
          cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n(10) DECIMAL\nINPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
          cin >> D; //Input Target Number System
          switch(D){
            case 10:
              cout << "Source Number System : 6, " << "Target Number System : 10\n=====================================" <<endl;
              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nSENARY: ";
              cin >> src_num;
              tar_num = 0;
              temp = 1;
              for(int i = src_num.size()-1; i >= 0; --i){
                  tar_num += temp*(src_num.at(i) - '0');
                  temp *= 6;
              }
              cout << "DECIMAL: " << tar_num << endl;
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break;
            default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
        }
          break;

      case 7:
          cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n(10) DECIMAL\nINPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
          cin >> D; //Input Target Number System
          switch(D){
            case 10:
              cout << "Source Number System : 7, " << "Target Number System : 10\n=====================================" <<endl;
              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nSEPTENARY: ";
              cin >> src_num;
              tar_num = 0;
              temp = 1;
              for(int i = src_num.size()-1; i >= 0; --i){
                  tar_num += temp*(src_num.at(i) - '0');
                  temp *= 7;
              }
              cout << "DECIMAL: " << tar_num << endl;
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break;
            default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
        }
          break;

      case 8:
          cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n(10) DECIMAL\nINPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
          cin >> D; //Input Target Number System
          switch(D){
            case 10:
              cout << "Source Number System : 8, " << "Target Number System : 10\n=====================================" <<endl;
              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nOCTAL: ";
              cin >> src_num;
              tar_num = 0;
              temp = 1;
              for(int i = src_num.size()-1; i >= 0; --i){
                  tar_num += temp*(src_num.at(i) - '0');
                  temp *= 8;
              }
              cout << "DECIMAL: " << tar_num << endl;
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break;
            default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
        }
          break;

      case 9:
          cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n(10) DECIMAL\nINPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
          cin >> D; //Input Target Number System
          switch(D){
            case 10:
              cout << "Source Number System : 9, " << "Target Number System : 10\n=====================================" <<endl;
              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nNONARY: ";
              cin >> src_num;
              tar_num = 0;
              temp = 1;
              for(int i = src_num.size()-1; i >= 0; --i){
                  tar_num += temp*(src_num.at(i) - '0');
                  temp *= 9;
              }
              cout << "DECIMAL: " << tar_num << endl;
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break;
            default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
        }
          break;

      case 10:
        cout << "CHOOSE YOUR TARGET NUMBER SYSTEM: " << endl;
        cout << "(2) BINARY" << endl;
        cout << "(3) TERNARY" << endl;
        cout << "(4) QUATERNARY" << endl;
        cout << "(5) QUINARY" << endl;
        cout << "(6) SENARY" << endl;
        cout << "(7) SEPTENARY" << endl;
        cout << "(8) OCTAL" << endl;
        cout << "(9) NONARY" << endl;
        cout << "(16) HEXADECIMAL" << endl;
        cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
        cin >> D;
        switch (D) {
          case 2:
            cout << "Source Number System : 10, " << "Target Number System : 2\n=====================================" <<endl;
            cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nDECIMAL: ";
            cin >> dec_src_num; //Input a Decimal Value
            while (dec_src_num){
              dec_tar_num += '0' + dec_src_num % 2;
              dec_src_num /= 2;
            }
            cout << "BINARY: ";
            for (int i = dec_tar_num.size() - 1; i >= 0; --i)
              cout << dec_tar_num.at(i);
            cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
            break;
          
          case 3:
            cout << "Source Number System : 10, " << "Target Number System : 3\n=====================================" <<endl;
            cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nDECIMAL: ";
            cin >> dec_src_num; //Input 10 (Decimal)
            while (dec_src_num){
              dec_tar_num += '0' + dec_src_num % 3;
              dec_src_num /= 3;
            }
            cout << "TERNARY: ";
            for (int i = dec_tar_num.size() - 1; i >= 0; --i)
              cout << dec_tar_num.at(i);
            cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
    
            break;

          case 4:
            cout << "Source Number System : 10, " << "Target Number System : 4\n=====================================" <<endl;
            cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nDECIMAL: ";
            cin >> dec_src_num; //Input a Decimal Value
            while (dec_src_num){
              dec_tar_num += '0' + dec_src_num % 4;
              dec_src_num /= 4;
            }
            cout << "QUATERNARY: ";
            for (int i = dec_tar_num.size() - 1; i >= 0; --i)
              cout << dec_tar_num.at(i);
            cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
            break;

          case 5:
            cout << "Source Number System : 10, " << "Target Number System : 5\n=====================================" <<endl;
            cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nDECIMAL: ";
            cin >> dec_src_num; //Input a Decimal Value
            while (dec_src_num){
              dec_tar_num += '0' + dec_src_num % 5;
              dec_src_num /= 5;
            }
            cout << "QUINARY: ";
            for (int i = dec_tar_num.size() - 1; i >= 0; --i)
              cout << dec_tar_num.at(i);
            cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
            break;

          case 6:
            cout << "Source Number System : 10, " << "Target Number System : 6\n=====================================" <<endl;
            cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nDECIMAL: ";
            cin >> dec_src_num; //Input a Decimal Value
            while (dec_src_num){
              dec_tar_num += '0' + dec_src_num % 6;
              dec_src_num /= 6;
            }
            cout << "SENARY: ";
            for (int i = dec_tar_num.size() - 1; i >= 0; --i)
              cout << dec_tar_num.at(i);
            cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
            break;
          
          case 7:
            cout << "Source Number System : 10, " << "Target Number System : 7\n=====================================" <<endl;
            cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nDECIMAL: ";
            cin >> dec_src_num; //Input a Decimal Value
            while (dec_src_num){
              dec_tar_num += '0' + dec_src_num % 7;
              dec_src_num /= 7;
            }
            cout << "SEPTENARY: ";
            for (int i = dec_tar_num.size() - 1; i >= 0; --i)
              cout << dec_tar_num.at(i);
            cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
            break;

          case 8:
            cout << "Source Number System : 10, " << "Target Number System : 8\n=====================================" <<endl;
            cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nDECIMAL: ";
            cin >> dec_src_num; //Input a Decimal Value
            while (dec_src_num){
              dec_tar_num += '0' + dec_src_num % 8;
              dec_src_num /= 8;
            }
            cout << "OCTAL: ";
            for (int i = dec_tar_num.size() - 1; i >= 0; --i)
              cout << dec_tar_num.at(i);
            cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
            break;

          case 9:
            cout << "Source Number System : 10, " << "Target Number System : 9\n=====================================" <<endl;
            cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nDECIMAL: ";
            cin >> dec_src_num; //Input a Decimal Value
            while (dec_src_num){
              dec_tar_num += '0' + dec_src_num % 9;
              dec_src_num /= 9;
            }
            cout << "NONARY: ";
            for (int i = dec_tar_num.size() - 1; i >= 0; --i)
              cout << dec_tar_num.at(i);
            cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
            break;


         case 16:
            cout << "Source Number System : 10, " << "Target Number System : 16\n=====================================" <<endl;
            cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nDECIMAL: ";
            cin >> dec_src_num; //Input a Decimal Value
            while (dec_src_num){
              digit = dec_src_num % 16;
              if (digit < 10)
                dec_tar_num += '0' + digit;
              else {
                dec_tar_num += 'A' + digit - 10;
              }
              dec_src_num /= 16;
            }
            cout << "HEXADECIMAL: ";
            for (int i = dec_tar_num.size() - 1; i >= 0; --i)
              cout << dec_tar_num.at(i);
            cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
            break;

         default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
        }
        }
        break;

      case 16:
          cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n(8) OCTAL\n(10) DECIMAL\nINPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
          cin >> D; //Input Target Number System
          switch(D){
            case 8:
              cout << "Source Number System : 16, " << "Target Number System : 8\n=====================================" <<endl;
              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nHEXADECIMAL: ";
    
              for(int i = 0; i < 5; ++i){ //Input Validation Loop
                hex_to_bin = "";
                isValid = true;
                cin >> src_num; //Input a Hexadecimal Value
                for(int j = 0; j < src_num.size(); ++j){
                  if (!isalnum(src_num.at(j)) || src_num.at(j) > 'F'){
                    isValid = false;
                    break;
                  }
                }  
              if(isValid){
                for (int i = 0; i < src_num.size(); ++i){
                if (src_num.at(i) <= '9')
                  digit = src_num.at(i) - '0';
                else {
                  digit = src_num.at(i) - 'A' + 10;
                }
                string temp;
                while (digit){
                  temp += '0' + digit % 2;
                  digit /= 2;
                }

                while (temp.size() < 4 ){
                  temp += '0'; 
                }

                for (int j = temp.size() - 1; j >= 0; --j){
                  hex_to_bin += temp.at(j);
                }
              }
              while (hex_to_bin.size() % 3){
                hex_to_bin = "0" + hex_to_bin;
              }
              cout << "OCTAL: ";
              for (int i = 0; i < hex_to_bin.size(); i += 3){
                int num = 0;
                if (hex_to_bin.at(i + 2) == '1')
                  num += 1;
                if (hex_to_bin.at(i + 1) == '1')
                  num += 2;
                if (hex_to_bin.at(i) == '1')
                  num += 4;
                if (i != 0 || num > 0)
                  cout << num;
              }
              cout << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
             break; 
              }     
              else{
                if(i < 4)
                  cout << "NOT A VALID NUMBER! TRY AGAIN: " << endl;
                
                else
                  cout << "NOT A VALID NUMBER!" << endl <<"YOU WILL BE RETURNED TO THE MAIN MENU.";
                
              }         
              }
            break;
              
            case 10:
              cout << "Source Number System : 16, " << "Target Number System : 10\n=====================================" <<endl;
              cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:\nHEXADECIMAL: ";
              for(int i = 0; i < 5; i++){ //Input Validation Loop
                isValid = true;
                cin >> src_num; //Input a Hexadecimal Value
                for (int j = 0; j < src_num.size(); ++j){
                  if (!isalnum(src_num.at(j)) || src_num.at(j) > 'F'){
                    isValid = false;
                    break;
                  }
                }
                if (isValid){
                   temp = 1;
                   hex_to_dec = 0;
                   for (int j = src_num.size() - 1; j >= 0; --j){
                      if('A' <= src_num.at(j) && src_num.at(j) <= 'F'){
                        digit = src_num.at(j) - 'A' + 10;
                      }
                      else {
                       digit = src_num.at(j) - '0';
                      }
                      hex_to_dec += digit*temp;
                      temp *= 16;
                    }
                    cout << "DECIMAL: " << hex_to_dec << endl << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
                  break;
                }
                else {
                  if (i < 4)
                    cout << "NOT A VALID NUMBER! TRY AGAIN:" << endl;
                  else
                    cout << "NOT A VALID NUMBER!" << endl <<"YOU WILL BE RETURNED TO THE MAIN MENU.";
                }
              }
              break;
            default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
        }
          break;
      
       default:
              cout <<"=====================================\nConfirm Close =============================\n=====================================" << endl;
              cout << "ARE YOU SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
              char c;
              cin >> c;
              switch(c){
              case 'Y':
              cout << "BYE!" << endl;
              goto EXIT;
              case 'N':
              cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
              break; 
          }
    }
  }
  EXIT:
  return 0;
}