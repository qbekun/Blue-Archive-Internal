#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x915E330)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x915E430)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x915E540)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x915E760)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x915E7A0)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x915E7C0)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x915E7D0)

namespace System::Text
{
	inline static constexpr unsigned int EncoderReplacementFallbackBuffer_TypeDefinitionIndex = 24242;

	class EncoderReplacementFallbackBuffer : public Il2CppObject
	{
	public:
		::System::String* _strDefault; // 0x30
		::System::Int32 _fallbackCount; // 0x38
		::System::Int32 _fallbackIndex; // 0x3C

		::System::Void .ctor(::System::Text::EncoderReplacementFallback* arg)
		{
			((::System::Void(*)(::System::Text::EncoderReplacementFallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Fallback(::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Fallback(::System::Char arg, ::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Boolean MovePrevious()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET))(nullptr);
		}

	};
}

