#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9158E00)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x9158E50)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9159030)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9159040)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x91590D0)

namespace System::Text
{
	inline static constexpr unsigned int InternalDecoderBestFitFallback_TypeDefinitionIndex = 24222;

	class InternalDecoderBestFitFallback : public Il2CppObject
	{
	public:
		::System::Text::Encoding* _encoding; // 0x10
		::Il2CppArray<::System::Object*>* _arrayBestFit; // 0x18
		::System::Char _cReplacement; // 0x20

		::System::Void .ctor(::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

