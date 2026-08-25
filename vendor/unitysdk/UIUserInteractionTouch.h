#pragma once
#include "unitysdk.h"

class UIWidget;
class UISlider;
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
class Phase;
class InteractionAnim;
class UIUserInteractionParam;

#define UIUSERINTERACTIONTOUCH_SETPROGRESSUI_OFFSET UNITYSDK_OFFSET(0xB862E0)
#define UIUSERINTERACTIONTOUCH_UPDATEPOINTERINPUT_OFFSET UNITYSDK_OFFSET(0xB86430)
#define UIUSERINTERACTIONTOUCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xB864B0)
#define UIUSERINTERACTIONTOUCH_PLAYANIMATIONANDCLOSE_OFFSET UNITYSDK_OFFSET(0xB864C0)
#define UIUSERINTERACTIONTOUCH_SETUSERINTERACTION_OFFSET UNITYSDK_OFFSET(0xB86510)
#define UIUSERINTERACTIONTOUCH_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xB866B0)
#define UIUSERINTERACTIONTOUCH_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB86700)

	inline static constexpr unsigned int UIUserInteractionTouch_TypeDefinitionIndex = 8540;

	class UIUserInteractionTouch : public Il2CppObject
	{
	public:
		UIWidget* touchArea; // 0x118
		UISlider* progressSlider; // 0x120
		UIWidget* sliderColor; // 0x128
		::UnityEngine::Color* colorSlideInProgress; // 0x130
		::UnityEngine::Color* colorSlideSuccess; // 0x140
		::UnityEngine::Color* colorSlideFail; // 0x150
		::UnityEngine::Vector2* touchAllowLeftDown; // 0x160
		::UnityEngine::Vector2* touchAllowRightUp; // 0x168

		::System::Void SetProgressUI(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONTOUCH_SETPROGRESSUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdatePointerInput(::System::Int32 arg, ::UnityEngine::Vector3* arg2, Phase* arg3)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, Phase*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONTOUCH_UPDATEPOINTERINPUT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONTOUCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayAnimationAndClose(InteractionAnim* arg)
		{
			((::System::Void(*)(InteractionAnim*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONTOUCH_PLAYANIMATIONANDCLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUserInteraction(UIUserInteractionParam* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(UIUserInteractionParam*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONTOUCH_SETUSERINTERACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayAnimation(InteractionAnim* arg)
		{
			((::System::Void(*)(InteractionAnim*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONTOUCH_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONTOUCH_ONCLOSED_OFFSET))(nullptr);
		}

	};

