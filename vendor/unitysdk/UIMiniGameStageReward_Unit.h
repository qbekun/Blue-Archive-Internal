#pragma once
#include "unitysdk.h"

class UILabel;
class UIGrid;
namespace UnityEngine { class GameObject; }
class MXButton;
class MiniGameRewardUIInfo;

#define UIMINIGAMESTAGEREWARD_UNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x20962E0)
#define UIMINIGAMESTAGEREWARD_UNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x20966C0)
#define UIMINIGAMESTAGEREWARD_UNIT_SETPARCELS_OFFSET UNITYSDK_OFFSET(0x2096360)
#define UIMINIGAMESTAGEREWARD_UNIT_ONCLICKSEEALL_OFFSET UNITYSDK_OFFSET(0x2096800)
#define UIMINIGAMESTAGEREWARD_UNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20969A0)

	inline static constexpr unsigned int UIMiniGameStageReward_Unit_TypeDefinitionIndex = 3508;

	class UIMiniGameStageReward_Unit : public ::System::Xml::Serialization::XmlAttributeEventArgs
	{
	public:
		UILabel* SectionLabel; // 0x28
		UIGrid* RewardGrid; // 0x30
		::UnityEngine::GameObject* Normal; // 0x38
		::UnityEngine::GameObject* Hard; // 0x40
		MXButton* SeeAllBtn; // 0x48
		Il2CppObject* parcels; // 0x50
		MiniGameRewardUIInfo* info; // 0x58
		::System::Single gridOffset1; // 0x0
		::System::Single gridOffset2; // 0x0

		::System::Void SetData(MiniGameRewardUIInfo* arg)
		{
			((::System::Void(*)(MiniGameRewardUIInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESTAGEREWARD_UNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESTAGEREWARD_UNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESTAGEREWARD_UNIT_SETPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSeeAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESTAGEREWARD_UNIT_ONCLICKSEEALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESTAGEREWARD_UNIT_.CTOR_OFFSET))(nullptr);
		}

	};

