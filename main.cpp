// 10627130 ��u�G�� �L�a�} & 10627131 ��u�G�� ���m޳
#include <iostream> // cout, endl
#include <fstream> // open, is_open, close, ignore
#include <string> // string, find_last_of, substr
#include <vector> // vector, push_back

using namespace std ;

static int FileN = 0 ;


struct DataBase {
    string uselessData = "\0" ;
    int schoolNum = 0 ;
    int departmentNum = 0 ;
    int student = 0 ;
    int graduated = 0 ;
    string wholeSentence = "\0" ;
} ;

class FunctionNVarieblesArea {
    vector<DataBase> dataBase ;
    string uselessShit = "\0" ;
    char slashN = '\0' ;

    void ReadNCopy() {
        getline( cin, uselessShit ) ;
        cin.get( slashN ) ;
        getline( cin, uselessShit ) ;
        cin.get( slashN ) ;
        getline( cin, uselessShit ) ;
        cin.get( slashN ) ;

        for ( i = 0 ; ! cin.eof() ; i ++ ) {
            getline( cin, dataBase[i].wholeSentence ) ;
            cin.get( slashN ) ;
        } //
    } // Kill the top three lines
    // final test

} ;

int main() {
    int command = 0 ;
    bool continueOrNot = false ;

    do {
        cout << "*****************************************" << endl ; // welcome message
        cout << "*****    File Object Manipulator    *****" << endl ;
        cout << "***** 0 : Quit                      *****" << endl ;
        cout << "***** 1 : Read, count and copy      *****" << endl ;
        cout << "***** 2 : Filter and update         *****" << endl ;
        cout << "***** 3 : Merge two files           *****" << endl ;
        cout << "*****************************************" << endl ;
        cout << endl << "Please enter your choice :" << endl ;
        cin >> command ; // read in user command

        while ( command > 3 || command < 0 ) {
            cout << "Error command! please enter an acceptable command :" << endl ;
            cin >> command ;
        } // wrong command situation

        if ( command == 0 ) { // bye :(((
            cout << "Bye :(((" << endl ;
            return 0 ;
        } // if()

        if ( command == 1 ) { // read, count and copy
            cout << "Please enter the file  ( 204 or 205 ) you want to read and copy or [0] to quit:" << endl ;
            cin >> FileN ;

            while ( FileN != 204 && FileN != 205 && FileN != 0 ) {
                cout << "*****  input" << FileN << ".txt does not exist!  *****" << endl ;
                cin >> FileN ;
            } // wrong filename

            if ( FileN == 0 ) continueOrNot = true ;

            else if ( FileN == 204 ) fopen( "input204.txt", "r" ) ;

            else if ( FileN == 205 ) fopen( "input205.txt", "r" ) ;

            // FunctionNVarieblesArea.ReadNCopy() ;
        } // mission 1

        if ( command == 2 ) {
            cout << "Please enter the file ( 204 or 205 ) you want to filter or [0] to quit:" << endl ;
            cin >> FileN ;

            while ( FileN != 204 && FileN != 205 && FileN != 0 ) {
                cout << "*****  copy" << FileN << ".txt does not exist!  *****" << endl ;
                cin >> FileN ;
            } // wrong filename

            if ( FileN == 0 ) continueOrNot = true ;

            else if ( FileN == 204 ) {
                if ( fopen( "copy204.txt", "r+" ) == NULL ) cout << "*****  copy204.txt does not exist!  *****" << endl ;
            } // test if you have already create a copy file

            else if ( FileN == 205 ) {
                if ( fopen( "copy205.txt", "r+" ) == NULL ) cout << "*****  copy205.txt does not exist!  *****" << endl ;
            } // test if you have already create a copy file

            // FunctionNVarieblesArea.Filter() ;
        } // mission 2

        if ( command == 3 ) {
            int firstFile = 0 ;
            int secondFile = 0 ;
            cout << "Please enter the first file ( 204 or 205 ) that you want to merge or [0] to quit:" << endl ;
            cin >> firstFile ;

            while ( firstFile != 204 && firstFile != 205 && firstFile != 0 ) {
                cout << "*****  copy" << firstFile << ".txt does not exist!  *****" << endl ;
                cin >> firstFile ;
            } // wrong filename

            if ( firstFile == 0 ) continueOrNot = true ;

            else if ( firstFile == 204 || firstFile == 205 ) {
                if ( firstFile == 204 ) {
                    if ( fopen( "copy204.txt", "r" ) == NULL ) cout << "*****  copy204.txt does not exist!  *****" << endl ;

                    else {
                        cout << "Please enter the second file ( 204 or 205 ) that you want to merge or [0] to quit:" << endl ;
                        cin >> secondFile ;

                        while ( secondFile != 204 && secondFile != 205 && secondFile != 0 ) {
                            cout << "*****  copy" << secondFile << ".txt does not exist!  *****" << endl ;
                            cin >> secondFile ;
                        } // wrong filename

                        if ( secondFile == 0 ) continueOrNot = true ;

                        // else if ( secondFile == 204 || secondFile == 205 ) FunctionNVarieblesArea.Merge( firstFile, secondFile ) ;
                    } // find out copy204.txt
                } // if the first input is 204

                if ( firstFile == 205 ) {
                    if ( fopen( "copy205.txt", "r" ) == NULL ) cout << "*****  copy205.txt does not exist!  *****" << endl ;

                    else {
                        cout << "Please enter the second file ( 204 or 205 ) that you want to merge or [0] to quit:" << endl ;
                        cin >> secondFile ;

                        while ( secondFile != 204 && secondFile != 205 && secondFile != 0 ) {
                            cout << "*****  copy" << secondFile << ".txt does not exist!  *****" << endl ;
                            cin >> secondFile ;
                        } // wrong filename

                        if ( secondFile == 0 ) continueOrNot = true ;

                        // else if ( secondFile == 204 || secondFile == 205 ) FunctionNVarieblesArea.Merge( firstFile, secondFile ) ;
                    } // find out copy205.txt
                } // if the first input is 205
            } // if the first input is acceptable
        } // mission 3

    } while( continueOrNot ) ;
} // main()
