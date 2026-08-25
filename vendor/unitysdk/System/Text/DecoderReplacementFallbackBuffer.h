#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x915B2A0)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x915B390)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x915B3D0)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x915B410)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x915B420)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x915B440)

namespace System::Text
{
	inline static constexpr unsigned int DecoderReplacementFallbackBuffer_TypeDefinitionIndex = 24231;

	class DecoderReplacementFallbackBuffer : public Il2CppObject
	{
	public:
		::System::String* _strDefault; // 0x20
		::System::Int32 _fallbackCount; // 0x28
		::System::Int32 _fallbackIndex; // 0x2C

		::System::Void .ctor(::System::Text::DecoderReplacementFallback* arg)
		{
			((::System::Void(*)(::System::Text::DecoderReplacementFallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET))(nullptr);
		}

		::System::Int32 InternalFallback(::Il2CppArray<::System::Object*>* arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(arg, arg, nullptr);
		}

	};
}

