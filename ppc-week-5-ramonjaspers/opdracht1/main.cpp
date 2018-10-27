// opdracht 1
 int ears(int n_rabbits) {
    if (n_rabbits <= 1) {
        return n_rabbits * 2;
    } else {
        return 2 + ears(n_rabbits - 2);
    }
 }


/**wat doet de functie?:**/
// returned 2 + oren. tot het 1 of kleiner is en dan hij het totaal rabbits x2.
//dus bv:
//n_rabbits = 0
//return n_rabbits *2 = 0
//---------------------
//n_rabbits = 2
//return 2 + ears(0(2-2)) -> 0*2 = 0
// return = 2;
