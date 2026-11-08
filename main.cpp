#include <iostream>
#include <string>
#include <iomanip>
int main() {
    const int MAX_MOKINIU = 100;
    const int MAX_PAZYMIU = 10;
    std::string vardai[MAX_MOKINIU];
    int pazymiuKiekiai[MAX_MOKINIU] = {};
    int pazymiai[MAX_MOKINIU][MAX_PAZYMIU] = {};
    int mokiniuKiekis = 0;
    int pasirinkimas = 0;

        do {
            std::cout << "MOKINIU PAZYMIU SISTEMA\n";
            std::cout << "1. Ivesti mokini ir jo pazymius\n";
            std::cout <<"2. Perziureti visu mokiniu pazymius\n";
            std::cout << "3. Perziureti pasirinkto mokinio pazymius\n";
            std::cout <<"4. Atnaujinti pazymi\n";
            std::cout <<"5. Apskaiciuoti mokinio vidurki\n";
            std::cout <<"6. Pasalinti mokini\n";
            std::cout<<"7. Iseiti\n";
            std::cout << "Pasirinkite veiksma: ";
            std::cin >> pasirinkimas;
            switch (pasirinkimas)
            {
                case 1: {
                    if (mokiniuKiekis >= MAX_MOKINIU) {
                        std::cout << "Mokiniu sarasas pilnas.\n";
                        break;
                    }
                    std::string vardas;
                    std::cout << "Iveskite mokinio varda: ";
                    if (std::cin >> vardas) {
                        int kiekPazymiu = 0;
                        std::cout << "Kiek pazymiu turi mokinys? (0-10): ";

                        if (!(std::cin >> kiekPazymiu)) {
                            break;
                        }

                        if (kiekPazymiu < 0 || kiekPazymiu > MAX_PAZYMIU) {
                            std::cout << "Iveskite skaiciu nuo 0 iki 10.\n";
                            break;
                        }
                        for (int i = 0; i < kiekPazymiu; ) {
                            int pazymys = 0;
                            std::cout << "Iveskite " << i + 1 << "-aji pazymi (1-10): ";

                            if (!(std::cin >> pazymys)) {
                                break;
                            }

                            if (pazymys < 1 || pazymys > 10) {
                                std::cout << "Pazymys turi buti nuo 1 iki 10.\n";
                                continue;
                            }

                            pazymiai[mokiniuKiekis][i] = pazymys;
                            ++i;
                        }

                        if (!std::cin) {
                            break;
                        }
                        pazymiuKiekiai[mokiniuKiekis] = kiekPazymiu;
                        vardai[mokiniuKiekis] = vardas;
                        ++mokiniuKiekis;
                        std::cout << "Mokiniu sarase: "<<mokiniuKiekis<<'\n';
                    }
                    break;
                }
                case 2: {
                    for (int i = 0; i < mokiniuKiekis; ++i) {
                        std::cout << i + 1 << ". " << vardai[i] << ":";

                        for (int j = 0; j < pazymiuKiekiai[i]; ++j) {
                            std::cout << ' ' << pazymiai[i][j];
                        }

                        std::cout << '\n';
                    }
                    break;
                }
                case 3: {
                    if (mokiniuKiekis == 0) {
                        std::cout << "Mokiniu sarasas tuscias.\n";
                        break;
                    }

                    int numeris = 0;
                    std::cout << "Iveskite mokinio numeri: ";
                    if (!(std::cin >> numeris)) {
                        break;
                    }

                    if (numeris < 1 || numeris > mokiniuKiekis) {
                        std::cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki "
                                  << mokiniuKiekis << ".\n";
                        break;
                    }

                    int indeksas = numeris - 1;
                    std::cout << vardai[indeksas] << ":";

                    for (int j = 0; j < pazymiuKiekiai[indeksas]; ++j) {
                        std::cout << ' ' << pazymiai[indeksas][j];
                    }

                    std::cout << '\n';
                    break;
                }
                case 4: {
                    if (mokiniuKiekis == 0) {
                        std::cout << "Mokiniu sarasas tuscias.\n";
                        break;
                    }

                    int numeris = 0;
                    std::cout << "Iveskite mokinio numeri: ";
                    if (!(std::cin >> numeris)) {
                        break;
                    }

                    if (numeris < 1 || numeris > mokiniuKiekis) {
                        std::cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki "
                                  << mokiniuKiekis << ".\n";
                        break;
                    }

                    int indeksas = numeris - 1;
                    int kiekis = pazymiuKiekiai[indeksas];
                    if (kiekis == 0) {
                        std::cout << "Mokinys dar neturi pazymiu.\n";
                        break;
                    }

                    int pazymioNumeris = 0;
                    std::cout << "Iveskite pazymio numeri (1-" << kiekis << "): ";
                    if (!(std::cin >> pazymioNumeris)) {
                        break;
                    }

                    if (pazymioNumeris < 1 || pazymioNumeris > kiekis) {
                        std::cout << "Iveskite skaiciu nuo 1 iki " << kiekis << ".\n";
                        break;
                    }

                    std::cout << "Dabartinis pazymys: "
                    << pazymiai[indeksas][pazymioNumeris - 1] << '\n';
                              while (true) {
    int naujasPazymys = 0;
    std::cout << "Iveskite nauja pazymi (1-10): ";

    if (!(std::cin >> naujasPazymys)) {
        break;
    }

    if (naujasPazymys < 1 || naujasPazymys > 10) {
        std::cout << "Pazymys turi buti nuo 1 iki 10.\n";
        continue;
    }

    pazymiai[indeksas][pazymioNumeris - 1] = naujasPazymys;
    std::cout << "Pazymys atnaujintas.\n";
    break;
}
                    break;
                }
                case 5: {
                    if (mokiniuKiekis == 0) {
                        std::cout << "Mokiniu sarasas tuscias.\n";
                        break;
                    }

                    int numeris = 0;
                    std::cout << "Iveskite mokinio numeri: ";
                    if (!(std::cin >> numeris)) {
                        break;
                    }

                    if (numeris < 1 || numeris > mokiniuKiekis) {
                        std::cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki "
                                  << mokiniuKiekis << ".\n";
                        break;
                    }

                    int indeksas = numeris - 1;
                    int kiekis = pazymiuKiekiai[indeksas];
                    if (kiekis == 0) {
                        std::cout << "Mokinys dar neturi pazymiu.\n";
                        break;
                    }

                    int suma = 0;
                    for (int j = 0; j < kiekis; ++j) {
                        suma += pazymiai[indeksas][j];
                    }

                    double vidurkis = static_cast<double>(suma) / kiekis;
                    std::cout << "Vidurkis: " << std::fixed << std::setprecision(2)
                              << vidurkis << '\n';
                    break;
                }
                case 6: {
                    if (mokiniuKiekis == 0) {
                        std::cout << "Mokiniu sarasas tuscias.\n";
                        break;
                    }

                    int numeris = 0;
                    std::cout << "Iveskite mokinio numeri: ";
                    if (!(std::cin >> numeris)) {
                        break;
                    }

                    if (numeris < 1 || numeris > mokiniuKiekis) {
                        std::cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki "
                                  << mokiniuKiekis << ".\n";
                        break;
                    }

                    int indeksas = numeris - 1;
                    for (int i = indeksas; i < mokiniuKiekis - 1; ++i) {
                        vardai[i] = vardai[i + 1];
                        pazymiuKiekiai[i] = pazymiuKiekiai[i + 1];

                        for (int j = 0; j < MAX_PAZYMIU; ++j) {
                            pazymiai[i][j] = pazymiai[i + 1][j];
                        }
                    }

                    --mokiniuKiekis;
                    std::cout << "Mokinys pasalintas.\n";
                    break;
                }
                    }
        }while (std::cin && pasirinkimas != 7);
        return 0;
    }

