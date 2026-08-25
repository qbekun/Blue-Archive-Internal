#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_SYMBOL_OFFSET UNITYSDK_OFFSET(0x92DC110)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0x92DC120)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_HASPRECISION_OFFSET UNITYSDK_OFFSET(0x92DC130)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x92DC140)
#define SYSTEM_BUFFERS_STANDARDFORMAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x92DC150)
#define SYSTEM_BUFFERS_STANDARDFORMAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x92DC1A0)
#define SYSTEM_BUFFERS_STANDARDFORMAT_PARSE_OFFSET UNITYSDK_OFFSET(0x92DC1D0)
#define SYSTEM_BUFFERS_STANDARDFORMAT_PARSEHELPER_OFFSET UNITYSDK_OFFSET(0x92DC200)
#define SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x92DC380)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92DC420)
#define SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x92DC400)
#define SYSTEM_BUFFERS_STANDARDFORMAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92DC450)
#define SYSTEM_BUFFERS_STANDARDFORMAT_FORMAT_OFFSET UNITYSDK_OFFSET(0x92DC590)
#define SYSTEM_BUFFERS_STANDARDFORMAT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x92DC680)

namespace System::Buffers
{
	inline static constexpr unsigned int StandardFormat_TypeDefinitionIndex = 25210;

	class StandardFormat : public Il2CppObject
	{
	public:
		::System::Byte _format; // 0x10
		::System::Byte _precision; // 0x11

		::System::Char get_Symbol()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_SYMBOL_OFFSET))(nullptr);
		}

		::System::Byte get_Precision()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_PRECISION_OFFSET))(nullptr);
		}

		::System::Boolean get_HasPrecision()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_HASPRECISION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Char arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Char, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Buffers::StandardFormat* op_Implicit(::System::Char arg)
		{
			return (return (::System::Buffers::StandardFormat*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Buffers::StandardFormat* Parse(Il2CppObject* arg)
		{
			return (return (::System::Buffers::StandardFormat*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseHelper(Il2CppObject* arg, ::System::Buffers::StandardFormat&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Buffers::StandardFormat&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_PARSEHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 Format(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_FORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Buffers::StandardFormat* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Buffers::StandardFormat*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

