#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_Map_NodeGroup_ScrollViewController; }
namespace MX::NetworkProtocol { class MiniGameCCGCompleteGameResponse; }
namespace MX::MinigameCCG::UI { class UICardGame_CardReward; }
namespace MX::NetworkProtocol { class MiniGameCCGGiveupGameResponse; }
namespace MX::MinigameCCG::UI { class UICardGame_ResetPopup; }
namespace MX::MinigameCCG::UI { class UICardGame_ResultPopup; }
namespace MX::NetworkProtocol { class MiniGameCCGCreateGameResponse; }

#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x1E05150)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E05370)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_OPENOPTION_OFFSET UNITYSDK_OFFSET(0x1E059D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__RECEIVEREWARDONQUIT_G__COMPLETEGAMERESPONSE|35_1_OFFSET UNITYSDK_OFFSET(0x1E05AD0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x1E05C20)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONOPENED_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E05F00)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E02190)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_TOMAINLOBBY_OFFSET UNITYSDK_OFFSET(0x1E064A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_GETMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x1E06560)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONOPENDECKPOPUP_OFFSET UNITYSDK_OFFSET(0x1E06700)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__RECEIVEREWARDONQUIT_B__35_0_OFFSET UNITYSDK_OFFSET(0x1E067E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_TOCARDGAMELOBBY_OFFSET UNITYSDK_OFFSET(0x1E06970)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONCLICKRESETBUTTON_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E06B00)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONCLICKRESULTBUTTON_OFFSET UNITYSDK_OFFSET(0x1E06B80)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__CREATESTACKUI_B__23_1_OFFSET UNITYSDK_OFFSET(0x1E06C60)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_RECEIVEREWARDONQUIT_OFFSET UNITYSDK_OFFSET(0x1E06D10)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONCLICKPLAYGUIDEBUTTON_OFFSET UNITYSDK_OFFSET(0x1E06E60)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONCLICKRESULTBUTTON_B__34_0_OFFSET UNITYSDK_OFFSET(0x1E06F30)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x1E063F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x1E06FB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1E05E80)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONCLICKPLAYGUIDEBUTTON_B__36_0_OFFSET UNITYSDK_OFFSET(0x1E07040)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONOPENDECKPOPUP_B__17_0_OFFSET UNITYSDK_OFFSET(0x1E07170)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__TOMAINLOBBY_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E07210)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_GET_CANREWARDCARDS_OFFSET UNITYSDK_OFFSET(0x1E05240)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_RESETGAME_OFFSET UNITYSDK_OFFSET(0x1E07330)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_SETPERKSTATEINFO_OFFSET UNITYSDK_OFFSET(0x1E05FB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_COLLECTREACHABLENODEIDS_OFFSET UNITYSDK_OFFSET(0x1E074F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E07600)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONCLICKRESETBUTTON_OFFSET UNITYSDK_OFFSET(0x1E07680)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP__RESETGAME_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E07760)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1E07990)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Map_TypeDefinitionIndex = 20772;

	class UICardGame_Map : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_Map_NodeGroup_ScrollViewController* scrollViewController; // 0xD8
		UILabel* stageLabel; // 0xE0
		MXButton* deckOpenBtn; // 0xE8
		MXButton* toCardGameLobbyBtn; // 0xF0
		MXButton* toMainLobbyBtn; // 0xF8
		MXButton* resetBtn; // 0x100
		MXButton* resultBtn; // 0x108
		MXButton* optionBtn; // 0x110
		MXButton* guideBtn; // 0x118
		UILabel* perkStateLabel; // 0x120
		UISprite* perkStateBg; // 0x128
		Il2CppObject* dic_NodeExcels; // 0x130
		Il2CppObject* graph; // 0x138

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OpenOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_OPENOPTION_OFFSET))(nullptr);
		}

		::System::Void _ReceiveRewardOnQuit_g__CompleteGameResponse|35_1(::MX::NetworkProtocol::MiniGameCCGCompleteGameResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGCompleteGameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__RECEIVEREWARDONQUIT_G__COMPLETEGAMERESPONSE|35_1_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__28_0(::MX::MinigameCCG::UI::UICardGame_CardReward* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_CardReward*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONOPENED_B__28_0_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ToMainLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_TOMAINLOBBY_OFFSET))(nullptr);
		}

		::System::Int32 GetMoveIndex(Il2CppObject* arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_GETMOVEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnOpenDeckPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONOPENDECKPOPUP_OFFSET))(nullptr);
		}

		::System::Void _ReceiveRewardOnQuit_b__35_0(::MX::NetworkProtocol::MiniGameCCGGiveupGameResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGGiveupGameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__RECEIVEREWARDONQUIT_B__35_0_OFFSET))(arg, nullptr);
		}

		::System::Void ToCardGameLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_TOCARDGAMELOBBY_OFFSET))(nullptr);
		}

		::System::Void _OnClickResetButton_b__32_0(::MX::MinigameCCG::UI::UICardGame_ResetPopup* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_ResetPopup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONCLICKRESETBUTTON_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickResultButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONCLICKRESULTBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean _CreateStackUI_b__23_1(UIBase* arg)
		{
			return (return (::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__CREATESTACKUI_B__23_1_OFFSET))(arg, nullptr);
		}

		::System::Void ReceiveRewardOnQuit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_RECEIVEREWARDONQUIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPlayGuideButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONCLICKPLAYGUIDEBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickResultButton_b__34_0(::MX::MinigameCCG::UI::UICardGame_ResultPopup* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_ResultPopup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONCLICKRESULTBUTTON_B__34_0_OFFSET))(arg, nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_CREATESTACKUI_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void _OnClickPlayGuideButton_b__36_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONCLICKPLAYGUIDEBUTTON_B__36_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpenDeckPopup_b__17_0(UICardGame_MyDeck* arg)
		{
			((::System::Void(*)(UICardGame_MyDeck*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__ONOPENDECKPOPUP_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ToMainLobby_b__18_0(UILobby* arg)
		{
			((::System::Void(*)(UILobby*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__TOMAINLOBBY_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_canRewardCards()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_GET_CANREWARDCARDS_OFFSET))(nullptr);
		}

		::System::Void ResetGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_RESETGAME_OFFSET))(nullptr);
		}

		::System::Void SetPerkStateInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_SETPERKSTATEINFO_OFFSET))(nullptr);
		}

		::System::Void CollectReachableNodeIds(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_COLLECTREACHABLENODEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickResetButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONCLICKRESETBUTTON_OFFSET))(nullptr);
		}

		::System::Void _ResetGame_b__33_0(::MX::NetworkProtocol::MiniGameCCGCreateGameResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGCreateGameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP__RESETGAME_B__33_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

	};
}

