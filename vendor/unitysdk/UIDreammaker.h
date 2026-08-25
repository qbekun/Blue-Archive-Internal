#pragma once
#include "unitysdk.h"

namespace MX::Core::Math { class IRandomService; }
namespace MX::Data { class EventContentSeasonInfo; }
class MXButton;
namespace UnityEngine { class Animation; }
class UIDreammakerStatInfoUI;
class UISprite;
class UILabel;
class UIPopup_DreamMaker_ScheduleList;
class UILobbyScreenshotMode;
namespace UnityEngine { class Coroutine; }
class UIDreammaker;
namespace MX::Data::Excel { class MiniGameDreamInfoExcel; }
namespace MX::Data::Excel { class MiniGameDreamTimelineExcel; }
namespace UnityEngine { class GameObject; }
class UIDreamMakerSceneManager;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }
class DreammakerBubble;
namespace FlatData { class DreamMakerResult; }
namespace MX::GameLogic::DBModel { class MiniGameDreamMakerInfoDB; }
namespace MX::NetworkProtocol { class MiniGameDreamMakerDailyClosingResponse; }
class UIPopup_System;
class DreamCharacter;
namespace FlatData { class BubbleType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class MiniGameDreamMakerEndingResponse; }

#define UIDREAMMAKER_SET_CURRENTDREAMMAKER_OFFSET UNITYSDK_OFFSET(0xB91920)
#define UIDREAMMAKER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB91970)
#define UIDREAMMAKER___N__0_OFFSET UNITYSDK_OFFSET(0xB91BD0)
#define UIDREAMMAKER_GET_INFODB_OFFSET UNITYSDK_OFFSET(0xB91BE0)
#define UIDREAMMAKER_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB91C70)
#define UIDREAMMAKER_SET_DREAMSEASONINFO_OFFSET UNITYSDK_OFFSET(0xB91FE0)
#define UIDREAMMAKER__CHECKACTIONCOUNTFOREVENT_B__55_1_OFFSET UNITYSDK_OFFSET(0xB92000)
#define UIDREAMMAKER_PLAYSINGLESCENARIO_OFFSET UNITYSDK_OFFSET(0xB927E0)
#define UIDREAMMAKER_SHOWSCHEDULELIST_OFFSET UNITYSDK_OFFSET(0xB92C50)
#define UIDREAMMAKER__CHECKDAYEND_B__65_0_OFFSET UNITYSDK_OFFSET(0xB92C80)
#define UIDREAMMAKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB92EC0)
#define UIDREAMMAKER_HIDESCHEDULELIST_OFFSET UNITYSDK_OFFSET(0xB92FE0)
#define UIDREAMMAKER_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB930B0)
#define UIDREAMMAKER_WAITANDINVOKE_OFFSET UNITYSDK_OFFSET(0xB93940)
#define UIDREAMMAKER__ONCOLLECTIONSCENARIOPLAYFINISHED_B__64_2_OFFSET UNITYSDK_OFFSET(0xB939D0)
#define UIDREAMMAKER_UNLOADRESOURCES_OFFSET UNITYSDK_OFFSET(0xB91C90)
#define UIDREAMMAKER_UNLOADBUBBLE_OFFSET UNITYSDK_OFFSET(0xB93AB0)
#define UIDREAMMAKER_REFRESHDREAMMAKER_OFFSET UNITYSDK_OFFSET(0xB935D0)
#define UIDREAMMAKER_SETUI_OFFSET UNITYSDK_OFFSET(0xB932B0)
#define UIDREAMMAKER_ENTERSCREENSHOTMODE_OFFSET UNITYSDK_OFFSET(0xB95340)
#define UIDREAMMAKER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB95460)
#define UIDREAMMAKER_GET_PARAMETERDBS_OFFSET UNITYSDK_OFFSET(0xB94430)
#define UIDREAMMAKER_SETMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0xB942A0)
#define UIDREAMMAKER_SET3DOBJECT_OFFSET UNITYSDK_OFFSET(0xB92580)
#define UIDREAMMAKER_CHECKACTIONCOUNTFOREVENT_OFFSET UNITYSDK_OFFSET(0xB95CA0)
#define UIDREAMMAKER_STOPCURRENTMONOLOGUE_OFFSET UNITYSDK_OFFSET(0xB8FFF0)
#define UIDREAMMAKER_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0xB96210)
#define UIDREAMMAKER_PLAYSCENARIO_OFFSET UNITYSDK_OFFSET(0xB961D0)
#define UIDREAMMAKER_CHECKCOLLECTIONSCENARIOBYPARAMETER_OFFSET UNITYSDK_OFFSET(0xB93B50)
#define UIDREAMMAKER_GET_DREAMSEASONINFO_OFFSET UNITYSDK_OFFSET(0xB96510)
#define UIDREAMMAKER_LOADBUBBLE_OFFSET UNITYSDK_OFFSET(0xB8EB90)
#define UIDREAMMAKER_GET_SCREENSHOTMODE_OFFSET UNITYSDK_OFFSET(0xB96520)
#define UIDREAMMAKER_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB96590)
#define UIDREAMMAKER_GETSCENARIOLISTTOSHOWONLY_OFFSET UNITYSDK_OFFSET(0xB96230)
#define UIDREAMMAKER_GET_CURRENTDREAMMAKER_OFFSET UNITYSDK_OFFSET(0xB96680)
#define UIDREAMMAKER_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xB966C0)
#define UIDREAMMAKER_CO_LOAD3D_OFFSET UNITYSDK_OFFSET(0xB96760)
#define UIDREAMMAKER__CHECKENDING_B__66_1_OFFSET UNITYSDK_OFFSET(0xB967F0)
#define UIDREAMMAKER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB96AD0)
#define UIDREAMMAKER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB96D50)
#define UIDREAMMAKER_SETDATA_OFFSET UNITYSDK_OFFSET(0xB96DE0)
#define UIDREAMMAKER__CHECKENDING_B__66_0_OFFSET UNITYSDK_OFFSET(0xB96E80)
#define UIDREAMMAKER__ENTERSCREENSHOTMODE_B__63_0_OFFSET UNITYSDK_OFFSET(0xB96F50)
#define UIDREAMMAKER_CHECKDAYEND_OFFSET UNITYSDK_OFFSET(0xB96050)
#define UIDREAMMAKER_PLAYDREAMCHARACTERREACTION_OFFSET UNITYSDK_OFFSET(0xB92130)
#define UIDREAMMAKER_CHECKENDING_OFFSET UNITYSDK_OFFSET(0xB933F0)
#define UIDREAMMAKER_ONCOLLECTIONSCENARIOPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xB97110)
#define UIDREAMMAKER__ONCOLLECTIONSCENARIOPLAYFINISHED_B__64_4_OFFSET UNITYSDK_OFFSET(0xB977E0)

	inline static constexpr unsigned int UIDreammaker_TypeDefinitionIndex = 576;

	class UIDreammaker : public Il2CppObject
	{
	public:
		::MX::Core::Math::IRandomService* _random_k__BackingField; // 0xD8
		::MX::Data::EventContentSeasonInfo* _DreamSeasonInfo_k__BackingField; // 0xE0
		MXButton* showScheduleButton; // 0xE8
		MXButton* screenShotModeButton; // 0xF0
		::UnityEngine::Animation* scheduleListOpenAnimation; // 0xF8
		UIDreammakerStatInfoUI* statInfoUI; // 0x100
		UISprite* eventMaterialSprite; // 0x108
		UILabel* eventMaterialCountText; // 0x110
		UIPopup_DreamMaker_ScheduleList* scheduleList; // 0x118
		UILobbyScreenshotMode* screenshotMode; // 0x120
		::UnityEngine::Coroutine* enterScreenshotModeCoroutine; // 0x128
		UIDreammaker* _CurrentDreamMaker_k__BackingField; // 0x0
		::MX::Data::Excel::MiniGameDreamInfoExcel* infoExcel; // 0x130
		::MX::Data::Excel::MiniGameDreamTimelineExcel* timelineExcelNow; // 0x140
		::UnityEngine::GameObject* dream3DRoot; // 0x150
		UIDreamMakerSceneManager* dream3DSceneManager; // 0x158
		::UnityEngine::Camera* dreamCamera; // 0x160
		::System::Action* scenarioFinishAction; // 0x168
		::UnityEngine::Vector3* defaultCameraPosition; // 0x170
		::System::Single defaultZoom; // 0x17C
		Il2CppObject* bubblePool; // 0x180
		DreammakerBubble* bubblePrefab; // 0x188
		::System::Int32 defaultCafeCharacterCount; // 0x190
		Il2CppObject* displayedBubbles; // 0x198
		DreammakerBubble* CurrentMonologuePlayingBubble; // 0x1A0
		::FlatData::DreamMakerResult* dreamResult; // 0x1A8

		::System::Void set_CurrentDreamMaker(UIDreammaker* arg)
		{
			((::System::Void(*)(UIDreammaker*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SET_CURRENTDREAMMAKER_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER___N__0_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* get_infoDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_GET_INFODB_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void set_DreamSeasonInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SET_DREAMSEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void _CheckActionCountForEvent_b__55_1(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER__CHECKACTIONCOUNTFOREVENT_B__55_1_OFFSET))(arg, nullptr);
		}

		::System::Void PlaySingleScenario(Il2CppObject* arg, ::System::Int32 arg2, Il2CppObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PLAYSINGLESCENARIO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ShowScheduleList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SHOWSCHEDULELIST_OFFSET))(nullptr);
		}

		::System::Void _CheckDayEnd_b__65_0(::MX::NetworkProtocol::MiniGameDreamMakerDailyClosingResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameDreamMakerDailyClosingResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER__CHECKDAYEND_B__65_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HideScheduleList(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_HIDESCHEDULELIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* WaitAndInvoke()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_WAITANDINVOKE_OFFSET))(nullptr);
		}

		::System::Void _OnCollectionScenarioPlayFinished_b__64_2(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER__ONCOLLECTIONSCENARIOPLAYFINISHED_B__64_2_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_UNLOADRESOURCES_OFFSET))(nullptr);
		}

		::System::Void UnloadBubble(DreammakerBubble* arg)
		{
			((::System::Void(*)(DreammakerBubble*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_UNLOADBUBBLE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshDreamMaker(::FlatData::DreamMakerResult* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_REFRESHDREAMMAKER_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SETUI_OFFSET))(nullptr);
		}

		::System::Void EnterScreenshotMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_ENTERSCREENSHOTMODE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_AWAKE_OFFSET))(nullptr);
		}

		Il2CppObject* get_parameterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_GET_PARAMETERDBS_OFFSET))(nullptr);
		}

		::System::Void SetMaterialCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SETMATERIALCOUNT_OFFSET))(nullptr);
		}

		::System::Void Set3DObject(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SET3DOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckActionCountForEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_CHECKACTIONCOUNTFOREVENT_OFFSET))(nullptr);
		}

		::System::Void StopCurrentMonologue(DreammakerBubble* arg)
		{
			((::System::Void(*)(DreammakerBubble*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_STOPCURRENTMONOLOGUE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::IRandomService* get_random()
		{
			return ((::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_GET_RANDOM_OFFSET))(nullptr);
		}

		::System::Void PlayScenario(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PLAYSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckCollectionScenarioByParameter(::FlatData::DreamMakerResult* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_CHECKCOLLECTIONSCENARIOBYPARAMETER_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get_DreamSeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_GET_DREAMSEASONINFO_OFFSET))(nullptr);
		}

		DreammakerBubble* LoadBubble(DreamCharacter* arg, ::FlatData::BubbleType* arg2)
		{
			return ((DreammakerBubble*(*)(DreamCharacter*, ::FlatData::BubbleType*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_LOADBUBBLE_OFFSET))(arg, arg2, nullptr);
		}

		UILobbyScreenshotMode* get_ScreenshotMode()
		{
			return ((UILobbyScreenshotMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_GET_SCREENSHOTMODE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentScenarioGroupHistoryUpdateResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetScenarioListToShowOnly(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_GETSCENARIOLISTTOSHOWONLY_OFFSET))(arg, nullptr);
		}

		UIDreammaker* get_CurrentDreamMaker()
		{
			return ((UIDreammaker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_GET_CURRENTDREAMMAKER_OFFSET))(nullptr);
		}

		::System::Void OnScreenResolutionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_ONSCREENRESOLUTIONCHANGED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Load3D()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_CO_LOAD3D_OFFSET))(nullptr);
		}

		::System::Void _CheckEnding_b__66_1(::MX::NetworkProtocol::MiniGameDreamMakerEndingResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameDreamMakerEndingResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER__CHECKENDING_B__66_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _CheckEnding_b__66_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER__CHECKENDING_B__66_0_OFFSET))(arg, nullptr);
		}

		::System::Void _EnterScreenshotMode_b__63_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER__ENTERSCREENSHOTMODE_B__63_0_OFFSET))(nullptr);
		}

		::System::Void CheckDayEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_CHECKDAYEND_OFFSET))(nullptr);
		}

		::System::Void PlayDreamCharacterReaction(::FlatData::DreamMakerResult* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PLAYDREAMCHARACTERREACTION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckEnding(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_CHECKENDING_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionScenarioPlayFinished(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_ONCOLLECTIONSCENARIOPLAYFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnCollectionScenarioPlayFinished_b__64_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER__ONCOLLECTIONSCENARIOPLAYFINISHED_B__64_4_OFFSET))(nullptr);
		}

	};

