#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UISprite;
class UIAdmissionDisplay;
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace MX::Data { class EventContentStageInfo; }
class UIGrid;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data::Excel { class ScenarioModeExcel; }
namespace MX::Data::Excel { class EventContentScenarioExcel; }
namespace MX::Data::Excel { class MiniGameDreamReplayScenarioExcel; }
namespace MX::Data { class MiniGameDefenseStageInfo; }

#define UISCENARIOMODE_EPISODEPOPUP_GET_PARCELGRID_OFFSET UNITYSDK_OFFSET(0x27F52F0)
#define UISCENARIOMODE_EPISODEPOPUP_GET_HASBATTLE_OFFSET UNITYSDK_OFFSET(0x27F5340)
#define UISCENARIOMODE_EPISODEPOPUP_SET_HASBATTLE_OFFSET UNITYSDK_OFFSET(0x27F5350)
#define UISCENARIOMODE_EPISODEPOPUP_GET_PARCELCARDS_OFFSET UNITYSDK_OFFSET(0x27F5370)
#define UISCENARIOMODE_EPISODEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x27F54E0)
#define UISCENARIOMODE_EPISODEPOPUP_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x27F5A60)
#define UISCENARIOMODE_EPISODEPOPUP_ONCLICKENEMYINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x27F5B20)
#define UISCENARIOMODE_EPISODEPOPUP_ONCLICKPLAYBUTTON_OFFSET UNITYSDK_OFFSET(0x27F5CF0)
#define UISCENARIOMODE_EPISODEPOPUP_GETSCENARIOGROUPIDSANDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x27F61B0)
#define UISCENARIOMODE_EPISODEPOPUP_ONCLICKPREVEVENTCONTENTSTAGEBUTTON_OFFSET UNITYSDK_OFFSET(0x27F6540)
#define UISCENARIOMODE_EPISODEPOPUP_MOVETOPREVNEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x27F6550)
#define UISCENARIOMODE_EPISODEPOPUP_ONCLICKNEXTEVENTCONTENTSTAGEBUTTON_OFFSET UNITYSDK_OFFSET(0x27F6EE0)
#define UISCENARIOMODE_EPISODEPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27F6EF0)
#define UISCENARIOMODE_EPISODEPOPUP_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27F7000)
#define UISCENARIOMODE_EPISODEPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27F7180)
#define UISCENARIOMODE_EPISODEPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27F72F0)
#define UISCENARIOMODE_EPISODEPOPUP_REFRESHNAVIGATEBUTTON_OFFSET UNITYSDK_OFFSET(0x27F7310)
#define UISCENARIOMODE_EPISODEPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x27F77E0)
#define UISCENARIOMODE_EPISODEPOPUP_SETUIMODE_OFFSET UNITYSDK_OFFSET(0x27F7830)
#define UISCENARIOMODE_EPISODEPOPUP_SETRECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x27F7CF0)
#define UISCENARIOMODE_EPISODEPOPUP_SETREWARDS_OFFSET UNITYSDK_OFFSET(0x27F7DB0)
#define UISCENARIOMODE_EPISODEPOPUP_SETREWARDS_OFFSET UNITYSDK_OFFSET(0x27F8190)
#define UISCENARIOMODE_EPISODEPOPUP_SETDATAEVENTRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x27F86B0)
#define UISCENARIOMODE_EPISODEPOPUP_SETDATAEVENTREPLAY_OFFSET UNITYSDK_OFFSET(0x27F8B40)
#define UISCENARIOMODE_EPISODEPOPUP_SETUIRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x27F8770)
#define UISCENARIOMODE_EPISODEPOPUP_SETDATAEVENTCONTENTSTORYSTAGE_OFFSET UNITYSDK_OFFSET(0x27F8E90)
#define UISCENARIOMODE_EPISODEPOPUP_SETBUTTONANDADMISSIONFORSTORY_OFFSET UNITYSDK_OFFSET(0x27F7F10)
#define UISCENARIOMODE_EPISODEPOPUP_SETBUTTONANDADMISSIONFORSTORYWITHCURRENCY_OFFSET UNITYSDK_OFFSET(0x27F9410)
#define UISCENARIOMODE_EPISODEPOPUP_SETBUTTONANDADMISSIONFOREXTRA_OFFSET UNITYSDK_OFFSET(0x27F9690)
#define UISCENARIOMODE_EPISODEPOPUP_SETBUTTONSACTIONFORMINIGAMEDEFENSESTORY_OFFSET UNITYSDK_OFFSET(0x27F97A0)
#define UISCENARIOMODE_EPISODEPOPUP_SETDATAMINIGAMEDEFENSESTORYSTAGE_OFFSET UNITYSDK_OFFSET(0x27F9AA0)
#define UISCENARIOMODE_EPISODEPOPUP_SETUISTORYSTAGE_OFFSET UNITYSDK_OFFSET(0x27F8EF0)
#define UISCENARIOMODE_EPISODEPOPUP_PLAY_OFFSET UNITYSDK_OFFSET(0x27FA1A0)
#define UISCENARIOMODE_EPISODEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x27FA7D0)
#define UISCENARIOMODE_EPISODEPOPUP___N__0_OFFSET UNITYSDK_OFFSET(0x27FA7E0)
#define UISCENARIOMODE_EPISODEPOPUP__ONCLICKPLAYBUTTON_B__40_1_OFFSET UNITYSDK_OFFSET(0x27FA800)
#define UISCENARIOMODE_EPISODEPOPUP__ONCLICKPLAYBUTTON_B__40_2_OFFSET UNITYSDK_OFFSET(0x27FA890)
#define UISCENARIOMODE_EPISODEPOPUP__ONCLICKPLAYBUTTON_B__40_3_OFFSET UNITYSDK_OFFSET(0x27FA8A0)
#define UISCENARIOMODE_EPISODEPOPUP__PLAY_B__65_0_OFFSET UNITYSDK_OFFSET(0x27FA930)

	inline static constexpr unsigned int UIScenarioMode_EpisodePopup_TypeDefinitionIndex = 7742;

	class UIScenarioMode_EpisodePopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* episodeNumber; // 0xE0
		UILabel* episodeTitle; // 0xE8
		::Il2CppArray<::System::Object*>* parcelGrids; // 0xF0
		::UnityEngine::GameObject* normalInfo; // 0xF8
		::UnityEngine::GameObject* battleInfo; // 0x100
		::UnityEngine::GameObject* recommandedLevelRoot; // 0x108
		UILabel* recommandedLevelLabel; // 0x110
		MXButton* enemyInfoButton; // 0x118
		UISprite* topology; // 0x120
		MXButton* playButton; // 0x128
		::UnityEngine::GameObject* playButtonDisabled; // 0x130
		MXButton* playWithCurrencyButton; // 0x138
		MXButton* playButtonExtra; // 0x140
		UIAdmissionDisplay* costAdmissionDisplay; // 0x148
		UIAdmissionDisplay* costAdmissionDisplayForExtra; // 0x150
		MXButton* prevEventContentStageButton; // 0x158
		MXButton* nextEventContentStageButton; // 0x160
		UILabel* rewardEmptyNormalLabel; // 0x168
		UILabel* rewardEmptyBattleLabel; // 0x170
		::FlatData::ScenarioModeTypes* type; // 0x178
		::FlatData::ScenarioModeReplayTypes* replayType; // 0x17C
		::System::Int64 modeId; // 0x180
		Il2CppObject* volumeId; // 0x188
		::System::Boolean canWatch; // 0x198
		::System::Boolean currentModeCleared; // 0x199
		Il2CppObject* eventContentScenarioExcel; // 0x1A0
		::MX::Data::EventContentStageInfo* eventContentStageInfo; // 0x1B8
		::System::Boolean _hasBattle; // 0x1C0
		Il2CppObject* _parcelCards; // 0x1C8

		UIGrid* get_ParcelGrid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_GET_PARCELGRID_OFFSET))(nullptr);
		}

		::System::Boolean get_HasBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_GET_HASBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_HasBattle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SET_HASBATTLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelCards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_GET_PARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickEnemyInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_ONCLICKENEMYINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickPlayButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_ONCLICKPLAYBUTTON_OFFSET))(nullptr);
		}

		Il2CppObject* GetScenarioGroupIdsAndEventContentId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_GETSCENARIOGROUPIDSANDEVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void OnClickPrevEventContentStageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_ONCLICKPREVEVENTCONTENTSTAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void MoveToPrevNextStage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_MOVETOPREVNEXTSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickNextEventContentStageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_ONCLICKNEXTEVENTCONTENTSTAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshNavigateButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_REFRESHNAVIGATEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetUIMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETUIMODE_OFFSET))(nullptr);
		}

		::System::Void SetRecommendLevel(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETRECOMMENDLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetRewards(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETREWARDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRewards(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETREWARDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDataEventRecollection(::MX::Data::Excel::EventContentScenarioExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETDATAEVENTRECOLLECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDataEventReplay(::MX::Data::Excel::MiniGameDreamReplayScenarioExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamReplayScenarioExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETDATAEVENTREPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetUIRecollection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETUIRECOLLECTION_OFFSET))(nullptr);
		}

		::System::Void SetDataEventContentStoryStage(::MX::Data::EventContentStageInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETDATAEVENTCONTENTSTORYSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetButtonAndAdmissionForStory(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETBUTTONANDADMISSIONFORSTORY_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtonAndAdmissionForStoryWithCurrency(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETBUTTONANDADMISSIONFORSTORYWITHCURRENCY_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtonAndAdmissionForExtra()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETBUTTONANDADMISSIONFOREXTRA_OFFSET))(nullptr);
		}

		::System::Void SetButtonsActionForMinigameDefenseStory(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETBUTTONSACTIONFORMINIGAMEDEFENSESTORY_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataMinigameDefenseStoryStage(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETDATAMINIGAMEDEFENSESTORYSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUIStoryStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_SETUISTORYSTAGE_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_PLAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP___N__0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OnClickPlayButton_b__40_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP__ONCLICKPLAYBUTTON_B__40_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickPlayButton_b__40_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP__ONCLICKPLAYBUTTON_B__40_2_OFFSET))(nullptr);
		}

		::System::Void _OnClickPlayButton_b__40_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP__ONCLICKPLAYBUTTON_B__40_3_OFFSET))(nullptr);
		}

		::System::Void _Play_b__65_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EPISODEPOPUP__PLAY_B__65_0_OFFSET))(nullptr);
		}

	};

