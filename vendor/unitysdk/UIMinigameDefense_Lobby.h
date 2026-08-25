#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
class MXButton;
class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIEventPlayGuide;
class UIMinigameMission;

#define UIMINIGAMEDEFENSE_LOBBY_OPENMINIGAMEDEFENSEENTERLOBBY_OFFSET UNITYSDK_OFFSET(0xA5F650)
#define UIMINIGAMEDEFENSE_LOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0xA5F940)
#define UIMINIGAMEDEFENSE_LOBBY_REFRESHMISSIONREDDOT_OFFSET UNITYSDK_OFFSET(0xA5FD00)
#define UIMINIGAMEDEFENSE_LOBBY_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0xA5FE20)
#define UIMINIGAMEDEFENSE_LOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xA5FEB0)
#define UIMINIGAMEDEFENSE_LOBBY_OPENMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0xA60000)
#define UIMINIGAMEDEFENSE_LOBBY_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA600D0)
#define UIMINIGAMEDEFENSE_LOBBY_SETDATA_OFFSET UNITYSDK_OFFSET(0xA600E0)
#define UIMINIGAMEDEFENSE_LOBBY_ONCLICKPLAYGUIDEBUTTON_OFFSET UNITYSDK_OFFSET(0xA60310)
#define UIMINIGAMEDEFENSE_LOBBY__ONCLICKPLAYGUIDEBUTTON_B__21_0_OFFSET UNITYSDK_OFFSET(0xA603E0)
#define UIMINIGAMEDEFENSE_LOBBY_OPENDEFENSESTAGELIST_OFFSET UNITYSDK_OFFSET(0xA604A0)
#define UIMINIGAMEDEFENSE_LOBBY__OPENMINIGAMEMISSION_B__15_0_OFFSET UNITYSDK_OFFSET(0xA606A0)
#define UIMINIGAMEDEFENSE_LOBBY__ONOPENED_B__13_0_OFFSET UNITYSDK_OFFSET(0xA60760)
#define UIMINIGAMEDEFENSE_LOBBY_TRYSHOWEVENTCONTENTGUIDE_OFFSET UNITYSDK_OFFSET(0xA608D0)
#define UIMINIGAMEDEFENSE_LOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA609F0)
#define UIMINIGAMEDEFENSE_LOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA60A00)
#define UIMINIGAMEDEFENSE_LOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA60C20)
#define UIMINIGAMEDEFENSE_LOBBY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA60D30)

	inline static constexpr unsigned int UIMinigameDefense_Lobby_TypeDefinitionIndex = 522;

	class UIMinigameDefense_Lobby : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0xD8
		MXButton* backButton; // 0xE0
		MXButton* startButton; // 0xE8
		MXButton* playGuideButton; // 0xF0
		MXButton* missionButton; // 0xF8
		UILabel* costAmountLabel; // 0x100
		UISprite* eventCostSprite; // 0x108
		::UnityEngine::GameObject* missionRedDot; // 0x110

		::System::Void OpenMinigameDefenseEnterLobby(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_OPENMINIGAMEDEFENSEENTERLOBBY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshMissionReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_REFRESHMISSIONREDDOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_CREATESTACKUI_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void OpenMinigameMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_OPENMINIGAMEMISSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleReddotChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPlayGuideButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_ONCLICKPLAYGUIDEBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickPlayGuideButton_b__21_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY__ONCLICKPLAYGUIDEBUTTON_B__21_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenDefenseStageList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_OPENDEFENSESTAGELIST_OFFSET))(nullptr);
		}

		::System::Void _OpenMinigameMission_b__15_0(UIMinigameMission* arg)
		{
			((::System::Void(*)(UIMinigameMission*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY__OPENMINIGAMEMISSION_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_b__13_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY__ONOPENED_B__13_0_OFFSET))(nullptr);
		}

		::System::Void TryShowEventContentGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_TRYSHOWEVENTCONTENTGUIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_LOBBY_ONDISABLE_OFFSET))(nullptr);
		}

	};

