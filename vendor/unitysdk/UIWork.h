#pragma once
#include "unitysdk.h"

class MXButton;
class SpineChatDialogContainer;
class UISmallBannerScrollViewController;
namespace UnityEngine { class Transform; }
class UIWorkSpineSet;
namespace FlatData { class ContentType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIWORK_CO_ENTERSCHOOLDUNGEONLOBBY_OFFSET UNITYSDK_OFFSET(0xBD7750)
#define UIWORK_ONCLICKBOSSRAID_OFFSET UNITYSDK_OFFSET(0xBD77B0)
#define UIWORK___N__0_OFFSET UNITYSDK_OFFSET(0xBD7860)
#define UIWORK_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0xBD7870)
#define UIWORK_ONCLICKSCHOOL_OFFSET UNITYSDK_OFFSET(0xBD7890)
#define UIWORK_SETSEASONENDALARMS_OFFSET UNITYSDK_OFFSET(0xBD7980)
#define UIWORK_SET_TARGETSPINEID_OFFSET UNITYSDK_OFFSET(0xBD8FB0)
#define UIWORK__INITSPINE_B__39_4_OFFSET UNITYSDK_OFFSET(0xBD8FC0)
#define UIWORK_RELEASERESOURCES_OFFSET UNITYSDK_OFFSET(0xBD8FF0)
#define UIWORK_GET_LOADEDSPINEID_OFFSET UNITYSDK_OFFSET(0xBD9290)
#define UIWORK_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xBD92A0)
#define UIWORK_ONCLICKWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xBD92C0)
#define UIWORK_GET_TARGETSPINEID_OFFSET UNITYSDK_OFFSET(0xBD9390)
#define UIWORK_ONCLICKARENA_OFFSET UNITYSDK_OFFSET(0xBD93A0)
#define UIWORK_ONCLICKMULTIFLOORRAID_OFFSET UNITYSDK_OFFSET(0xBD9430)
#define UIWORK_CO_ENTERUIWEEKDUNGEONLOBBY_OFFSET UNITYSDK_OFFSET(0xBD9330)
#define UIWORK_ONCLICKELIMINATERAID_OFFSET UNITYSDK_OFFSET(0xBD9780)
#define UIWORK_ONCLICKSTORY_OFFSET UNITYSDK_OFFSET(0xBD9880)
#define UIWORK__ONCLICKMULTIFLOORRAID_G__OPENLOBBY|57_0_OFFSET UNITYSDK_OFFSET(0xBD96F0)
#define UIWORK_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD9930)
#define UIWORK_ONCLICKCHASEDUNGEON_OFFSET UNITYSDK_OFFSET(0xBDA2C0)
#define UIWORK_ONCLICKMISSION_OFFSET UNITYSDK_OFFSET(0xBDA330)
#define UIWORK_START_OFFSET UNITYSDK_OFFSET(0xBDA3E0)
#define UIWORK_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDAF00)
#define UIWORK_SET_LOADEDSPINEID_OFFSET UNITYSDK_OFFSET(0xBDAFE0)
#define UIWORK_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xBDAFF0)
#define UIWORK__INITSPINE_B__39_0_OFFSET UNITYSDK_OFFSET(0xBDB080)
#define UIWORK_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBDB140)
#define UIWORK_SHOWRAIDENDALARM_OFFSET UNITYSDK_OFFSET(0xBD89C0)
#define UIWORK_ONCLICKTIMEATTACK_OFFSET UNITYSDK_OFFSET(0xBDB8D0)
#define UIWORK_INITARONASCENE_OFFSET UNITYSDK_OFFSET(0xBDBA00)
#define UIWORK_INITSPINE_OFFSET UNITYSDK_OFFSET(0xBDBA90)

	inline static constexpr unsigned int UIWork_TypeDefinitionIndex = 8700;

