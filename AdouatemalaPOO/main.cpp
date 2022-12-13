#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class IRoom
{
public:
   virtual void createRoom() = 0;
   virtual void updateRoom() = 0;
   virtual void deleteRoom() = 0;
   virtual void readRoom() = 0;
};

class ISensor
{
public:
    virtual double readSensor() = 0;

} ;

class House
{
  public:
      void AddRoom(vector<IRoom> rooms);
      void removeRoom(int );
      void collectRoomData();
      void viewRoomData();

  private:
    vector<IRoom> rooms;

};

class Living : public IRoom
{
public:
    void createRoom();
    void updateRoom();
    void deleteRoom();
    void readRoom();
protected:
    vector<ISensor> sensors;
};

class Kitchen : public IRoom
{
public:
    void createRoom();
    void updateRoom();
    void deleteRoom();
    void readRoom();
protected:
    vector<ISensor> sensors;
};

class Bedroom : public IRoom
{
public:
    void createRoom();
    void updateRoom();
    void deleteRoom();
    void readRoom();
protected:
    vector<ISensor> sensors;
};

class Bathroom : public IRoom
{
public:
    void createRoom();
    void updateRoom();
    void deleteRoom();
    void readRoom();
protected:
    vector<ISensor> sensors;
};

class Temperature : public ISensor
{
    public:
    double readSensor();
    protected:
        double generateTemperature();

};

class Humidity : public ISensor
{
public:
    double readSensor();
protected:
    double generateHumidity();
};

class Pressure : public ISensor
{
public:
    double readSensor();
protected:
    double generatePressure();
};

double Humidity::generateHumidity()
{
double i;
double number;
time_t nTime;
number = 1;
srand((unsigned) time(&nTime));
printf("Random numbers are: \n");
for( i = 0 ; i < number ; i++ )
{
printf("%d\n", rand() % 100);
}
}

double Temperature::generateTemperature()
{
    double i;
double number;
time_t nTime;
number = 1;
srand((unsigned) time(&nTime));
printf("Random numbers are: \n");
for( i = 0 ; i < number ; i++ )
{
printf("%d\n", rand() % 100);
}
}

double Pressure::generatePressure()
{
double i;
double number;
time_t nTime;
number = 1;
srand((unsigned) time(&nTime));
printf("Random numbers are: \n");
for( i = 0 ; i < number ; i++ )
{
printf("%d\n", rand() % 100);
}
}

void IRoom::createRoom()
{
    ifstream camera;
    camera.open("living.txt");
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
