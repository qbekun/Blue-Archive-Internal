#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x915C050)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x915C090)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x915C270)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x915C280)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x915C330)

namespace System::Text
{
	inline static constexpr unsigned int InternalEncoderBestFitFallback_TypeDefinitionIndex = 24233;

	class InternalEncoderBestFitFallback : public Il2CppObject
	{
	public:
		::System::Text::Encoding* _encoding; // 0x10
		::Il2CppArray<::System::Object*>* _arrayBestFit; // 0x18

		::System::Void .ctor(::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

