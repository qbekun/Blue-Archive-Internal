#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_PRESSEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA700)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_HIGHLIGHTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA710)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_SELECTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA720)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_NORMALTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA730)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_SELECTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA740)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_DISABLEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA750)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_HIGHLIGHTEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA760)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_DISABLEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA770)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_NORMALTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA780)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2EA790)
#define UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_PRESSEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2EA860)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int AnimationTriggers_TypeDefinitionIndex = 34741;

	class AnimationTriggers : public Il2CppObject
	{
	public:
		::System::String* kDefaultNormalAnimName; // 0x0
		::System::String* kDefaultHighlightedAnimName; // 0x0
		::System::String* kDefaultPressedAnimName; // 0x0
		::System::String* kDefaultSelectedAnimName; // 0x0
		::System::String* kDefaultDisabledAnimName; // 0x0
		::System::String* m_NormalTrigger; // 0x10
		::System::String* m_HighlightedTrigger; // 0x18
		::System::String* m_PressedTrigger; // 0x20
		::System::String* m_SelectedTrigger; // 0x28
		::System::String* m_DisabledTrigger; // 0x30

		::System::String* get_pressedTrigger()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_PRESSEDTRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_highlightedTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_HIGHLIGHTEDTRIGGER_OFFSET))(str, nullptr);
		}

		::System::String* get_selectedTrigger()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_SELECTEDTRIGGER_OFFSET))(nullptr);
		}

		::System::String* get_normalTrigger()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_NORMALTRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_selectedTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_SELECTEDTRIGGER_OFFSET))(str, nullptr);
		}

		::System::String* get_disabledTrigger()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_DISABLEDTRIGGER_OFFSET))(nullptr);
		}

		::System::String* get_highlightedTrigger()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_GET_HIGHLIGHTEDTRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_disabledTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_DISABLEDTRIGGER_OFFSET))(str, nullptr);
		}

		::System::Void set_normalTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_NORMALTRIGGER_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_pressedTrigger(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ANIMATIONTRIGGERS_SET_PRESSEDTRIGGER_OFFSET))(str, nullptr);
		}

	};
}

