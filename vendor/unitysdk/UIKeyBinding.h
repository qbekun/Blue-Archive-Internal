#pragma once
#include "unitysdk.h"

namespace UnityEngine { class KeyCode; }
class Modifier;
class Action;

#define UIKEYBINDING_GET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0xA06DD0)
#define UIKEYBINDING_ISBOUND_OFFSET UNITYSDK_OFFSET(0xA06E90)
#define UIKEYBINDING_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA06FE0)
#define UIKEYBINDING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA070D0)
#define UIKEYBINDING_START_OFFSET UNITYSDK_OFFSET(0xA07170)
#define UIKEYBINDING_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA07270)
#define UIKEYBINDING_ISMODIFIERACTIVE_OFFSET UNITYSDK_OFFSET(0xA07360)
#define UIKEYBINDING_ISMODIFIERACTIVE_OFFSET UNITYSDK_OFFSET(0xA073B0)
#define UIKEYBINDING_UPDATE_OFFSET UNITYSDK_OFFSET(0xA07760)
#define UIKEYBINDING_ONBINDINGPRESS_OFFSET UNITYSDK_OFFSET(0xA07A00)
#define UIKEYBINDING_ONBINDINGCLICK_OFFSET UNITYSDK_OFFSET(0xA07AA0)
#define UIKEYBINDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA07B10)
#define UIKEYBINDING_GETSTRING_OFFSET UNITYSDK_OFFSET(0xA07B60)
#define UIKEYBINDING_GETKEYCODE_OFFSET UNITYSDK_OFFSET(0xA07C30)
#define UIKEYBINDING_GETACTIVEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA07F00)
#define UIKEYBINDING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA08130)
#define UIKEYBINDING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA08140)

	inline static constexpr unsigned int UIKeyBinding_TypeDefinitionIndex = 48;

	class UIKeyBinding : public Il2CppObject
	{
	public:
		Il2CppObject* mList; // 0x0
		::UnityEngine::KeyCode* keyCode; // 0x18
		Modifier* modifier; // 0x1C
		Action* action; // 0x20
		::System::Boolean mIgnoreUp; // 0x24
		::System::Boolean mIsInput; // 0x25
		::System::Boolean mPress; // 0x26

		::System::String* get_captionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_GET_CAPTIONTEXT_OFFSET))(nullptr);
		}

		::System::Boolean IsBound(::UnityEngine::KeyCode* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_ISBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_START_OFFSET))(nullptr);
		}

		::System::Void OnSubmit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_ONSUBMIT_OFFSET))(nullptr);
		}

		::System::Boolean IsModifierActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_ISMODIFIERACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsModifierActive(Modifier* arg)
		{
			return ((::System::Boolean(*)(Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_ISMODIFIERACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnBindingPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_ONBINDINGPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnBindingClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_ONBINDINGCLICK_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* GetString(::UnityEngine::KeyCode* arg, Modifier* arg2)
		{
			return ((::System::String*(*)(::UnityEngine::KeyCode*, Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_GETSTRING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean GetKeyCode(::System::String* str, ::UnityEngine::KeyCode&* arg, Modifier&* arg2)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::KeyCode&*, Modifier&*, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_GETKEYCODE_OFFSET))(str, arg, arg2, nullptr);
		}

		Modifier* GetActiveModifier()
		{
			return ((Modifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_GETACTIVEMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBINDING_.CCTOR_OFFSET))(nullptr);
		}

	};

