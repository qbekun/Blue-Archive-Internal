#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UISprite;
class StageDifficultyTabController;
class UIMinigameDefense_StageListObject;
namespace FlatData { class StageDifficulty; }
namespace UnityEngine { class Coroutine; }
class UIEventPlayGuide;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIMinigameMission;

#define UIMINIGAMEDEFENSE_STAGELIST_SETSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0xA61A70)
#define UIMINIGAMEDEFENSE_STAGELIST_ONCLICKPLAYGUIDEBUTTON_OFFSET UNITYSDK_OFFSET(0xA61B20)
#define UIMINIGAMEDEFENSE_STAGELIST__ONCLICKPLAYGUIDEBUTTON_B__19_0_OFFSET UNITYSDK_OFFSET(0xA61BF0)
#define UIMINIGAMEDEFENSE_STAGELIST_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0xA61CB0)
#define UIMINIGAMEDEFENSE_STAGELIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA61D20)
#define UIMINIGAMEDEFENSE_STAGELIST_CO_CHANGENEXTTAB_OFFSET UNITYSDK_OFFSET(0xA61FE0)
#define UIMINIGAMEDEFENSE_STAGELIST_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xA62050)
#define UIMINIGAMEDEFENSE_STAGELIST_CO_SHOWEARNINGSTAGECLEARSTAR_OFFSET UNITYSDK_OFFSET(0xA62210)
#define UIMINIGAMEDEFENSE_STAGELIST_OPENMINIGAMEDEFENSESTAGELIST_OFFSET UNITYSDK_OFFSET(0xA604D0)
#define UIMINIGAMEDEFENSE_STAGELIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA622A0)
#define UIMINIGAMEDEFENSE_STAGELIST__ONDIFFICULTYCHANGED_B__20_0_OFFSET UNITYSDK_OFFSET(0xA623B0)
#define UIMINIGAMEDEFENSE_STAGELIST_AWAKE_OFFSET UNITYSDK_OFFSET(0xA623D0)
#define UIMINIGAMEDEFENSE_STAGELIST_ONDIFFICULTYCHANGED_OFFSET UNITYSDK_OFFSET(0xA62780)
#define UIMINIGAMEDEFENSE_STAGELIST_OPENMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0xA62920)
#define UIMINIGAMEDEFENSE_STAGELIST_CO_SHOWSTAGEUNLOCK_OFFSET UNITYSDK_OFFSET(0xA629F0)
#define UIMINIGAMEDEFENSE_STAGELIST_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA62A80)
#define UIMINIGAMEDEFENSE_STAGELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA62A90)
#define UIMINIGAMEDEFENSE_STAGELIST_CO_INITSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0xA62AB0)
#define UIMINIGAMEDEFENSE_STAGELIST_CO_REFRESHSTAGELIST_OFFSET UNITYSDK_OFFSET(0xA62B40)
#define UIMINIGAMEDEFENSE_STAGELIST_SETDATA_OFFSET UNITYSDK_OFFSET(0xA62BE0)
#define UIMINIGAMEDEFENSE_STAGELIST__OPENMINIGAMEMISSION_B__18_0_OFFSET UNITYSDK_OFFSET(0xA62EC0)
#define UIMINIGAMEDEFENSE_STAGELIST_REFRESHMISSIONREDDOT_OFFSET UNITYSDK_OFFSET(0xA61EC0)
#define UIMINIGAMEDEFENSE_STAGELIST_REFRESHSTAGELIST_OFFSET UNITYSDK_OFFSET(0xA61DF0)
#define UIMINIGAMEDEFENSE_STAGELIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA62F80)

	inline static constexpr unsigned int UIMinigameDefense_StageList_TypeDefinitionIndex = 541;

	class UIMinigameDefense_StageList : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0xD8
		MXButton* backButton; // 0xE0
		MXButton* playGuideButton; // 0xE8
		MXButton* missionButton; // 0xF0
		::UnityEngine::GameObject* missionRedDot; // 0xF8
		UILabel* costAmountLabel; // 0x100
		UISprite* eventCostSprite; // 0x108
		StageDifficultyTabController* difficultyTabController; // 0x110
		::Il2CppArray<::System::Object*>* stageListObjects; // 0x118
		UIMinigameDefense_StageListObject* prevStageListObject; // 0x120
		UIMinigameDefense_StageListObject* currentStageListObject; // 0x128
		::FlatData::StageDifficulty* difficulty; // 0x130
		::UnityEngine::Coroutine* refreshStageListCoroutine; // 0x138

		::System::Collections::IEnumerator* SetScrollPosition(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_SETSCROLLPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickPlayGuideButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_ONCLICKPLAYGUIDEBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickPlayGuideButton_b__19_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST__ONCLICKPLAYGUIDEBUTTON_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ChangeNextTab()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_CO_CHANGENEXTTAB_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowEarningStageClearStar()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_CO_SHOWEARNINGSTAGECLEARSTAR_OFFSET))(nullptr);
		}

		::System::Void OpenMinigameDefenseStageList(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_OPENMINIGAMEDEFENSESTAGELIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean _OnDifficultyChanged_b__20_0(UIMinigameDefense_StageListObject* arg)
		{
			return ((::System::Boolean(*)(UIMinigameDefense_StageListObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST__ONDIFFICULTYCHANGED_B__20_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDifficultyChanged(::System::Boolean arg, ::FlatData::StageDifficulty* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_ONDIFFICULTYCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OpenMinigameMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_OPENMINIGAMEMISSION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowStageUnlock()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_CO_SHOWSTAGEUNLOCK_OFFSET))(nullptr);
		}

		::System::Boolean HandleReddotChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_InitScrollPosition()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_CO_INITSCROLLPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RefreshStageList(::FlatData::StageDifficulty* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_CO_REFRESHSTAGELIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenMinigameMission_b__18_0(UIMinigameMission* arg)
		{
			((::System::Void(*)(UIMinigameMission*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST__OPENMINIGAMEMISSION_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMissionReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_REFRESHMISSIONREDDOT_OFFSET))(nullptr);
		}

		::System::Void RefreshStageList(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_REFRESHSTAGELIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELIST_ONDISABLE_OFFSET))(nullptr);
		}

	};

