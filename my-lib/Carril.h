#pragma once
#include "Area.h"
#include "lib\Grafic.h"
#include "Granota.h"
#include "Cua.h"
#include "Vehicle.h"
#include "Obstacle.h"

// Inici del taulell respecte la cantonada superior esquerre
#define INICI_X  0
#define INICI_Y  0

// Fi del taulell respecte la cantonada superior esquerre
#define FI_X  600
#define FI_Y  450

const int CONSTANT_AFEGIR_VEHICLE = 300;


class Carril
{
public:
	Carril();
	Carril(Grafic graficVehicle, int nivell, int iniciCarrilY, int iniciCarrilX);
	~Carril();

	bool xoc(Granota granota);
	void mouVehicle();
	void dibuixaVehicle();
	bool esDinsCarril(Area area);
	bool haAgafatObstacle(Obstacle obstacle);

private:
	Area m_areaTotal;
	Cua m_cua;
	Grafic m_grafic;
	Vehicle m_vehicle;
	int m_iniciCarrilY;
	int m_iniciCarrilX;
	int retardSortidaX();
	int m_nivell;
};