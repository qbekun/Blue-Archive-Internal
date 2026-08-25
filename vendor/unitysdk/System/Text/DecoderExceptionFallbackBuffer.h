#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x91594A0)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x9159810)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x9159820)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_THROW_OFFSET UNITYSDK_OFFSET(0x91594B0)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9159420)

namespace System::Text
{
	inline static constexpr unsigned int DecoderExceptionFallbackBuffer_TypeDefinitionIndex = 24225;

	class DecoderExceptionFallbackBuffer : public Il2CppObject
	{
	public:
		::System::Boolean Fallback(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void Throw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_THROW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_.CTOR_OFFSET))(nullptr);
		}

	};
}

