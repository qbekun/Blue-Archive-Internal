#pragma once
#include "unitysdk.h"

#define UIEQUIPMENTGROWTHSERVICE_ISENOUGHITEM_OFFSET UNITYSDK_OFFSET(0x23F9BE0)
#define UIEQUIPMENTGROWTHSERVICE_APPLYCHANGEPIECE_OFFSET UNITYSDK_OFFSET(0x23FC470)

	inline static constexpr unsigned int UIEquipmentGrowthService_TypeDefinitionIndex = 5450;

	class UIEquipmentGrowthService : public Il2CppObject
	{
	public:
		::System::Boolean IsEnoughItem(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTHSERVICE_ISENOUGHITEM_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyChangePiece(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTHSERVICE_APPLYCHANGEPIECE_OFFSET))(arg, arg2, nullptr);
		}

	};

