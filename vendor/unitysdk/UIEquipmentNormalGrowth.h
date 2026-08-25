#pragma once
#include "unitysdk.h"

class IntTabController;
class UIGearCard;
class UIEquipmentGrowth_LevelUpEstimation;
class UIEquipmentGrowth_Transcendence;
class UIGearGrowth_Transcendence;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class BoxCollider; }
class EquipmentObject;
class CharacterObject;
class UIEquipmentGrowth;

#define UIEQUIPMENTNORMALGROWTH_ONEQUIPMENTTABCHANGED_OFFSET UNITYSDK_OFFSET(0x240E440)
#define UIEQUIPMENTNORMALGROWTH_SETTOGGLE_OFFSET UNITYSDK_OFFSET(0x240A290)
#define UIEQUIPMENTNORMALGROWTH_CANINPUT_OFFSET UNITYSDK_OFFSET(0x2405FE0)
#define UIEQUIPMENTNORMALGROWTH_ISEFFECTPLAYING_OFFSET UNITYSDK_OFFSET(0x2404250)
#define UIEQUIPMENTNORMALGROWTH_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x2405210)
#define UIEQUIPMENTNORMALGROWTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x240E7B0)
#define UIEQUIPMENTNORMALGROWTH_SETDATA_OFFSET UNITYSDK_OFFSET(0x24057F0)
#define UIEQUIPMENTNORMALGROWTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x240E7C0)
#define UIEQUIPMENTNORMALGROWTH_SETSLOTDATA_OFFSET UNITYSDK_OFFSET(0x2403D90)

	inline static constexpr unsigned int UIEquipmentNormalGrowth_TypeDefinitionIndex = 5461;

	class UIEquipmentNormalGrowth : public Il2CppObject
	{
	public:
		IntTabController* EquipmentTab; // 0x18
		Il2CppObject* EquipmentGrowthSlots; // 0x20
		UIGearCard* GearCardSlot; // 0x28
		UIEquipmentGrowth_LevelUpEstimation* LevelUp; // 0x30
		UIEquipmentGrowth_Transcendence* Transcendence; // 0x38
		UIGearGrowth_Transcendence* GearTranscendence; // 0x40
		::UnityEngine::Animation* LevelUpEffect; // 0x48
		::UnityEngine::Animation* TierUpEffect; // 0x50
		::UnityEngine::BoxCollider* GearSlotCol; // 0x58
		EquipmentObject* equipmentObject; // 0x60
		CharacterObject* characterObject; // 0x68
		::System::Int64 gearSlotIndex; // 0x70
		UIEquipmentGrowth* parentGrowth; // 0x78

		::System::Void OnEquipmentTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNORMALGROWTH_ONEQUIPMENTTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetToggle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNORMALGROWTH_SETTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void CanInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNORMALGROWTH_CANINPUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEffectPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNORMALGROWTH_ISEFFECTPLAYING_OFFSET))(nullptr);
		}

		::System::Void Initialized(UIEquipmentGrowth* arg, CharacterObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(UIEquipmentGrowth*, CharacterObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNORMALGROWTH_INITIALIZED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNORMALGROWTH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNORMALGROWTH_SETDATA_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNORMALGROWTH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetSlotData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNORMALGROWTH_SETSLOTDATA_OFFSET))(nullptr);
		}

	};

