#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IVisualElementScheduledItem; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class TextEditorEngine; }
namespace UnityEngine::UIElements { class ITextInputField; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_TOUCHSCREENTEXTEDITOREVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C2BE0)
#define UNITYENGINE_UIELEMENTS_TOUCHSCREENTEXTEDITOREVENTHANDLER_POLLTOUCHSCREENKEYBOARD_OFFSET UNITYSDK_OFFSET(0xA3C2C20)
#define UNITYENGINE_UIELEMENTS_TOUCHSCREENTEXTEDITOREVENTHANDLER_DOPOLLTOUCHSCREENKEYBOARD_OFFSET UNITYSDK_OFFSET(0xA3C2E70)
#define UNITYENGINE_UIELEMENTS_TOUCHSCREENTEXTEDITOREVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0xA3C3570)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TouchScreenTextEditorEventHandler_TypeDefinitionIndex = 30400;

	class TouchScreenTextEditorEventHandler : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::IVisualElementScheduledItem* m_TouchKeyboardPoller; // 0x20
		::UnityEngine::UIElements::VisualElement* m_LastPointerDownTarget; // 0x28

		::System::Void .ctor(::UnityEngine::UIElements::TextEditorEngine* arg, ::UnityEngine::UIElements::ITextInputField* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextEditorEngine*, ::UnityEngine::UIElements::ITextInputField*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOUCHSCREENTEXTEDITOREVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PollTouchScreenKeyboard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOUCHSCREENTEXTEDITOREVENTHANDLER_POLLTOUCHSCREENKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void DoPollTouchScreenKeyboard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOUCHSCREENTEXTEDITOREVENTHANDLER_DOPOLLTOUCHSCREENKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOUCHSCREENTEXTEDITOREVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(arg, nullptr);
		}

	};
}

