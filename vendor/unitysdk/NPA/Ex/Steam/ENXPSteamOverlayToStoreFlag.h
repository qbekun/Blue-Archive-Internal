#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamOverlayToStoreFlag; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPSteamOverlayToStoreFlag_TypeDefinitionIndex = 26002;

	class ENXPSteamOverlayToStoreFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPSteamOverlayToStoreFlag* k_EOverlayToStoreFlag_None; // 0x0
		::NPA::Ex::Steam::ENXPSteamOverlayToStoreFlag* k_EOverlayToStoreFlag_AddToCart; // 0x0
		::NPA::Ex::Steam::ENXPSteamOverlayToStoreFlag* k_EOverlayToStoreFlag_AddToCartAndShow; // 0x0

	};
}

