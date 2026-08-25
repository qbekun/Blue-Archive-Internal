#pragma once
#include "unitysdk.h"

class StageClearIconPlayer;
class StageOpenConditionController;
class UIWidget;
class UIPanel;
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
class UIScenarioMode_EpisodePopup;

#define UISCENARIOMODE_EPISODEUNIT__ENTERSCENARIOMODE_B__39_0_OFFSET UNITYSDK_OFFSET(0x27FB100)
#define UISCENARIOMODE_EPISODEUNIT_SHOWINFONARRATIVEFIELDROOTS_OFFSET UNITYSDK_OFFSET(0x27FB160)
#define UISCENARIOMODE_EPISODEUNIT_SETUIDEFAULT_OFFSET UNITYSDK_OFFSET(0x27FB1B0)
#define UISCENARIOMODE_EPISODEUNIT_SETWIDGETS_OFFSET UNITYSDK_OFFSET(0x27FB780)
#define UISCENARIOMODE_EPISODEUNIT_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x27EDA20)
#define UISCENARIOMODE_EPISODEUNIT_SETEPISODETITLELABELS_OFFSET UNITYSDK_OFFSET(0x27FB690)
#define UISCENARIOMODE_EPISODEUNIT__STARTEVENTSCENARIOGROUP_G__DELAYINVOKE|40_3_OFFSET UNITYSDK_OFFSET(0x27FBA40)
#define UISCENARIOMODE_EPISODEUNIT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x27FB940)
#define UISCENARIOMODE_EPISODEUNIT_PLAYCLEARICONANIMATION_OFFSET UNITYSDK_OFFSET(0x27ED480)
#define UISCENARIOMODE_EPISODEUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x27FBB50)
#define UISCENARIOMODE_EPISODEUNIT_GET_PARENTPANEL_OFFSET UNITYSDK_OFFSET(0x27FBAC0)
#define UISCENARIOMODE_EPISODEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x27FBCE0)
#define UISCENARIOMODE_EPISODEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27FBDE0)
#define UISCENARIOMODE_EPISODEUNIT_GET_ISUNLOCKCONTROLLERREADYTOPLAY_OFFSET UNITYSDK_OFFSET(0x27ED0F0)
#define UISCENARIOMODE_EPISODEUNIT_SHOWINFOBATTLEROOTS_OFFSET UNITYSDK_OFFSET(0x27FB6E0)
#define UISCENARIOMODE_EPISODEUNIT_STARTEVENTSCENARIOGROUP_OFFSET UNITYSDK_OFFSET(0x27FBE30)
#define UISCENARIOMODE_EPISODEUNIT_SETEPISODENUMBERLABELS_OFFSET UNITYSDK_OFFSET(0x27FB580)
#define UISCENARIOMODE_EPISODEUNIT_SHOWINFONOBATTLEROOTS_OFFSET UNITYSDK_OFFSET(0x27FB730)
#define UISCENARIOMODE_EPISODEUNIT_GETEVENTSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x27FC120)
#define UISCENARIOMODE_EPISODEUNIT_SETUI_OFFSET UNITYSDK_OFFSET(0x27FBDC0)
#define UISCENARIOMODE_EPISODEUNIT_SETUIREPLAY_OFFSET UNITYSDK_OFFSET(0x27FC1F0)
#define UISCENARIOMODE_EPISODEUNIT_ONCLICKENTERBUTTON_OFFSET UNITYSDK_OFFSET(0x27FC790)
#define UISCENARIOMODE_EPISODEUNIT_ENTERSCENARIOMODE_OFFSET UNITYSDK_OFFSET(0x27FCB40)
#define UISCENARIOMODE_EPISODEUNIT_GET_ISCLEARICONREADYTOPLAY_OFFSET UNITYSDK_OFFSET(0x27ED0A0)

	inline static constexpr unsigned int UIScenarioMode_EpisodeUnit_TypeDefinitionIndex = 7748;

	class UIScenarioMode_EpisodeUnit : public ::System::Xml::XPath::XPathItem
	{
	public:
		::Il2CppArray<::System::Object*>* newTagRoots; // 0x28
		::Il2CppArray<::System::Object*>* episodeNumberLabels; // 0x30
		StageClearIconPlayer* stageClearIconPlayer; // 0x38
		::Il2CppArray<::System::Object*>* episodeTitleLabels; // 0x40
		::Il2CppArray<::System::Object*>* disabledEpisodeTitleLabels; // 0x48
		::Il2CppArray<::System::Object*>* infoBattleRoots; // 0x50
		::Il2CppArray<::System::Object*>* infoNoBattleRoots; // 0x58
		::Il2CppArray<::System::Object*>* infoNarrativeFieldRoots; // 0x60
		::Il2CppArray<::System::Object*>* numberObjects; // 0x68
		::Il2CppArray<::System::Object*>* noNumberObjects; // 0x70
		::Il2CppArray<::System::Object*>* grids; // 0x78
		StageOpenConditionController* stageOpenConditionController; // 0x80
		::Il2CppArray<::System::Object*>* enterButtons; // 0x88
		UIWidget* rootWidget; // 0x90
		UIPanel* parentPanel; // 0x98
		::FlatData::ScenarioModeTypes* type; // 0xA0
		::FlatData::ScenarioModeReplayTypes* replayTypes; // 0xA4
		::System::Int64 modeId; // 0xA8
		::System::Boolean canWatch; // 0xB0
		::System::Boolean currentModeCleared; // 0xB1

		::System::Void _EnterScenarioMode_b__39_0(UIScenarioMode_EpisodePopup* arg)
		{
			((::System::Void(*)(UIScenarioMode_EpisodePopup*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT__ENTERSCENARIOMODE_B__39_0_OFFSET))(arg, nullptr);
		}

		::System::Void ShowInfoNarrativeFieldRoots(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SHOWINFONARRATIVEFIELDROOTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetUIDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SETUIDEFAULT_OFFSET))(nullptr);
		}

		::System::Void SetWidgets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SETWIDGETS_OFFSET))(nullptr);
		}

		::System::Single PlayUnlockAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetEpisodeTitleLabels(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SETEPISODETITLELABELS_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* _StartEventScenarioGroup_g__DelayInvoke|40_3(::System::Single arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT__STARTEVENTSCENARIOGROUP_G__DELAYINVOKE|40_3_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Single PlayClearIconAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_PLAYCLEARICONANIMATION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_AWAKE_OFFSET))(nullptr);
		}

		UIPanel* get_ParentPanel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_GET_PARENTPANEL_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnlockControllerReadyToPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_GET_ISUNLOCKCONTROLLERREADYTOPLAY_OFFSET))(nullptr);
		}

		::System::Void ShowInfoBattleRoots(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SHOWINFOBATTLEROOTS_OFFSET))(arg, nullptr);
		}

		::System::Void StartEventScenarioGroup(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_STARTEVENTSCENARIOGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEpisodeNumberLabels(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SETEPISODENUMBERLABELS_OFFSET))(arg, nullptr);
		}

		::System::Void ShowInfoNoBattleRoots(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SHOWINFONOBATTLEROOTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEventScenarioExcel(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_GETEVENTSCENARIOEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SETUI_OFFSET))(nullptr);
		}

		::System::Void SetUIReplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_SETUIREPLAY_OFFSET))(nullptr);
		}

		::System::Void OnClickEnterButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_ONCLICKENTERBUTTON_OFFSET))(nullptr);
		}

		::System::Void EnterScenarioMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_ENTERSCENARIOMODE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClearIconReadyToPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEUNIT_GET_ISCLEARICONREADYTOPLAY_OFFSET))(nullptr);
		}

	};

