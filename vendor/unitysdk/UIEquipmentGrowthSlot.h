#pragma once
#include "unitysdk.h"

class UIEquipmentCard;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class BoxCollider; }
class EquipmentObject;
class CharacterObject;

#define UIEQUIPMENTGROWTHSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24058B0)
#define UIEQUIPMENTGROWTHSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2405D60)

	inline static constexpr unsigned int UIEquipmentGrowthSlot_TypeDefinitionIndex = 5452;

	class UIEquipmentGrowthSlot : public Il2CppObject
	{
	public:
		UIEquipmentCard* Card; // 0x18
		::UnityEngine::GameObject* LockCover; // 0x20
		::UnityEngine::GameObject* NotEquipCover; // 0x28
		UILabel* OpenLevelText; // 0x30
		::UnityEngine::GameObject* Dot; // 0x38
		::UnityEngine::BoxCollider* Collider; // 0x40
		EquipmentObject* equipmentObject; // 0x48

		::System::Void SetData(CharacterObject* arg, EquipmentObject* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(CharacterObject*, EquipmentObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTHSLOT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTHSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

