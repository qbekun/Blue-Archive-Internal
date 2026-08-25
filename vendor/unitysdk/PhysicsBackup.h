#pragma once
#include "unitysdk.h"

class LayerCollisionMatrix;

	inline static constexpr unsigned int PhysicsBackup_TypeDefinitionIndex = 9931;

	class PhysicsBackup : public Il2CppObject
	{
	public:
		::System::Boolean autoSimulation; // 0x10
		LayerCollisionMatrix* layerCollisionMatrix; // 0x18

	};

