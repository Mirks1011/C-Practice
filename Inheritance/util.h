#include<iostream>
class vehicle{
    public:
    std::string brand;
    std::string model;
    std::string releasedate;
    int topspeed;
    double weight;
    bool use;
    std::string fueltype;
    std::string sku;

    void setBrand(std::string brand){
        this->brand = brand;
    };

    void setModel(std::string model){
        this->model = model;
    };

    void setRelease(std::string releasedate){
        this->releasedate = releasedate;
    };

    void setTopSpeed(int topspeed){
        this->topspeed = topspeed;
    };

    void setWeight(double weight){
        this->weight = weight;
    };

    void setUse(bool use){
        this->use = use;
    };

    void setFuelType(std::string fueltype){
        this->fueltype = fueltype;
    };

    void setSKU(std::string sku){
        this->sku = sku;
    };

    std::string getBrand(){
        return brand;
    };

    std::string getModel(){
        return model;
    };

    std::string getRelease(){
        return releasedate;
    };

    int getTopSpeed(){
        return topspeed;
    };

    double getWeight(){
        return weight;
    };

    bool getUse(){
        return use;
    };

    std::string getFuelType(){
        return fueltype;
    };

    std::string getSKU(){
        return sku;
    };

};

class car: public vehicle{
    private:
    int seaters;
    bool convertible;
    int horsepower;
    
    public:

    car(){
    int seaters = 0;
    bool isConvertible = false;
    int horsepower = 0;
    }

    void setSeats(int seaters){
        this->seaters = seaters;        
    };

    void setConvertible(bool convertible){
        this->convertible = convertible;        
    };

    void setHorsepower(int horsepower){
        this->horsepower = horsepower;        
    };

    int getSeaters(){
        return seaters;
    };

    bool getIsConvertible(){
        return convertible;
    };

    int getHorsepower(){
        return horsepower;
    };
    void insert();
    void print();
};

class motorcycle : public vehicle{
    private:
    bool hasSidecar;
    bool hasABS;
    int engineCC;

    public:
    motorcycle(){
    bool hasSidecar = false;
    bool hasABS = false;
    int engineCC = 0;
    };
    
    void setSidecar(bool hasSidecar){
        this->hasSidecar = hasSidecar;
    };

    void sethasABS(bool hasABS){
        this->hasABS = hasABS;
    };

    void setengineCC(int engineCC){
        this->engineCC = engineCC;
    };

    bool getHasSidecar(){
        return hasSidecar;
    };

    bool getHasABS(){
        return hasABS;
    };

    int getEngineCC(){
        return engineCC;
    };
    void insert();
    void print();

};