#pragma once
#include "unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamInputType; }

	inline static constexpr unsigned int SteamInputDeviceEntry_TypeDefinitionIndex = 26014;

	class SteamInputDeviceEntry : public Il2CppObject
	{
	public:
		::System::UInt64 handle; // 0x10
		::NPA::Ex::Steam::ENXPSteamInputType* type; // 0x18

	};

