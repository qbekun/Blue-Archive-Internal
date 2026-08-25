#pragma once
#include "unitysdk.h"

class IntTabController;
class RaidDeckListScrollViewController;
class UIRaidDifficultyTag;
class UIEliminateRaidBossGroupInfo;
namespace UnityEngine { class GameObject; }
namespace MX::NetworkProtocol { class EliminateRaidGetBestTeamResponse; }

#define UIPOPUP_ELIMINATERAIDDECK_ONCHANGEDARMORTYPE_OFFSET UNITYSDK_OFFSET(0x23E6F00)
#define UIPOPUP_ELIMINATERAIDDECK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23E7350)
#define UIPOPUP_ELIMINATERAIDDECK_REFRESHSCROLLLIST_OFFSET UNITYSDK_OFFSET(0x23E6F10)
#define UIPOPUP_ELIMINATERAIDDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E7530)
#define UIPOPUP_ELIMINATERAIDDECK_AWAKE_OFFSET UNITYSDK_OFFSET(0x23E7590)
#define UIPOPUP_ELIMINATERAIDDECK_SETCURRENTTABUI_OFFSET UNITYSDK_OFFSET(0x23E7390)
#define UIPOPUP_ELIMINATERAIDDECK_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23E7660)

	inline static constexpr unsigned int UIPopup_EliminateRaidDeck_TypeDefinitionIndex = 5389;

	class UIPopup_EliminateRaidDeck : public Il2CppObject
	{
	public:
		IntTabController* tabController; // 0xD8
		RaidDeckListScrollViewController* scrollView; // 0xE0
		::Il2CppArray<::System::Object*>* tabEnableLabels; // 0xE8
		::Il2CppArray<::System::Object*>* tabDisableLabels; // 0xF0
		UIRaidDifficultyTag* typeHighestDifficultyTag; // 0xF8
		UIEliminateRaidBossGroupInfo* armorTypeInfo; // 0x100
		::UnityEngine::GameObject* EmptyLabel; // 0x108
		::Il2CppArray<::System::Object*>* bossGroups; // 0x110
		::MX::NetworkProtocol::EliminateRaidGetBestTeamResponse* response; // 0x118
		Il2CppObject* bossGroupToRankingPoint; // 0x120

		::System::Void OnChangedArmorType(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDDECK_ONCHANGEDARMORTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MX::NetworkProtocol::EliminateRaidGetBestTeamResponse* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EliminateRaidGetBestTeamResponse*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDDECK_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshScrollList(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDDECK_REFRESHSCROLLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDDECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDDECK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentTabUI(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDDECK_SETCURRENTTABUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ELIMINATERAIDDECK_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

