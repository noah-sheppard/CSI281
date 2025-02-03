#include <iostream>
#include "AutoPart.h"

using namespace std;

int main() {
    AutoPart parts[] = {
          {
      101,
      "Brake Pad",
      "Brakes",
      50.0
    },
    {
      102,
      "Control Arm Kit",
      "Suspension",
      250.0
    },
    {
      103,
      "Turbocharger Kit",
      "Engine",
      1200.0
    },
    {
      104,
      "Timing Chain Kit",
      "Engine",
      150.0
    },
    {
      105,
      "Fuel Injector Set",
      "Fuel System",
      250.0
    },
    {
      106,
      "K03 Turbocharger",
      "Engine",
      900.0
    },
    {
      107,
      "Shock Absorber",
      "Suspension",
      75.0
    },
    {
      108,
      "Fuel Pump",
      "Fuel System",
      125.0
    },
    {
      109,
      "Water Pump",
      "Cooling",
      65.0
    },
    {
      110,
      "Radiator",
      "Cooling",
      200.0
    },
    {
      111,
      "Brake Rotor",
      "Brakes",
      100.0
    },
    {
      112,
      "Wheel Bearing",
      "Suspension",
      45.0
    },
    {
      113,
      "Oil Filter",
      "Engine",
      15.0
    },
    {
      114,
      "Air Filter",
      "Engine",
      25.0
    },
    {
      115,
      "Timing Belt",
      "Engine",
      85.0
    },
    {
      116,
      "Alternator",
      "Electrical",
      160.0
    },
    {
      117,
      "AC Compressor",
      "HVAC",
      300.0
    },
    {
      118,
      "Clutch Kit",
      "Transmission",
      350.0
    },
    {
      119,
      "CV Axle",
      "Drivetrain",
      120.0
    },
    {
      120,
      "Headlight Assembly",
      "Lighting",
      220.0
    },
    {
      121,
      "Tail Light",
      "Lighting",
      75.0
    },
    {
      122,
      "Side Mirror",
      "Body",
      100.0
    },
    {
      123,
      "Window Regulator",
      "Body",
      120.0
    },
    {
      124,
      "Bumper Cover",
      "Body",
      180.0
    },
    {
      125,
      "Exhaust Manifold",
      "Exhaust",
      300.0
    },
    {
      126,
      "Catalytic Converter",
      "Exhaust",
      450.0
    },
    {
      127,
      "Muffler",
      "Exhaust",
      150.0
    },
    {
      128,
      "Oxygen Sensor",
      "Exhaust",
      120.0
    },
    {
      129,
      "Throttle Body",
      "Fuel System",
      250.0
    },
    {
      130,
      "Turbocharger Kit",
      "Engine",
      1300.0
    },
    {
      131,
      "Brake Caliper",
      "Brakes",
      110.0
    },
    {
      132,
      "Brake Hose",
      "Brakes",
      45.0
    },
    {
      133,
      "Master Cylinder",
      "Brakes",
      175.0
    },
    {
      134,
      "Wheel Hub",
      "Suspension",
      180.0
    },
    {
      135,
      "Ball Joint",
      "Suspension",
      60.0
    },
    {
      136,
      "Air Conditioning Condenser",
      "HVAC",
      200.0
    },
    {
      137,
      "Heater Core",
      "HVAC",
      120.0
    },
    {
      138,
      "Timing Chain Tensioner",
      "Engine",
      80.0
    },
    {
      139,
      "Cylinder Head",
      "Engine",
      500.0
    },
    {
      140,
      "Piston Kit",
      "Engine",
      350.0
    },
    {
      141,
      "Crankshaft",
      "Engine",
      450.0
    },
    {
      142,
      "Cylinder Head Gasket",
      "Engine",
      50.0
    },
    {
      143,
      "Water Pump Pulley",
      "Cooling",
      40.0
    },
    {
      144,
      "Radiator Hose",
      "Cooling",
      30.0
    },
    {
      145,
      "Exhaust Pipe",
      "Exhaust",
      100.0
    },
    {
      146,
      "Power Steering Pump",
      "Steering",
      220.0
    },
    {
      147,
      "Tie Rod End",
      "Steering",
      60.0
    },
    {
      148,
      "Steering Rack",
      "Steering",
      400.0
    },
    {
      149,
      "Ballast Resistor",
      "Electrical",
      25.0
    },
    {
      150,
      "Starter Motor",
      "Electrical",
      200.0
    },
    {
      151,
      "Timing Belt Kit",
      "Engine",
      120.0
    },
    {
      152,
      "Radiator Fan",
      "Cooling",
      135.0
    },
    {
      153,
      "Windshield Wiper Blade",
      "Exterior",
      25.0
    },
    {
      154,
      "Head Gasket",
      "Engine",
      65.0
    },
    {
      155,
      "Throttle Position Sensor",
      "Fuel System",
      90.0
    },
    {
      156,
      "Alternator Belt",
      "Engine",
      30.0
    },
    {
      157,
      "Power Steering Rack",
      "Steering",
      350.0
    },
    {
      158,
      "Valve Cover Gasket",
      "Engine",
      50.0
    },
    {
      159,
      "Axle Shaft",
      "Drivetrain",
      180.0
    },
    {
      160,
      "Timing Chain",
      "Engine",
      80.0
    },
    {
      161,
      "Brake Master Cylinder",
      "Brakes",
      110.0
    },
    {
      162,
      "Clutch Slave Cylinder",
      "Transmission",
      75.0
    },
    {
      163,
      "Differential Pinion Shaft",
      "Drivetrain",
      90.0
    },
    {
      164,
      "Crankshaft Pulley",
      "Engine",
      65.0
    },
    {
      165,
      "Piston Rings",
      "Engine",
      45.0
    },
    {
      166,
      "Control Arm Bushings",
      "Suspension",
      55.0
    },
    {
      167,
      "Anti-Sway Bar",
      "Suspension",
      120.0
    },
    {
      168,
      "Spark Plug Wire Set",
      "Electrical",
      40.0
    },
    {
      169,
      "Fuel Tank",
      "Fuel System",
      200.0
    },
    {
      170,
      "Ball Joint Kit",
      "Suspension",
      120.0
    },
    {
      171,
      "Brake Pad Set",
      "Brakes",
      70.0
    },
    {
      172,
      "Fuel Filter",
      "Fuel System",
      25.0
    },
    {
      173,
      "Oil Pressure Switch",
      "Engine",
      35.0
    },
    {
      174,
      "Drive Belt",
      "Engine",
      50.0
    },
    {
      175,
      "Throttle Body Gasket",
      "Fuel System",
      15.0
    },
    {
      176,
      "Oxygen Sensor Kit",
      "Exhaust",
      180.0
    },
    {
      177,
      "Power Window Motor",
      "Body",
      150.0
    },
    {
      178,
      "Timing Chain Guide",
      "Engine",
      95.0
    },
    {
      179,
      "Blower Motor",
      "HVAC",
      140.0
    },
    {
      180,
      "Ignition Coil",
      "Electrical",
      80.0
    },
    {
      181,
      "A/C Condenser Fan",
      "HVAC",
      160.0
    },
    {
      182,
      "Brake Drum",
      "Brakes",
      100.0
    },
    {
      183,
      "Headlight Bulb",
      "Lighting",
      20.0
    },
    {
      184,
      "Fog Light",
      "Lighting",
      85.0
    },
    {
      185,
      "Wheel Spacer",
      "Suspension",
      50.0
    },
    {
      186,
      "Tie Rod",
      "Steering",
      65.0
    },
    {
      187,
      "Disc Brake Rotor",
      "Brakes",
      95.0
    },
    {
      188,
      "Windshield Washer Pump",
      "Exterior",
      40.0
    },
    {
      189,
      "Catalytic Converter Kit",
      "Exhaust",
      600.0
    },
    {
      190,
      "Door Lock Actuator",
      "Body",
      75.0
    },
    {
      191,
      "Rear Differential",
      "Drivetrain",
      350.0
    },
    {
      192,
      "Strut Assembly",
      "Suspension",
      180.0
    },
    {
      193,
      "Brake Line Kit",
      "Brakes",
      60.0
    },
    {
      194,
      "Timing Belt Tensioner",
      "Engine",
      55.0
    },
    {
      195,
      "Shock Absorber Kit",
      "Suspension",
      220.0
    },
    {
      196,
      "Fuel Tank Sending Unit",
      "Fuel System",
      80.0
    },
    {
      197,
      "Windshield Wiper Motor",
      "Exterior",
      75.0
    },
    {
      198,
      "Camshaft",
      "Engine",
      250.0
    },
    {
      199,
      "Flywheel",
      "Transmission",
      200.0
    },
    {
      200,
      "EGR Valve",
      "Exhaust",
      120.0
    }

  };
    int n = sizeof(parts) / sizeof(parts[0]);

    int choice;
    bool descending;
    bool sortByPrice;
    bool stillRunning = true;
    do {
        cout << "\nWelcome to Noah's Auto Parts!\n1. Display Parts\n2. Search by Part ID\n3. Display by Category\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Sort in (1) Ascending or (2) Descending order? ";
            int orderChoice;
            cin >> orderChoice;
            descending = (orderChoice == 2);

            cout << "Sort by (1) Part ID or (2) Price? ";
            int sortChoice;
            cin >> sortChoice;
            sortByPrice = (sortChoice == 2);

            radixSort(parts, n, sortByPrice, descending);
            print(parts, n);
            break;
        }
        case 2: {
            int partID;
            cout << "Enter Part ID to search: ";
            cin >> partID;
            AutoPart result = searchByID(parts, n, partID);
            if (result.partID != -1)
                cout << "Part found: " << result.partName << " with price: $" << result.price << endl;
            else
                cout << "Part not found." << endl;
            break;
        }
        case 3: {
            string category;
            cout << "Enter Category to display: ";
            cin >> category;
            displayByCategory(parts, n, category);
            break;
        }
        case 4:
            cout << "Exiting the program." << endl;
            stillRunning = false;
            break;
        default:
            cout << "Invalid choice! Please select a valid option." << endl;
        }
    } while (stillRunning);

    return 0;
}
