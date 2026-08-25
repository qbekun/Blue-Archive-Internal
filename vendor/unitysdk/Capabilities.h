#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int Capabilities_TypeDefinitionIndex = 28603;

	class Capabilities : public Il2CppObject
	{
	public:
		DeviceType* type; // 0x10
		DeviceSubType* subType; // 0x14
		DeviceFlags* flags; // 0x18

	};

