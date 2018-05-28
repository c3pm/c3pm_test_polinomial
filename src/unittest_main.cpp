// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-05-29T02:46:42Z as a part of c3pm_test_polinomial
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

/*
 *  This is a dummy unit test program, created not to really test something, but to represent the
 *  idea of project structure and how it interacts with other project while using c3pm
 *  Link: https://github.com/c3pm/c3pm
 */

#include <iostream>
#include "exports/polinomial.h"

int main() {
    if (polinomial(2, 1) != 5) {
        std::cerr << "test failed: polinomial(2, 1) = " << polinomial(2, 1) << std::endl;
        return 0;
    }
    if (polinomial(-3, 2) != 11) {
        std::cerr << "test failed: polinomial(-3, 2) = " << polinomial(-3, 2) << std::endl;
        return 0;
    }
    if (polinomial(10, 23) != 123) {
        std::cerr << "test failed: polinomial(10, 23) = " << polinomial(10, 23) << std::endl;
        return 0;
    }
    std::cout << "Tests passed, all ok!" << std::endl;
    return 0;
}
