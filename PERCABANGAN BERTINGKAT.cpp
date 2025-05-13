#include <iostream>
#include <string>

int main() {
    std::string username, password;

    // Input username dan password
    std::cout << "Masukkan username: ";
    std::cin >> username;
    std::cout << "Masukkan password: ";
    std::cin >> password;

    // Validasi username
    if (username == "admin") {
        // Jika username benar, cek password
        if (password == "12345") {
            std::cout << "Login berhasil! Selamat datang, admin." << std::endl;
        } else {
            std::cout << "Password salah!" << std::endl;
        }
    } else {
        std::cout << "Username salah!" << std::endl;
    }

    return 0;
}