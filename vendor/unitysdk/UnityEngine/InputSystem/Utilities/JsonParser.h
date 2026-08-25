#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E73390)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_RESET_OFFSET UNITYSDK_OFFSET(0x9E7F8A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E7F8B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_NAVIGATETOPROPERTY_OFFSET UNITYSDK_OFFSET(0x9E73420)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_CURRENTPROPERTYHASVALUEEQUALTO_OFFSET UNITYSDK_OFFSET(0x9E73A50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSETOKEN_OFFSET UNITYSDK_OFFSET(0x9E7F980)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9E7FAB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9E7FAF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSESTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9E7FC60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEARRAYVALUE_OFFSET UNITYSDK_OFFSET(0x9E7FE80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x9E80350)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x9E806C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEBOOLEANVALUE_OFFSET UNITYSDK_OFFSET(0x9E80570)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENULLVALUE_OFFSET UNITYSDK_OFFSET(0x9E80660)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPTOVALUE_OFFSET UNITYSDK_OFFSET(0x9E7FA60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPSTRING_OFFSET UNITYSDK_OFFSET(0x9E80CB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9E7F9E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_GET_ISATEND_OFFSET UNITYSDK_OFFSET(0x9E80D80)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int JsonParser_TypeDefinitionIndex = 28927;

	class JsonParser : public Il2CppObject
	{
	public:
		::System::String* m_Text; // 0x10
		::System::Int32 m_Length; // 0x18
		::System::Int32 m_Position; // 0x1C
		::System::Boolean m_MatchAnyElementInArray; // 0x20
		::System::Boolean m_DryRun; // 0x21

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_RESET_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean NavigateToProperty(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_NAVIGATETOPROPERTY_OFFSET))(str, nullptr);
		}

		::System::Boolean CurrentPropertyHasValueEqualTo(JsonValue* arg)
		{
			return (return (::System::Boolean(*)(JsonValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_CURRENTPROPERTYHASVALUEEQUALTO_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseToken(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_OFFSET))(nullptr);
		}

		::System::Boolean ParseValue(JsonValue&* arg)
		{
			return (return (::System::Boolean(*)(JsonValue&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseStringValue(JsonValue&* arg)
		{
			return (return (::System::Boolean(*)(JsonValue&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSESTRINGVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseArrayValue(JsonValue&* arg)
		{
			return (return (::System::Boolean(*)(JsonValue&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEARRAYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseObjectValue(JsonValue&* arg)
		{
			return (return (::System::Boolean(*)(JsonValue&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEOBJECTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseNumber(JsonValue&* arg)
		{
			return (return (::System::Boolean(*)(JsonValue&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseBooleanValue(JsonValue&* arg)
		{
			return (return (::System::Boolean(*)(JsonValue&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEBOOLEANVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseNullValue(JsonValue&* arg)
		{
			return (return (::System::Boolean(*)(JsonValue&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENULLVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SkipToValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPTOVALUE_OFFSET))(nullptr);
		}

		::System::Boolean SkipString(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPSTRING_OFFSET))(str, nullptr);
		}

		::System::Void SkipWhitespace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPWHITESPACE_OFFSET))(nullptr);
		}

		::System::Boolean get_isAtEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_GET_ISATEND_OFFSET))(nullptr);
		}

	};
}

