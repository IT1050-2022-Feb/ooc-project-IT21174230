#pragma once
class Veterinarian :
	public RegisteredUser
{
	private:
		float vetApptCharge;

	public:
		Veterinarian();
		Veterinarian(float charge);

		void setVetApptCharge(float charge);
		float getVetApptCharge();

		~Veterinarian();

};

//CODED BY IT21174230