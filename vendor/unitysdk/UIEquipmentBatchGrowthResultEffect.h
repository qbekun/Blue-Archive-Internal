#pragma once
#include "unitysdk.h"

class UIGrid;
class CharacterObject;

#define UIEQUIPMENTBATCHGROWTHRESULTEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23FDFA0)
#define UIEQUIPMENTBATCHGROWTHRESULTEFFECT_ONPLAYDIRECTING_OFFSET UNITYSDK_OFFSET(0x23FD540)
#define UIEQUIPMENTBATCHGROWTHRESULTEFFECT_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x23F7F10)

	inline static constexpr unsigned int UIEquipmentBatchGrowthResultEffect_TypeDefinitionIndex = 5440;

	class UIEquipmentBatchGrowthResultEffect : public Il2CppObject
	{
	public:
		Il2CppObject* slots; // 0x18
		UIGrid* grid; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTHRESULTEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPlayDirecting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTHRESULTEFFECT_ONPLAYDIRECTING_OFFSET))(nullptr);
		}

		::System::Void Initialized(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTHRESULTEFFECT_INITIALIZED_OFFSET))(arg, nullptr);
		}

	};

