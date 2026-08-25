#pragma once
#include "unitysdk.h"

#define FORMATOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E31C40)
#define FORMATOPTIONS_GETBASE_OFFSET UNITYSDK_OFFSET(0x9E31230)
#define FORMATOPTIONS_GET_UPPERCASE_OFFSET UNITYSDK_OFFSET(0x9E31250)
#define FORMATOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E35280)

	inline static constexpr unsigned int FormatOptions_TypeDefinitionIndex = 37248;

	class FormatOptions : public Il2CppObject
	{
	public:
		NumberFormatKind* Kind; // 0x10
		::System::SByte AlignAndSize; // 0x11
		::System::Byte Specifier; // 0x12
		::System::Boolean Lowercase; // 0x13

		::System::Void .ctor(NumberFormatKind* arg, ::System::SByte arg, ::System::Byte arg, ::System::Boolean arg)
		{
			((::System::Void(*)(NumberFormatKind*, ::System::SByte, ::System::Byte, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FORMATOPTIONS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBase()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATOPTIONS_GETBASE_OFFSET))(nullptr);
		}

		::System::Boolean get_Uppercase()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATOPTIONS_GET_UPPERCASE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATOPTIONS_TOSTRING_OFFSET))(nullptr);
		}

	};

