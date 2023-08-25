//#include <iostream>
//
//class Money {
//private:
//    int money;
//    int paisa;
//
//public:
//    Money(int m, int p) {
//        money = m;
//        paisa = p;
//    }
//
//    void printAmount() {
//        std::cout << money << "." << paisa << std::endl;
//    }
//};
//
//int main() {
//    int m1, p1, m2, p2;
//    
//    std::cin >> m1 >> p1;
//    std::cin >> m2 >> p2;
//
//    Money amount1(m1, p1);
//    Money amount2(m2, p2);
//
//    Money sum(m1 + m2 + (p1 + p2) / 100, (p1 + p2) % 100);
//
//    sum.printAmount();
//
//    return 0;
//}

//#include <iostream>
//
//class Money {
//private:
//    int money;
//    int paisa;
//
//public:
//    Money(int m, int p) {
//        money = m;
//        paisa = p;
//    }
//
//    void printAmount() {
//        std::cout << money << "." << paisa << std::endl;
//    }
//};
//
//int main() {
//    int m1, p1, m2, p2;
//    
//    std::cin >> m1 >> p1 >> m2 >> p2;
//
//    Money amount1(m1, p1);
//    Money amount2(m2, p2);
//
//    Money sum(m1 + m2 + (p1 + p2) / 100, (p1 + p2) % 100);
//
//    sum.printAmount();
//
//    return 0;
//}
//#include <iostream>
//
//class Money {
//private:
//    int money;
//    int paisa;
//
//public:
//    Money(int m, int p) {
//        money = m;
//        paisa = p;
//    }
//
//    int getMoney() {
//        return money;
//    }
//
//    void setMoney(int m) {
//        money = m;
//    }
//
//    int getPaisa() {
//        return paisa;
//    }
//
//    void setPaisa(int p) {
//        paisa = p;
//    }
//
//    void printAmount() {
//        std::cout << money << "." << paisa << std::endl;
//    }
//};
//
//int main() {
//    int m1, p1, m2, p2;
//    
//    std::cin >> m1 >> p1;
//    std::cin >> m2 >> p2;
//
//    Money amount1(m1, p1);
//    Money amount2(m2, p2);
//
//    int totalRupees = amount1.getMoney() + amount2.getMoney() + (amount1.getPaisa() + amount2.getPaisa()) / 100;
//    int totalPaisa = (amount1.getPaisa() + amount2.getPaisa()) % 100;
//
//    Money sum(totalRupees, totalPaisa);
//
//    sum.printAmount();
//
//    return 0;
//}

#include <iostream>

class Money {
private:
    int rupee;
    int paisa;

public:
    Money(int r, int p) {
        rupee = r;
        paisa = p;
    }

    int getRupee() {
        return rupee;
    }

    void setRupee(int r) {
        rupee = r;
    }

    int getPaisa() {
        return paisa;
    }

    void setPaisa(int p) {
        paisa = p;
    }

    void printAmount() {
        std::cout << rupee << "." << (paisa < 10 ? "0" : "") << paisa << std::endl;
    }
};

int main() {
    int r1, p1, r2, p2;
    
    std::cin >> r1 >> p1;
    std::cin >> r2 >> p2;

    Money amount1(r1, p1);
    Money amount2(r2, p2);

    int totalRupees = amount1.getRupee() + amount2.getRupee() + (amount1.getPaisa() + amount2.getPaisa()) / 100;
    int totalPaisa = (amount1.getPaisa() + amount2.getPaisa()) % 100;

    Money sum(totalRupees, totalPaisa);

    sum.printAmount();

    return 0;
}

