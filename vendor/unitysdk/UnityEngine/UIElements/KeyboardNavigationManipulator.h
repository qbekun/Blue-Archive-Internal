#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class KeyDownEvent; }
namespace UnityEngine::UIElements { class NavigationCancelEvent; }
namespace UnityEngine::UIElements { class NavigationSubmitEvent; }
namespace UnityEngine::UIElements { class NavigationMoveEvent; }
namespace UnityEngine::UIElements { class KeyboardNavigationOperation; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31E960)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_REGISTERCALLBACKSONTARGET_OFFSET UNITYSDK_OFFSET(0xA31E9A0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_UNREGISTERCALLBACKSFROMTARGET_OFFSET UNITYSDK_OFFSET(0xA31EB90)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA31ED80)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONRUNTIMEKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA31EF00)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONEDITORKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA31EEA0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONNAVIGATIONCANCEL_OFFSET UNITYSDK_OFFSET(0xA31F190)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONNAVIGATIONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA31F1C0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONNAVIGATIONMOVE_OFFSET UNITYSDK_OFFSET(0xA31F1F0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0xA31F0A0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR__ONRUNTIMEKEYDOWN_G__GETOPERATION|5_0_OFFSET UNITYSDK_OFFSET(0xA31F000)
#define UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR__ONEDITORKEYDOWN_G__GETOPERATION|6_0_OFFSET UNITYSDK_OFFSET(0xA31F0D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyboardNavigationManipulator_TypeDefinitionIndex = 30118;

	class KeyboardNavigationManipulator : public Il2CppObject
	{
	public:
		Il2CppObject* m_Action; // 0x18

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCallbacksOnTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_REGISTERCALLBACKSONTARGET_OFFSET))(nullptr);
		}

		::System::Void UnregisterCallbacksFromTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_UNREGISTERCALLBACKSFROMTARGET_OFFSET))(nullptr);
		}

		::System::Void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnRuntimeKeyDown(::UnityEngine::UIElements::KeyDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONRUNTIMEKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnEditorKeyDown(::UnityEngine::UIElements::KeyDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONEDITORKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnNavigationCancel(::UnityEngine::UIElements::NavigationCancelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::NavigationCancelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONNAVIGATIONCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::NavigationSubmitEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONNAVIGATIONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::NavigationMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_ONNAVIGATIONMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::UIElements::KeyboardNavigationOperation* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyboardNavigationOperation*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::KeyboardNavigationOperation* _OnRuntimeKeyDown_g__GetOperation|5_0(<>c__DisplayClass5_0&* arg)
		{
			return (return (::UnityEngine::UIElements::KeyboardNavigationOperation*(*)(<>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR__ONRUNTIMEKEYDOWN_G__GETOPERATION|5_0_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::KeyboardNavigationOperation* _OnEditorKeyDown_g__GetOperation|6_0(<>c__DisplayClass6_0&* arg)
		{
			return (return (::UnityEngine::UIElements::KeyboardNavigationOperation*(*)(<>c__DisplayClass6_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDNAVIGATIONMANIPULATOR__ONEDITORKEYDOWN_G__GETOPERATION|6_0_OFFSET))(arg, nullptr);
		}

	};
}

