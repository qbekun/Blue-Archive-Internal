#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_CardReward_ScrollViewController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }
namespace MX::GameLogic::DBModel { class MiniGameCCGStageRewardType; }
namespace MX::NetworkProtocol { class MiniGameCCGSelectRewardCardResponse; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG::UI { class UICardGame_ReplaceCard; }
namespace MX::MinigameCCG::UI { class UICardGame_CardReward_ScrollViewElement; }
namespace MX::NetworkProtocol { class MiniGameCCGRerollRewardResponse; }
namespace MX::GameLogic::DBModel { class MiniGameCCGStageRewardDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1E16E80)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E16F10)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1E16F90)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__REQUESTSELECTREWARDCARD_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E17220)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E172F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__DIRECTINGREWARDCARDS_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E17400)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E174A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0x1E17940)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_DIRECTINGREWARDCARDS_OFFSET UNITYSDK_OFFSET(0x1E17B80)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x1E17D00)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__REQUESTSELECTREWARDCARD_B__32_1_OFFSET UNITYSDK_OFFSET(0x1E17D90)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_GET_ISPLAYINGDIRECTING_OFFSET UNITYSDK_OFFSET(0x1E17410)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x1E17E20)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_CLOSETOOLTIP_OFFSET UNITYSDK_OFFSET(0x1E17150)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKREROLL_OFFSET UNITYSDK_OFFSET(0x1E17E30)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1E18010)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__ONCLICKOPENDECK_B__37_0_OFFSET UNITYSDK_OFFSET(0x1E18090)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x1E18130)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_REQUESTSELECTREWARDCARD_OFFSET UNITYSDK_OFFSET(0x1E17970)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONBACK_OFFSET UNITYSDK_OFFSET(0x1E18170)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E181A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__GET_ISPLAYINGDIRECTING_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E18300)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__ONCLICKREROLL_B__35_0_OFFSET UNITYSDK_OFFSET(0x1E18390)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD___N__0_OFFSET UNITYSDK_OFFSET(0x1E184B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E184C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E10C00)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKOPENDECK_OFFSET UNITYSDK_OFFSET(0x1E19160)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_SETTOAST_OFFSET UNITYSDK_OFFSET(0x1E18DD0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_HANDLECLICKCARDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E19250)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_CardReward_TypeDefinitionIndex = 20832;

	class UICardGame_CardReward : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_CardReward_ScrollViewController* scrollViewController; // 0xD8
		::UnityEngine::Animation* anim; // 0xE0
		MXButton* bgButton; // 0xE8
		MXButton* confirmButton; // 0xF0
		::UnityEngine::GameObject* disableConfirmButton; // 0xF8
		MXButton* rerollBtn; // 0x100
		UILabel* rerollCount; // 0x108
		::UnityEngine::GameObject* dimRerollBtnCover; // 0x110
		MXButton* skipBtn; // 0x118
		MXButton* deckBtn; // 0x120
		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* stageDB; // 0x128
		::System::Int32 selectedIndex; // 0x130
		::System::Int32 UNSELECTED_INDEX; // 0x0
		::System::Int32 SKIP_INDEX; // 0x0
		::System::Boolean isReroll; // 0x134
		::MX::GameLogic::DBModel::MiniGameCCGStageRewardType* rewardType; // 0x138
		Il2CppObject* scrollViewElements; // 0x140
		::System::String* openAnimationClipName; // 0x148
		::System::String* rerollAnimationClipName; // 0x150

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickBackGround()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void _RequestSelectRewardCard_b__32_0(::MX::NetworkProtocol::MiniGameCCGSelectRewardCardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGSelectRewardCardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__REQUESTSELECTREWARDCARD_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean _DirectingRewardCards_b__33_0()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__DIRECTINGREWARDCARDS_B__33_0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* DirectingRewardCards()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_DIRECTINGREWARDCARDS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void _RequestSelectRewardCard_b__32_1(::MX::MinigameCCG::UI::UICardGame_ReplaceCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_ReplaceCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__REQUESTSELECTREWARDCARD_B__32_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isPlayingDirecting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_GET_ISPLAYINGDIRECTING_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void CloseTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_CLOSETOOLTIP_OFFSET))(nullptr);
		}

		::System::Void OnClickReroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKREROLL_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void _OnClickOpenDeck_b__37_0(UICardGame_MyDeck* arg)
		{
			((::System::Void(*)(UICardGame_MyDeck*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__ONCLICKOPENDECK_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RequestSelectRewardCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_REQUESTSELECTREWARDCARD_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean _get_isPlayingDirecting_b__18_0(::MX::MinigameCCG::UI::UICardGame_CardReward_ScrollViewElement* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::UI::UICardGame_CardReward_ScrollViewElement*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__GET_ISPLAYINGDIRECTING_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickReroll_b__35_0(::MX::NetworkProtocol::MiniGameCCGRerollRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGRerollRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD__ONCLICKREROLL_B__35_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD___N__0_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::MiniGameCCGStageRewardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStageRewardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_ONCLICKOPENDECK_OFFSET))(nullptr);
		}

		::System::Void SetToast(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_SETTOAST_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleClickCardMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDREWARD_HANDLECLICKCARDMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

