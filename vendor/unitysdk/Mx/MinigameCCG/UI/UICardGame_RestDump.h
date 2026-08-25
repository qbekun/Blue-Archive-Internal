#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_RestDump_Deck_ScrollViewController; }
namespace MX::MinigameCCG::UI { class UICardGame_RestDump_Remove_ScrollViewController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG::UI { class CCGRestDumpCardDBInfo; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCardDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP___N__0_OFFSET UNITYSDK_OFFSET(0x1E10C80)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP__CLOSE_B__26_0_OFFSET UNITYSDK_OFFSET(0x1E10C90)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_SETSCROLLVIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1E10CC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP__SETSCROLLVIEWCONTROLLER_B__22_1_OFFSET UNITYSDK_OFFSET(0x1E10D70)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_HANDLECLICKREMOVECARDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E10EF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONCLOSETOOLTIP_OFFSET UNITYSDK_OFFSET(0x1E11600)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x1E116D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E11890)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_HANDLECLICKDECKCARDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E11BD0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E12050)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x1E12230)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x1E122C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REFRESHTOAST_OFFSET UNITYSDK_OFFSET(0x1E111F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E12690)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1E12760)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1E12770)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E0FF20)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E12780)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E117E0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_RestDump_TypeDefinitionIndex = 20807;

	class UICardGame_RestDump : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_RestDump_Deck_ScrollViewController* deckScrollViewController; // 0xD8
		::MX::MinigameCCG::UI::UICardGame_RestDump_Remove_ScrollViewController* removeScrollViewController; // 0xE0
		::UnityEngine::Animation* anim; // 0xE8
		MXButton* confirmButton; // 0xF0
		MXButton* bgButton; // 0xF8
		::UnityEngine::GameObject* disableConfirmButton; // 0x100
		MXButton* backButton; // 0x108
		Il2CppObject* removeList; // 0x110
		::System::Int32 discardPoint; // 0x118
		Il2CppObject* callback; // 0x120
		Il2CppObject* deckElements; // 0x128
		::System::String* openAnimationClip; // 0x130
		::System::String* closeAnimationClip; // 0x138
		::System::Int32 UNSELECTEDID; // 0x0

		::System::Collections::IEnumerator* __n__0()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP___N__0_OFFSET))(nullptr);
		}

		::System::Boolean _Close_b__26_0()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP__CLOSE_B__26_0_OFFSET))(nullptr);
		}

		::System::Void SetScrollViewController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_SETSCROLLVIEWCONTROLLER_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::UI::CCGRestDumpCardDBInfo* _SetScrollViewController_b__22_1(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg)
		{
			return (return (::MX::MinigameCCG::UI::CCGRestDumpCardDBInfo*(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP__SETSCROLLVIEWCONTROLLER_B__22_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleClickRemoveCardMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_HANDLECLICKREMOVECARDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnCloseTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONCLOSETOOLTIP_OFFSET))(nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickDeckCardMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_HANDLECLICKDECKCARDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void RefreshToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REFRESHTOAST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_.CTOR_OFFSET))(nullptr);
		}

		::System::Threading::CancellationToken* get_cancellationToken()
		{
			return (return (::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_GET_CANCELLATIONTOKEN_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_CLOSE_OFFSET))(nullptr);
		}

	};
}

