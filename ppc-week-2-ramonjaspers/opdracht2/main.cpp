#include <iostream>
#include <string>

using namespace std;

unsigned int max(const unsigned int &x, const unsigned int &y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

string merge(const string &t1, const string &t2) {

    unsigned int maxSize = max(t1.size(), t2.size());
    string newText = "";

    for (unsigned int i = 0; i < maxSize; i++) {
        if (i < t1.size()) {
            newText += t1[i];
        }
        if (i < t2.size()) {
            newText += t2[i];
        }
    }
    return newText;
}

/*Beschrijf in maximaal twee zinnen wat de onderstaandefunctie merge() doet.
 * Hij loopt door de characters van de zinnen heen en plaatst de charaters in volgorde achter elkaar. dus bv: abcd + zzzz = azbzczdz
 */