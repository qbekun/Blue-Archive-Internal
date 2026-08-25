#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_TextParsingUtilities; }

#define TMPRO_TMP_TEXTPARSINGUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA17FD10)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA17FDA0)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA17B3E0)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_GETHASHCODECASESENSITIVE_OFFSET UNITYSDK_OFFSET(0xA17AE90)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_TOLOWERASCIIFAST_OFFSET UNITYSDK_OFFSET(0xA17FE50)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_TOUPPERASCIIFAST_OFFSET UNITYSDK_OFFSET(0xA17FDF0)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_TOUPPERASCIIFAST_OFFSET UNITYSDK_OFFSET(0xA17FEB0)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_TOLOWERASCIIFAST_OFFSET UNITYSDK_OFFSET(0xA17FF10)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_ISHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0xA17FF70)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_ISLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0xA17FF90)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_CONVERTTOUTF32_OFFSET UNITYSDK_OFFSET(0xA17FFB0)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17FD90)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextParsingUtilities_TypeDefinitionIndex = 33753;

	class TMP_TextParsingUtilities : public Il2CppObject
	{
	public:
		::TMPro::TMP_TextParsingUtilities* s_Instance; // 0x0
		::System::String* k_LookupStringL; // 0x0
		::System::String* k_LookupStringU; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::TMPro::TMP_TextParsingUtilities* get_instance()
		{
			return (return (::TMPro::TMP_TextParsingUtilities*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Int32 GetHashCodeCaseSensitive(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_GETHASHCODECASESENSITIVE_OFFSET))(str, nullptr);
		}

		::System::Char ToLowerASCIIFast(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_TOLOWERASCIIFAST_OFFSET))(arg, nullptr);
		}

		::System::Char ToUpperASCIIFast(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_TOUPPERASCIIFAST_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ToUpperASCIIFast(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_TOUPPERASCIIFAST_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ToLowerASCIIFast(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_TOLOWERASCIIFAST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHighSurrogate(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_ISHIGHSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLowSurrogate(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_ISLOWSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ConvertToUTF32(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_CONVERTTOUTF32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

