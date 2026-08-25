#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x915C7D0)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x915C850)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x915C940)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x915CDD0)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x915CDE0)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x915CDF0)

namespace System::Text
{
	inline static constexpr unsigned int EncoderExceptionFallbackBuffer_TypeDefinitionIndex = 24236;

	class EncoderExceptionFallbackBuffer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Fallback(::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Fallback(::System::Char arg, ::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Boolean MovePrevious()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

	};
}

