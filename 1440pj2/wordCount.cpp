/*
 * author: Yufan Xu
 * assignment: 1440 project 2
 * date created: 09/22/2017
 * date due: 09/27/2017
 * date last modified: 09/27/2017
 */



#include <iostream>
#include <fstream>
#include <string>
#include "Book-proj2.h"

using namespace std;

int main() {
    //Book book1;
    //Word lines;
/*
    MyString test1;
    MyString test2;
    MyString test3;
    MyString test4;
    MyString test5;
    MyString test6;
    MyString test7;


    Word ww1;

    char words;
    ifstream infile;
    int count = 0;
    ostringstream output;

    infile.open("test.txt");

    if (!infile) {
        cout << "File Not Opened!" << endl;
    }

    while (infile.get(words)) {
        test1.operator+=(words);
        test1.operator==(test2);
        test2.operator+=(words);
        test3.operator+=(words);
        test4.operator+=(words);

        count ++;
    }
    cout << test1 << endl;
    cout << test2 << endl;
    cout << test1.operator<(test2) << endl;
    cout << test1.operator==(test2) << endl;
    cout << count << endl;
    cout << test1.toString() <<endl;

    cout << test3 << endl;

    test3.clear();

    cout << test3.length << endl;
    cout << test3.capacity << endl;
    cout << test3 << endl;

    cout << test4 << endl;

    for (int i = 0; i < 15; i ++) {
        test5.operator+=('a');
    }

    cout << test5.capacity << endl;
    cout << test5.length << endl;


    test6 = test5;
    test6 += 'c';

    cout << test6.length << endl;
    cout << test6.capacity << endl;

    cout << test5 << endl;
    cout << test6 << endl;

    cout << endl << "mystring test end" << endl;

    ww1.setWord(test1);


    cout << endl << ww1.getData() << endl;
    cout << ww1.toString() << endl;

    cout << ww1 << endl;
    cout << test1 << endl;

    cout << ww1.incrFrequency(test1) << endl;
    cout << ww1.getFrequency() << endl;

    cout << "word test end" << endl;

*/


/*
    Book book1;
    Word word1;
    MyString str1;
    ifstream infile;
    char line;

    int count = 0;

    infile.open("test.txt");

    while (infile.get(line)) {
        str1.operator+=(line);


        count ++;



    }



    word1.setWord(str1);
    book1.addWord(word1);

    //cout << word1.getData() << endl;

    cout << str1.toString() << endl;
    cout << word1.toString() << endl;

    cout << book1 << endl;
    */

    char str1[] = "aaa", str2 []= "sss", str3[] = "aaa";
    MyString str33, str11, str22;
    Word word11, word22, word33;
    Book bbb1;

    str11.data = str1;
    str22.data = str2;
    str33.data = str3;
    str11.length = 3;
    str22.length = 3;
    str33.length = 3;

    word11.setWord(str11);
    word22.setWord(str22);
    word33.setWord(str33);
    bbb1.addWord(word11);
    bbb1.addWord(word22);
    bbb1.addWord(word33);


    cout << bbb1;

    return 0;
}