#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGToastPosition; }
namespace MX::MinigameCCG::UI { class CCGToastLifetime; }
namespace MX::MinigameCCG::UI { class CCGToastInfo; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT__HIDETOAST_B__13_0_OFFSET UNITYSDK_OFFSET(0x1E26820)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_GET_TOASTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E268A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_ONFINISHEDPLAYFORWARD_POSITION_OFFSET UNITYSDK_OFFSET(0x1E268B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_ACTIVETOAST_OFFSET UNITYSDK_OFFSET(0x1E26AC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_PLAYTWEEN_OFFSET UNITYSDK_OFFSET(0x1E26B30)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1E26D20)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_HIDETOAST_OFFSET UNITYSDK_OFFSET(0x1E26D30)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_ONPLAYETWEEN_OFFSET UNITYSDK_OFFSET(0x1E26EC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_DELAYREVERSE_OFFSET UNITYSDK_OFFSET(0x1E26940)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E27070)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_ToastElement_TypeDefinitionIndex = 20878;

	class UICardGame_ToastElement : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::CCGToastPosition* toastPosition; // 0x18
		TweenAlpha* alpha; // 0x20
		TweenPosition* position; // 0x28
		UILabel* label; // 0x30
		UISprite* icon; // 0x38
		::MX::MinigameCCG::UI::CCGToastLifetime* lifetime; // 0x40
		::System::String* curMessage; // 0x48
		::System::Action* onFinishedOneLoop; // 0x50

		::System::Void _HideToast_b__13_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT__HIDETOAST_B__13_0_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::UI::CCGToastPosition* get_ToastPosition()
		{
			return (return (::MX::MinigameCCG::UI::CCGToastPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_GET_TOASTPOSITION_OFFSET))(nullptr);
		}

		::System::Void OnFinishedPlayForward_Position(UITweener* arg)
		{
			((::System::Void(*)(UITweener*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_ONFINISHEDPLAYFORWARD_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveToast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_ACTIVETOAST_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTween(UITweener* arg)
		{
			((::System::Void(*)(UITweener*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_PLAYTWEEN_OFFSET))(arg, nullptr);
		}

		::System::Threading::CancellationToken* get_cancellationToken()
		{
			return (return (::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_GET_CANCELLATIONTOKEN_OFFSET))(nullptr);
		}

		::System::Void HideToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_HIDETOAST_OFFSET))(nullptr);
		}

		::System::Void OnPlayeTween(::MX::MinigameCCG::UI::CCGToastInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_ONPLAYETWEEN_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* DelayReverse()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_DELAYREVERSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

