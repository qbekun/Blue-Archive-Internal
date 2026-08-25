#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x915C770)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x915C780)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x915C7E0)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x915C7F0)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x915C840)

namespace System::Text
{
	inline static constexpr unsigned int EncoderExceptionFallback_TypeDefinitionIndex = 24235;

	class EncoderExceptionFallback : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

