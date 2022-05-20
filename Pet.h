#pragma once
class Pet
{
	private:
		char name[10];
		int age;
		char species[10];
		char breed[20];
		float weight;

	public:
		Pet();
		Pet(const char paraName[], int paraAge, const char paraSpecies[], const char paraBreed[], float paraWeight);

		void setPetName(const char paraName[]);
		void setPetAge(int paraAge);
		void setSpecies(const char paraSpecies[]);
		void setBreed(const char paraBreed[]);
		void setWeight(float paraWeight);
		void displayPetDetails();

		~Pet();
};

//CODED BY IT21174230