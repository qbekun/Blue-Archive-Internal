#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG::UI { class UICardGame_ResultPopup; }
namespace MX::NetworkProtocol { class MiniGameCCGGiveupGameResponse; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_RETRY_OFFSET UNITYSDK_OFFSET(0x1DF7EC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE__ONCLICKRESULT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1DF8040)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONCLICKCLOSE_BACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1DF80C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE___N__0_OFFSET UNITYSDK_OFFSET(0x1DF8240)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x1DF8250)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1DF82C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE__RECEIVEREWARDONQUIT_B__12_0_OFFSET UNITYSDK_OFFSET(0x1DF8340)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_RECEIVEREWARDONQUIT_OFFSET UNITYSDK_OFFSET(0x1DF8470)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1DF8660)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1DF80F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE__RETRY_G__ENTER|10_0_OFFSET UNITYSDK_OFFSET(0x1DF8690)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x1DF8810)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF88A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE__RETRY_B__10_1_OFFSET UNITYSDK_OFFSET(0x1DF88B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONCLICKRETRY_OFFSET UNITYSDK_OFFSET(0x1DF8960)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONCLICKRESULT_OFFSET UNITYSDK_OFFSET(0x1DF8990)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DF8AB0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Pause_TypeDefinitionIndex = 20730;

	class UICardGame_InGame_Pause : public Il2CppObject
	{
	public:
		MXButton* retryBtn; // 0xD8
		MXButton* resultBtn; // 0xE0
		MXButton* closeBtn; // 0xE8
		::System::Int32 LastEscFrameCount; // 0xF0

		::Cysharp::Threading::Tasks::UniTask* Retry()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_RETRY_OFFSET))(nullptr);
		}

		::System::Void _OnClickResult_b__11_0(::MX::MinigameCCG::UI::UICardGame_ResultPopup* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_ResultPopup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE__ONCLICKRESULT_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose_BackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONCLICKCLOSE_BACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONOPENED_OFFSET))(arg, nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void _ReceiveRewardOnQuit_b__12_0(::MX::NetworkProtocol::MiniGameCCGGiveupGameResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGGiveupGameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE__RECEIVEREWARDONQUIT_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void ReceiveRewardOnQuit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_RECEIVEREWARDONQUIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* _Retry_g__Enter|10_0()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE__RETRY_G__ENTER|10_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Retry_b__10_1(UICardGame_BattleIntro* arg)
		{
			((::System::Void(*)(UICardGame_BattleIntro*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE__RETRY_B__10_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONCLICKRETRY_OFFSET))(nullptr);
		}

		::System::Void OnClickResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_ONCLICKRESULT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_PAUSE_AWAKE_OFFSET))(nullptr);
		}

	};
}

