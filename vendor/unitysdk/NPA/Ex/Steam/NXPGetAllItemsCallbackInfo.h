#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamInventoryResult_t; }
namespace NPA::Ex::Steam { class NXPOnInventoryResultReady; }

#define NPA_EX_STEAM_NXPGETALLITEMSCALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2BEB0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPGetAllItemsCallbackInfo_TypeDefinitionIndex = 26050;

	class NXPGetAllItemsCallbackInfo : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPSteamInventoryResult_t* inventoryResult_GetAllItem; // 0x10
		::NPA::Ex::Steam::NXPOnInventoryResultReady* onGetAllItemEvent; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPGETALLITEMSCALLBACKINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

