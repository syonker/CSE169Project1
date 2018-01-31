
#pragma once

#include "Core.h"

class DOF
{
public:
	DOF();
	~DOF();
	void SetValue(float newValue);
	float GetValue();
	void SetMinMax(float minValue, float maxValue);

	float value;
	float min;
	float max;

private:

};
