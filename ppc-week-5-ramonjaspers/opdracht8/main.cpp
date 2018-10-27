// opdracht8
#include <iostream>
#include <vector>

using namespace std;


string genRoute(int x, int y) {
    string o;
    if (x > 0) {
        o += to_string(x);
        o += " x East. \t";
    } else {
        o += to_string(abs(x));
        o += " x West. \t";
    }
    if (y > 0) {
        o += to_string(y);
        o += " x North.";
    } else {
        o += to_string(abs(y));
        o += " x South.";
    }
    return o;
}

string getFastestRoute(vector<string> v, int size, int x, int y) {
    string curString = v[size - 1];
    if (size > 0) {
        if (curString == "north") {
            y++;
            // ik mag helaas geen y++ meegeven in te return, vandaar dus de y++ ervoor.
            return getFastestRoute(v, size - 1, x, y);
        }
        if (curString == "east") {
            x++;
            return getFastestRoute(v, size - 1, x, y);
        }
        if (curString == "south") {
            y--;
            return getFastestRoute(v, size - 1, x, y);

        }
        if (curString == "west") {
            x--;
            return getFastestRoute(v, size - 1, x, y);
        }
    }
    return (genRoute(x, y));
}


int main() {
    vector<string> map = {"west", "west", "south", "south", "south",
                          "west", "west", "west", "north", "north", "north", "north",
                          "north", "west", "west", "west", "west", "west", "west", "south",
                          "south", "south", "south", "east", "east", "east", "west",
                          "west", "south", "south", "south", "west", "west", "north",
                          "north", "north", "north", "north", "north", "west", "west",
                          "west", "west", "west", "west", "south", "south", "south",
                          "south", "east", "east", "east", "north", "north", "north",
                          "north", "north", "north", "north", "north", "north", "north",
                          "north", "east", "east", "east", "east", "east", "east", "east",
                          "east", "east", "south", "south", "south", "south", "south",
                          "west", "west", "west", "east", "east", "east", "east", "east",
                          "east", "east", "east", "north", "west", "north", "north",
                          "north", "north", "north", "north", "north", "north", "north", "north"};

    cout << getFastestRoute(map, map.size(), 0, 0);

    return 0;
}

