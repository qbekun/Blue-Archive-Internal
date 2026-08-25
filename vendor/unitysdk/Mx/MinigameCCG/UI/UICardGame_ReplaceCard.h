#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Animation; }
namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }
namespace UnityEngine { class GameObject; }
namespace MX::NetworkProtocol { class MiniGameCCGReplaceCharacterResponse; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::MinigameCCG::UI { class UICardGame_CardReward; }
namespace MX::MinigameCCG::UI { class UICardGame_Map; }
namespace MX::MinigameCCG::UI { class UICardGame_ReplaceCard_CardElement; }

#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__REQUEST_B__27_0_OFFSET UNITYSDK_OFFSET(0x1E1B740)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1E1B8B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x1E1BEF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CONTINUEOREND_OFFSET UNITYSDK_OFFSET(0x1E1B9E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__ONCLICKOPENDECK_B__30_0_OFFSET UNITYSDK_OFFSET(0x1E1C440)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E1C390)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1E1C4E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0x1E1C4F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONCLICKBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1E1C670)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_HANDLECLICKREPLACECARDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E1C710)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E1C950)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_REQUEST_OFFSET UNITYSDK_OFFSET(0x1E1C500)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONBACK_OFFSET UNITYSDK_OFFSET(0x1E1CD10)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_DIRECTING_OFFSET UNITYSDK_OFFSET(0x1E1B930)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__CONTINUEOREND_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E1CD20)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E1CEA0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONCLICKOPENDECK_OFFSET UNITYSDK_OFFSET(0x1E1D000)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x1E1D0E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x1E1D0F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E1D1B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__CONTINUEOREND_B__29_1_OFFSET UNITYSDK_OFFSET(0x1E1D2C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D350)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__DIRECTING_B__28_1_OFFSET UNITYSDK_OFFSET(0x1E1D3D0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_ReplaceCard_TypeDefinitionIndex = 20841;

	class UICardGame_ReplaceCard : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0xD8
		Il2CppObject* characters; // 0xE0
		::MX::MinigameCCG::UI::UICardGame_CardGroup* newCharacter; // 0xE8
		UIGrid* grid; // 0xF0
		MXButton* confirmButton; // 0xF8
		::UnityEngine::GameObject* disableConfirmButton; // 0x100
		MXButton* skipBtn; // 0x108
		MXButton* deckBtn; // 0x110
		MXButton* bgBtn; // 0x118
		::System::Int64 newCharacterId; // 0x120
		::System::Int32 slotIndex; // 0x128
		::System::Boolean isStriker; // 0x12C
		::System::String* intorAnimationClipName; // 0x130
		::System::String* replaceAnimationClipName; // 0x138

		::System::Void _Request_b__27_0(::MX::NetworkProtocol::MiniGameCCGReplaceCharacterResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGReplaceCharacterResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__REQUEST_B__27_0_OFFSET))(arg, nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetCharacter(Il2CppObject* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_SETCHARACTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ContinueOrEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CONTINUEOREND_OFFSET))(nullptr);
		}

		::System::Void _OnClickOpenDeck_b__30_0(UICardGame_MyDeck* arg)
		{
			((::System::Void(*)(UICardGame_MyDeck*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__ONCLICKOPENDECK_B__30_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_SETDATA_OFFSET))(nullptr);
		}

		::System::Threading::CancellationToken* get_cancellationToken()
		{
			return (return (::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_GET_CANCELLATIONTOKEN_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Void OnClickBackGround()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONCLICKBACKGROUND_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickReplaceCardMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_HANDLECLICKREPLACECARDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Request()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_REQUEST_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Directing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_DIRECTING_OFFSET))(nullptr);
		}

		::System::Void _ContinueOrEnd_b__29_0(::MX::MinigameCCG::UI::UICardGame_CardReward* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_CardReward*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__CONTINUEOREND_B__29_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONCLICKOPENDECK_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void _ContinueOrEnd_b__29_1(::MX::MinigameCCG::UI::UICardGame_Map* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_Map*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__CONTINUEOREND_B__29_1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Directing_b__28_1(::MX::MinigameCCG::UI::UICardGame_ReplaceCard_CardElement* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::UI::UICardGame_ReplaceCard_CardElement*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD__DIRECTING_B__28_1_OFFSET))(arg, nullptr);
		}

	};
}

