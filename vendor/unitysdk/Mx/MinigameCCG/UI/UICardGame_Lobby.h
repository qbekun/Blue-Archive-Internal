#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG::UI { class UICardGame_TokenElement; }
namespace MX::NetworkProtocol { class MiniGameCCGCompleteGameResponse; }
namespace MX::MinigameCCG::UI { class UICardGame_LobbyPopup; }
namespace MX::NetworkProtocol { class MiniGameCCGCreateGameResponse; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKCONTINUEGAME_OFFSET UNITYSDK_OFFSET(0x1DFCB70)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_SETPERKSTATEINFO_OFFSET UNITYSDK_OFFSET(0x1DFCDF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DFD490)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKNEWGAME_OFFSET UNITYSDK_OFFSET(0x1DFDB50)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DFE090)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x1DFEA20)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_SETLOGO_OFFSET UNITYSDK_OFFSET(0x1DFE7C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKCONTINUEGAME_B__32_1_OFFSET UNITYSDK_OFFSET(0x1DFEAB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF640)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x1DFF650)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKNEWGAME_B__31_2_OFFSET UNITYSDK_OFFSET(0x1DFF6E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKPLAYGUIDEBUTTON_OFFSET UNITYSDK_OFFSET(0x1DFF6F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKCONTINUEGAME_B__32_0_OFFSET UNITYSDK_OFFSET(0x1DFF7C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKSWEEPPOPUP_OFFSET UNITYSDK_OFFSET(0x1DFF8E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_SETDOT_OFFSET UNITYSDK_OFFSET(0x1DFFBA0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKNEWGAME_G__ENTER|31_1_OFFSET UNITYSDK_OFFSET(0x1DFDED0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKNEWGAME_B__31_4_OFFSET UNITYSDK_OFFSET(0x1DFFCF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_CANSTARTNEWGAME_OFFSET UNITYSDK_OFFSET(0x1DFFF20)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_GET_CANSWEEP_OFFSET UNITYSDK_OFFSET(0x1DFE730)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x1DFFF30)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKPLAYGUIDEBUTTON_B__37_0_OFFSET UNITYSDK_OFFSET(0x1DFFF40)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__SETPERKSTATEINFO_G__SETTEXTCOLOR|29_0_OFFSET UNITYSDK_OFFSET(0x1DFD280)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKNEWGAME_B__31_0_OFFSET UNITYSDK_OFFSET(0x1E00070)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1DFCD70)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKREWARDINFO_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E004F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKMISSION_OFFSET UNITYSDK_OFFSET(0x1E00590)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKSWEEPPOPUP_B__35_0_OFFSET UNITYSDK_OFFSET(0x1E00790)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKSHOP_OFFSET UNITYSDK_OFFSET(0x1E00830)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_LOADPREVIOUSSESSION_OFFSET UNITYSDK_OFFSET(0x1DFF0A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x1E00990)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1E010A0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Lobby_TypeDefinitionIndex = 20756;

	class UICardGame_Lobby : public Il2CppObject
	{
	public:
		MXButton* newGameBtn; // 0xD8
		MXButton* continueGameBtn; // 0xE0
		::UnityEngine::GameObject* continueGameLockBtn; // 0xE8
		MXButton* sweepBtn; // 0xF0
		::UnityEngine::GameObject* sweepLockBtn; // 0xF8
		MXButton* shopBtn; // 0x100
		MXButton* missionBtn; // 0x108
		MXButton* guideBtn; // 0x110
		MXButton* rewardInfoBtn; // 0x118
		::UnityEngine::GameObject* perkDot; // 0x120
		::UnityEngine::GameObject* missionRedDot; // 0x128
		UILabel* perkOnOffInfoLabel; // 0x130
		Il2CppObject* perkOnOffInfoBgs; // 0x138
		Il2CppObject* logoTextures; // 0x140
		::MX::MinigameCCG::UI::UICardGame_TokenElement* ownedToken; // 0x148
		::MX::MinigameCCG::UI::UICardGame_TokenElement* tokenCost; // 0x150
		::System::Boolean hasEnoughCost; // 0x158
		::System::Int64 ccgId; // 0x160

		::System::Void OnClickContinueGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKCONTINUEGAME_OFFSET))(nullptr);
		}

		::System::Void SetPerkStateInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_SETPERKSTATEINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickNewGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKNEWGAME_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::NetworkProtocol::MiniGameCCGCompleteGameResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGCompleteGameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetLogo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_SETLOGO_OFFSET))(nullptr);
		}

		::System::Void _OnClickContinueGame_b__32_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKCONTINUEGAME_B__32_1_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Void _OnClickNewGame_b__31_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKNEWGAME_B__31_2_OFFSET))(nullptr);
		}

		::System::Void OnClickPlayGuideButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKPLAYGUIDEBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickContinueGame_b__32_0(::MX::MinigameCCG::UI::UICardGame_LobbyPopup* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_LobbyPopup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKCONTINUEGAME_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSweepPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKSWEEPPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_SETDOT_OFFSET))(nullptr);
		}

		::System::Void _OnClickNewGame_g__Enter|31_1(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKNEWGAME_G__ENTER|31_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickNewGame_b__31_4(::MX::NetworkProtocol::MiniGameCCGCreateGameResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGCreateGameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKNEWGAME_B__31_4_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanStartNewGame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_CANSTARTNEWGAME_OFFSET))(nullptr);
		}

		::System::Boolean get_canSweep()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_GET_CANSWEEP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void _OnClickPlayGuideButton_b__37_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKPLAYGUIDEBUTTON_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetPerkStateInfo_g__SetTextColor|29_0(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__SETPERKSTATEINFO_G__SETTEXTCOLOR|29_0_OFFSET))(str, str, nullptr);
		}

		::System::Void _OnClickNewGame_b__31_0(::MX::MinigameCCG::UI::UICardGame_LobbyPopup* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_LobbyPopup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKNEWGAME_B__31_0_OFFSET))(arg, nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void _OnClickRewardInfo_b__38_0(UIPopup_MiniGameStageReward* arg)
		{
			((::System::Void(*)(UIPopup_MiniGameStageReward*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKREWARDINFO_B__38_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKMISSION_OFFSET))(nullptr);
		}

		::System::Void _OnClickSweepPopup_b__35_0(UIPopup_MiniGameSweep* arg)
		{
			((::System::Void(*)(UIPopup_MiniGameSweep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY__ONCLICKSWEEPPOPUP_B__35_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickShop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKSHOP_OFFSET))(nullptr);
		}

		::System::Void LoadPreviousSession()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_LOADPREVIOUSSESSION_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_ONCLICKREWARDINFO_OFFSET))(nullptr);
		}

	};
}

