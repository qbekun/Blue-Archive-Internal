#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_TEXTFIELD_GET_TEXTINPUT_OFFSET UNITYSDK_OFFSET(0xA3C0D60)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_SET_MULTILINE_OFFSET UNITYSDK_OFFSET(0xA3C0DE0)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C0F20)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C0F50)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C0F80)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3C1230)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3C1270)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3C12F0)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_ONVIEWDATAREADY_OFFSET UNITYSDK_OFFSET(0xA3C1370)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_VALUETOSTRING_OFFSET UNITYSDK_OFFSET(0xA3C1400)
#define UNITYENGINE_UIELEMENTS_TEXTFIELD_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3C1410)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextField_TypeDefinitionIndex = 30392;

	class TextField : public MatchResult
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x8
		::System::String* inputUssClassName; // 0x10

		TextInput* get_textInput()
		{
			return (return (TextInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_GET_TEXTINPUT_OFFSET))(nullptr);
		}

		::System::Void set_multiline(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_SET_MULTILINE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::String* get_value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_SETVALUEWITHOUTNOTIFY_OFFSET))(str, nullptr);
		}

		::System::Void OnViewDataReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_ONVIEWDATAREADY_OFFSET))(nullptr);
		}

		::System::String* ValueToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_VALUETOSTRING_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTFIELD_.CCTOR_OFFSET))(nullptr);
		}

	};
}

