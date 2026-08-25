#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamUniverse; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPSteamUniverse_TypeDefinitionIndex = 25999;

	class ENXPSteamUniverse : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPSteamUniverse* k_EUniverseInvalid; // 0x0
		::NPA::Ex::Steam::ENXPSteamUniverse* k_EUniversePublic; // 0x0
		::NPA::Ex::Steam::ENXPSteamUniverse* k_EUniverseBeta; // 0x0
		::NPA::Ex::Steam::ENXPSteamUniverse* k_EUniverseInternal; // 0x0
		::NPA::Ex::Steam::ENXPSteamUniverse* k_EUniverseDev; // 0x0
		::NPA::Ex::Steam::ENXPSteamUniverse* k_EUniverseMax; // 0x0

	};
}

