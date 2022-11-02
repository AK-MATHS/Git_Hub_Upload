
//Challenge 5
// Formatting output

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

// Create a ruler function that helps with alignment of the text
void ruler() {
	std::cout << "12345678901234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
}


struct City {
	std::string name;
	long population;
	double cost;
};

// Assume each country has at least 1 city
struct Country {
	std::string name;
	std::vector<City>cities;
};

struct Tours {
	std::string title;
	std::vector<Country>countries;
};




int main() {
	
    // Test data
	Tours tours
		{ "Tour Ticket Prices from Miami",
				{
					{
						"Columbia", {
										{ "Bogota", 8778000, 400.98 },
										{ "Cali", 2401000, 424.12 },
										{ "Medellin", 2464000, 350.98 },
										{ "Cartagena", 972000, 345.34 }
									},
						
					},
					{
						"Brazil", {
										{ "Rio De Janiero", 13500000, 567.45 },
										{ "Sao Paulo", 11310000, 975.45 },
										{ "Salvador", 18234000, 855.99 }
									},
					},
					{
						"Chile", {
							{ "Valdivia", 360000, 569.12 },
							{ "Santiago", 7040000, 520.00 }
							
						},
					},
					{
						"Argentina", {
							{ "Buenos Aires", 3010000, 728.77 }
						},
					}
				}
		};
	
	//Unformated display so you can see how to access the vector elements
	
	
	const int total_width {70};
	const int field1_width {20};	//Country name
	const int field2_width {20};	//City name
	const int field3_width {15};	//Population
	const int field4_width {15};	//Cost
	
	//Display the report title header centered in width of total_width
	
	
	
	ruler();
	
	int title_length = tours.title.length();
	std::cout << std::setw((total_width - title_length)/2) << "" << tours.title << std::endl;
	std::cout	<< std::setw(field1_width) << std::left <<"Country"
				<< std::setw(field2_width) << std::left << "City"
				<< std::setw(field3_width) << std::right << "Population"
				<< std::setw(field4_width) << std::right << "Price"
				<< std::endl;
	std::cout << std::setfill('-') << std::setw(total_width) << "-" << std::endl;
	std::cout << std::setfill(' ');
	
	
	for (auto country : tours.countries) {		//loop through the countries
		std::cout << std::setw(field1_width) << std::left << country.name;
		bool first {true};
		for (auto city : country.cities) {		//loop through the cities for each country
			
			if (first) {
				std::cout	<< std::setw(field2_width) << std::left << city.name
							<< std::setw(field3_width) << std::right << city.population
							<< std::setw(field4_width) << std::right << std::fixed << std::setprecision(2) << city.cost;
				first = false;
			}
			else {
				std::cout	<< std::setw(field1_width) << " " << std::setw(field2_width) << std::left << city.name
							<< std::setw(field3_width) << std::right << city.population
							<< std::setw(field4_width) << std::right << std::fixed << std::setprecision(2) << city.cost;
			
			}
						
						std::cout << std::resetiosflags(std::ios::floatfield) << std::endl;
			
		}
	}
	
	std::cout << std::endl << std::endl;
	
	return 0;
}
