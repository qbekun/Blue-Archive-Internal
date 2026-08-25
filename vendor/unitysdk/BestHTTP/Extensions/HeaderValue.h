#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Extensions { class HeaderValue&; }

#define BESTHTTP_EXTENSIONS_HEADERVALUE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x8D4EC0)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_SET_KEY_OFFSET UNITYSDK_OFFSET(0x8D4ED0)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8D4EE0)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x8D4EF0)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x8D4F00)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x8D4F10)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x8D4F20)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D4E40)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D4F40)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_PARSE_OFFSET UNITYSDK_OFFSET(0x8D4E50)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_TRYGETOPTION_OFFSET UNITYSDK_OFFSET(0x8D5510)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_PARSEIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8D4F70)
#define BESTHTTP_EXTENSIONS_HEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8D55F0)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int HeaderValue_TypeDefinitionIndex = 23349;

	class HeaderValue : public Il2CppObject
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::System::String* _Value_k__BackingField; // 0x18
		Il2CppObject* _Options_k__BackingField; // 0x20

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_SET_KEY_OFFSET))(str, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_SET_VALUE_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Options()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_Options(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_GET_HASVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Parse(::System::String* str, int32_t&* arg)
		{
			((::System::Void(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetOption(::System::String* str, ::BestHTTP::Extensions::HeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::BestHTTP::Extensions::HeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_TRYGETOPTION_OFFSET))(str, arg, nullptr);
		}

		::System::Void ParseImplementation(::System::String* str, int32_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_PARSEIMPLEMENTATION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_HEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

