#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;

#define UILOBBYCHARACTERSELECTSLOT_2D_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x266DE90)
#define UILOBBYCHARACTERSELECTSLOT_2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x266DF10)

	inline static constexpr unsigned int UILobbyCharacterSelectSlot_2D_TypeDefinitionIndex = 6695;

	class UILobbyCharacterSelectSlot_2D : public ::UnityEngine::InputSystem::LowLevel::GamepadState
	{
	public:
		SortingRule* sortingRule; // 0x100
		SortingOrder* sortingOrder; // 0x104
		Il2CppObject* filteredList; // 0x108

		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTSLOT_2D_GETDATALIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTSLOT_2D_.CTOR_OFFSET))(nullptr);
		}

	};

