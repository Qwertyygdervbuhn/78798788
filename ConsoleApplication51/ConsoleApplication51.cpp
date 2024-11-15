#include <iostream>
using namespace std;

class CPU {
private:
    string model;
    int cores;
    float frequency;

public:
    void input() {
        cout << "Enter CPU model: ";
        cin >> model;
        cout << "Enter number of cores: ";
        cin >> cores;
        cout << "Enter frequency: ";
        cin >> frequency;
    }

    void output() const {
        cout << "CPU: " << model << ", Cores: " << cores << ", Frequency: " << frequency << " GHz" << endl;
    }
};

class RAM {
private:
    int size;

public:
    void input() {
        cout << "Enter RAM size (GB): ";
        cin >> size;
    }

    void output() const {
        cout << "RAM: " << size << " GB" << endl;
    }
};

class SSD {
private:
    int capacity;

public:
    void input() {
        cout << "Enter SSD capacity (GB): ";
        cin >> capacity;
    }

    void output() const {
        cout << "SSD: " << capacity << " GB" << endl;
    }
};

class GPU {
private:
    string model;
    int memory;

public:
    void input() {
        cout << "Enter GPU model: ";
        cin >> model;
        cout << "Enter GPU memory size (GB): ";
        cin >> memory;
    }

    void output() const {
        cout << "GPU: " << model << ", Memory: " << memory << " GB" << endl;
    }
};

class Mouse {
private:
    string type;

public:
    void input() {
        cout << "Enter mouse type: ";
        cin >> type;
    }

    void output() const {
        cout << "Mouse: " << type << endl;
    }
};

class Laptop {
private:
    CPU cpu;
    RAM ram;
    SSD ssd;
    GPU gpu;
    Mouse mouse;

public:
    void input() {
        cout << "Enter laptop details:" << endl;
        cpu.input();
        ram.input();
        ssd.input();
        gpu.input();
        mouse.input();
    }

    void output() const {
        cout << "\nLaptop details:" << endl;
        cpu.output();
        ram.output();
        ssd.output();
        gpu.output();
        mouse.output();
    }
};

int main() {
    Laptop myLaptop;
    myLaptop.input();
    myLaptop.output();
}
