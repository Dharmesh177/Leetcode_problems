class ParkingSystem {
public:
    int a,b,cd;
    ParkingSystem(int big, int medium, int small) {
       a=big;
        b=medium;
        cd=small;
    }
    
    bool addCar(int c) {
        if(c==1 && a==0 || c==2 && b==0 || c==3 && cd==0) return false; 
        
        if(c==1) a--;
        if(c==2) b--;
        if(c==3) cd--;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */