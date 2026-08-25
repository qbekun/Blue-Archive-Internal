#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPInventoryDefinitionUpdateEvent; }

#define NPA_EX_STEAM_NXPLOADITEMDEFINITIONSCALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2BC80)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPLoadItemDefinitionsCallbackInfo_TypeDefinitionIndex = 26046;

	class NXPLoadItemDefinitionsCallbackInfo : public Il2CppObject
	{
	public:
		::System::Boolean refreshedItemDefinitions; // 0x10
		::NPA::Ex::Steam::NXPInventoryDefinitionUpdateEvent* inventoryDefinitionUpdateEvent; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPLOADITEMDEFINITIONSCALLBACKINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

