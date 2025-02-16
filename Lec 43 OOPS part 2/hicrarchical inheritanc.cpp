#include<iostream>
#include<string>
using namespace std;


//Hierarchical Inheritance
class vehicle{
    protected:
    int speed;
    int tyres;
    int weight;
    int fuel_capacity;
    int fuel_consumption;
    int mileage;
    int price;
    public:
    
    void set_speed(int s){
        speed = s;
    };

    void set_tyres(int t){
        tyres = t;
    }

    void set_weight(int w){
        weight = w;
    }

    void set_fuel_capacity(int fc){
        fuel_capacity = fc;
    }

    void set_fuel_consumption(int f){
        fuel_consumption = f;
    }

    void set_mileage(int m){
        mileage = m;
    }

    void set_price(int p){
        price = p;
    }

};

class car:public vehicle{
    protected:
    int no_of_doors;
    int no_of_seats;
    int no_of_gears;
    bool is_automatic;
    bool is_electric;
    bool is_hybrid;
    string fuel_type;
    public:

    void set_no_of_doors(int d){
        no_of_doors = d;
    }

    void set_no_of_seats(int s){
        no_of_seats = s;
    }

    void set_no_of_gears(int g){
        no_of_gears = g;
    }

    void set_is_automatic(bool a){
        is_automatic = a;
    }

    void set_is_electric(bool e){
        is_electric = e;
    }

    void set_is_hybrid(bool h){
        is_hybrid = h;
    }

    void set_fuel_type(string ft){
        fuel_type = ft;
    }
};

class bike:public vehicle{
    protected:
    int no_of_gears;
    bool is_electric;
    bool has_carrier;
    bool has_disc_brake;
    bool has_abs;
    string bike_type;

    public:
    void set_no_of_gears(int g){
        no_of_gears = g;
    }

    void set_is_electric(bool e){
        is_electric = e;
    }

    void set_has_carrier(bool c){
        has_carrier = c;
    }

    void set_has_disc_brake(bool d){
        has_disc_brake = d;
    }

    void set_has_abs(bool a){
        has_abs = a;
    }

    void set_bike_type(string bt){
        bike_type = bt;
    }
};

class cycle:public vehicle{
    protected:
    int no_of_gears;
    bool has_carrier;
    bool has_basket;
    bool has_mudguards;
    bool has_bell;
    string cycle_type;

    public:
    void set_no_of_gears(int g){
        no_of_gears = g;
    }

    void set_has_carrier(bool c){
        has_carrier = c;
    }

    void set_has_basket(bool b){
        has_basket = b;
    }

    void set_has_mudguards(bool m){
        has_mudguards = m;
    }

    void set_has_bell(bool b){
        has_bell = b;
    }

    void set_cycle_type(string ct){
        cycle_type = ct;
    }
};

class sedan:public car{
    protected:

    string name;
    int boot_space;
    int ground_clearance;

    public:
    void set_boot_space(int bs){
        boot_space = bs;
    }

    void set_ground_clearance(int gc){
        ground_clearance = gc;
    }

    void set_name(string n){
        name = n;
    }

    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Speed: "<<speed<<endl;
        cout<<"Tyres: "<<tyres<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Fuel Capacity: "<<fuel_capacity<<endl;
        cout<<"Fuel Consumption: "<<fuel_consumption<<endl;
        cout<<"Mileage: "<<mileage<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"No of doors: "<<no_of_doors<<endl;
        cout<<"No of seats: "<<no_of_seats<<endl;
        cout<<"No of gears: "<<no_of_gears<<endl;
        cout<<"Is Automatic: "<<is_automatic<<endl;
        cout<<"Is Electric: "<<is_electric<<endl;
        cout<<"Is Hybrid: "<<is_hybrid<<endl;
        cout<<"Fuel Type: "<<fuel_type<<endl;
        cout<<"Boot Space: "<<boot_space<<endl;
        cout<<"Ground Clearance: "<<ground_clearance<<endl;
    }
};

int main()
{
    sedan s;
    s.set_speed(200);
    s.set_tyres(4);
    s.set_weight(1500);
    s.set_fuel_capacity(50);
    s.set_fuel_consumption(10);
    s.set_mileage(20);
    s.set_price(1000000);
    s.set_no_of_doors(4);
    s.set_no_of_seats(5);
    s.set_no_of_gears(5);
    s.set_is_automatic(true);
    s.set_is_electric(false);
    s.set_is_hybrid(false);
    s.set_fuel_type("Petrol");
    s.set_boot_space(500);
    s.set_ground_clearance(200);
    s.set_name("Honda City");
    s.print();
    return 0;
}

