#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Image; }
namespace RuntimeInspectorNamespace { class UISkin; }

#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9573710)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_INPUTFIELDVALUESUBMITTED_OFFSET UNITYSDK_OFFSET(0x957C820)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9573950)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x957C910)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0x957C990)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x957C9A0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_GET_BACKINGFIELD_OFFSET UNITYSDK_OFFSET(0x957C9C0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x957C9D0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x9573F80)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_INPUTFIELDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x957C9E0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int BoundInputField_TypeDefinitionIndex = 35680;

	class BoundInputField : public Il2CppObject
	{
	public:
		::System::Boolean initialized; // 0x18
		::System::Boolean inputValid; // 0x19
		::System::Boolean inputAltered; // 0x1A
		::UnityEngine::UI::InputField* inputField; // 0x20
		::UnityEngine::UI::Image* inputFieldBackground; // 0x28
		::System::String* DefaultEmptyValue; // 0x30
		::System::Boolean CacheTextOnValueChange; // 0x38
		::System::String* recentText; // 0x40
		::System::Int32 m_skinVersion; // 0x48
		::RuntimeInspectorNamespace::UISkin* m_skin; // 0x50
		OnValueChangedDelegate* OnValueChanged; // 0x58
		OnValueChangedDelegate* OnValueSubmitted; // 0x60

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void InputFieldValueSubmitted(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_INPUTFIELDVALUESUBMITTED_OFFSET))(str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_AWAKE_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_GET_TEXT_OFFSET))(nullptr);
		}

		::UnityEngine::UI::InputField* get_BackingField()
		{
			return (return (::UnityEngine::UI::InputField*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_GET_BACKINGFIELD_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::UISkin* get_Skin()
		{
			return (return (::RuntimeInspectorNamespace::UISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_GET_SKIN_OFFSET))(nullptr);
		}

		::System::Void set_Skin(::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_SET_SKIN_OFFSET))(arg, nullptr);
		}

		::System::Void InputFieldValueChanged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDINPUTFIELD_INPUTFIELDVALUECHANGED_OFFSET))(str, nullptr);
		}

	};
}

