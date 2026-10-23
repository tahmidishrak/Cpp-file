#include <iostream>
#include <string>

using namespace std;

int main() {
    // ==========================================
    // 1. INTEGER TYPES (Purno shongkha)
    // ==========================================
    
    // int: Standard integer, sadharonoto 4 bytes (32 bits) jaiga ney.
    // Range: Pray -2*10^9 theke 2*10^9
    int age = 16;

    // short: Chhoto purno shongkha, 2 bytes (16 bits) jaiga ney.
    // Range: -32,768 theke 32,767
    short smallNumber = 32000;

    // long long: Khub boro purno shongkha, 8 bytes (64 bits) jaiga ney.
    // Range: Pray -9*10^18 theke 9*10^18
    long long bigNumber = 9000000000000000000LL;

    // unsigned int: Shudhu positive shongkha (kono negative value thakbe na).
    // Range: 0 theke 4*10^9 (4 bytes)
    unsigned int positiveOnly = 4000000000U;


    // ==========================================
    // 2. FLOATING-POINT TYPES (Doshomik shongkha)
    // ==========================================
    
    // float: Single precision doshomik shongkha, 4 bytes jaiga ney.
    // Precision: Pray 6-7 ta doshomik ghor accurately dhore rakhte pare.
    float piFloat = 3.141592f;

    // double: Double precision doshomik shongkha, 8 bytes jaiga ney.
    // Precision: Pray 15-17 ta doshomik ghor accurately dhore rakhte pare.
    double piDouble = 3.141592653589793;


    // ==========================================
    // 3. CHARACTER TYPES (Bornomala ba Symbol)
    // ==========================================
    
    // char: Single character ba letter, 1 byte jaiga ney.
    // Single quote (' ') er moddhe likhte hoy. Internal-e ASCII value save hoy.
    char grade = 'A';


    // ==========================================
    // 4. BOOLEAN TYPE (Shotto ba Mittha)
    // ==========================================
    
    // bool: Boolean value, 1 byte jaiga ney.
    // Sudhu duiti value hote pare: true (1) othoba false (0).
    bool isLearningCpp = true;
    bool isCompleted = false;


    // ==========================================
    // 5. STRING TYPE (Text ba shobdo)
    // ==========================================
    
    // string: <string> header theke ashe, ekta dynamic text container.
    // Double quote (" ") er moddhe multiple characters likhte hoy.
    string language = "C++ Programming";


    // ==========================================
    // OUTPUT & SIZEOF CHECK
    // ==========================================
    
    cout << "--- Data Types and Values ---" << endl;
    cout << "int: " << age << endl;
    cout << "short: " << smallNumber << endl;
    cout << "long long: " << bigNumber << endl;
    cout << "unsigned int: " << positiveOnly << endl;
    cout << "float: " << piFloat << endl;
    cout << "double: " << piDouble << endl;
    cout << "char: " << grade << endl;
    
    // boolalpha use korle 1/0 er poriborte 'true'/'false' print hoy
    cout << boolalpha;
    cout << "bool (isLearningCpp): " << isLearningCpp << endl;
    cout << "bool (isCompleted): " << isCompleted << endl;
    cout << "string: " << language << endl;

    cout << "\n--- Memory Sizes (in bytes) ---" << endl;
    cout << "sizeof(int): " << sizeof(int) << " bytes" << endl;
    cout << "sizeof(short): " << sizeof(short) << " bytes" << endl;
    cout << "sizeof(long long): " << sizeof(long long) << " bytes" << endl;
    cout << "sizeof(float): " << sizeof(float) << " bytes" << endl;
    cout << "sizeof(double): " << sizeof(double) << " bytes" << endl;
    cout << "sizeof(char): " << sizeof(char) << " byte" << endl;
    cout << "sizeof(bool): " << sizeof(bool) << " byte" << endl;

    return 0;
}