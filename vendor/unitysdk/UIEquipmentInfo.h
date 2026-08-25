#pragma once
#include "unitysdk.h"

class UILabel;
class UISlider;
namespace UnityEngine { class GameObject; }
class UITexture;
class TooltipButton;
class EquipmentObject;
namespace MX::Data::Excel { class EquipmentExcel; }
namespace FlatData { class EquipmentCategory; }

#define UIEQUIPMENTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x24190B0)
#define UIEQUIPMENTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2419180)
#define UIEQUIPMENTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2419A10)
#define UIEQUIPMENTINFO_SETSTATDISPLAYS_OFFSET UNITYSDK_OFFSET(0x2419870)
#define UIEQUIPMENTINFO_SETACTIVETIER_OFFSET UNITYSDK_OFFSET(0x2419830)
#define UIEQUIPMENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x241A1B0)

	inline static constexpr unsigned int UIEquipmentInfo_TypeDefinitionIndex = 5482;

	class UIEquipmentInfo : public Il2CppObject
	{
	public:
		UILabel* NameText; // 0x18
		UILabel* EquipCategoryLabel; // 0x20
		UILabel* ExpText; // 0x28
		UILabel* AmountLabel; // 0x30
		UISlider* LevelGauge; // 0x38
		::UnityEngine::GameObject* MaxLevelIconImage; // 0x40
		UITexture* ItemImage; // 0x48
		::Il2CppArray<::System::Object*>* TierText; // 0x50
		::Il2CppArray<::System::Object*>* LvText; // 0x58
		::UnityEngine::GameObject* Tier; // 0x60
		::Il2CppArray<::System::Object*>* StatDisplays; // 0x68
		TooltipButton* TooltipButton; // 0x70

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(EquipmentObject* arg)
		{
			((::System::Void(*)(EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::EquipmentExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EquipmentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetStatDisplays(EquipmentObject* arg)
		{
			((::System::Void(*)(EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINFO_SETSTATDISPLAYS_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveTier(::FlatData::EquipmentCategory* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::EquipmentCategory*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINFO_SETACTIVETIER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