	class UIWork : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		MXButton* missionButton; // 0xE0
		MXButton* raidButton; // 0xE8
		MXButton* arenaButton; // 0xF0
		MXButton* weekDungeonButton; // 0xF8
		MXButton* chaseDungeonButton; // 0x100
		MXButton* schoolDungeonButton; // 0x108
		MXButton* storyButton; // 0x110
		MXButton* timeattackDungeonButton; // 0x118
		MXButton* eliminateRaidButton; // 0x120
		MXButton* multiFloorRaidButton; // 0x128
		SpineChatDialogContainer* container; // 0x130
		::System::Int64 _TargetSpineId_k__BackingField; // 0x138
		::System::Int64 _LoadedSpineId_k__BackingField; // 0x140
		Il2CppObject* campaignEventRewardIncreaseIndicatorList; // 0x148
		Il2CppObject* chaserEventRewardIncreaseIndicatorList; // 0x150
		Il2CppObject* weekEventRewardIncreaseIndicatorList; // 0x158
		Il2CppObject* schoolEventRewardIncreaseIndicatorList; // 0x160
		Il2CppObject* timeattackOpenIndicatorList; // 0x168
		Il2CppObject* raidOpenIndicatorList; // 0x170
		Il2CppObject* eliminateRaidOpenIndicatorList; // 0x178
		Il2CppObject* multiFloorRaidOpenIndicatorList; // 0x180
		Il2CppObject* multiFloorRaidClearStageIndicatorList; // 0x188
		::Il2CppArray<::System::Object*>* openConditionButtonControllers; // 0x190
		UISmallBannerScrollViewController* smallBannerController; // 0x198
		::UnityEngine::Transform* aronaScenesTrans; // 0x1A0
		Il2CppObject* aronaSceneDic; // 0x1A8
		Il2CppObject* spineSets; // 0x1B0

		::System::Collections::IEnumerator* co_EnterSchoolDungeonLobby()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_CO_ENTERSCHOOLDUNGEONLOBBY_OFFSET))(nullptr);
		}

		::System::Void OnClickBossRaid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKBOSSRAID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void OnClickSchool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKSCHOOL_OFFSET))(nullptr);
		}

		::System::Void SetSeasonEndAlarms()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_SETSEASONENDALARMS_OFFSET))(nullptr);
		}

		::System::Void set_TargetSpineId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORK_SET_TARGETSPINEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _InitSpine_b__39_4(UIWorkSpineSet* arg)
		{
			return ((::System::Boolean(*)(UIWorkSpineSet*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORK__INITSPINE_B__39_4_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_RELEASERESOURCES_OFFSET))(nullptr);
		}

		::System::Int64 get_LoadedSpineId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_GET_LOADEDSPINEID_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickWeekDungeon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKWEEKDUNGEON_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetSpineId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_GET_TARGETSPINEID_OFFSET))(nullptr);
		}

		::System::Void OnClickArena()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKARENA_OFFSET))(nullptr);
		}

		::System::Void OnClickMultiFloorRaid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKMULTIFLOORRAID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_EnterUIWeekDungeonLobby(::FlatData::ContentType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORK_CO_ENTERUIWEEKDUNGEONLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEliminateRaid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKELIMINATERAID_OFFSET))(nullptr);
		}

		::System::Void OnClickStory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKSTORY_OFFSET))(nullptr);
		}

		::System::Void _OnClickMultiFloorRaid_g__OpenLobby|57_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK__ONCLICKMULTIFLOORRAID_G__OPENLOBBY|57_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventRewardIncreaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORK_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickChaseDungeon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKCHASEDUNGEON_OFFSET))(nullptr);
		}

		::System::Void OnClickMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKMISSION_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_LoadedSpineId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORK_SET_LOADEDSPINEID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean _InitSpine_b__39_0(UIWorkSpineSet* arg)
		{
			return ((::System::Boolean(*)(UIWorkSpineSet*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORK__INITSPINE_B__39_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowRaidEndAlarm(Il2CppObject* arg, ::System::DateTime* arg2, ::System::DateTime* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORK_SHOWRAIDENDALARM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickTimeAttack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_ONCLICKTIMEATTACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitAronaScene()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_INITARONASCENE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitSpine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORK_INITSPINE_OFFSET))(nullptr);
		}

	};

