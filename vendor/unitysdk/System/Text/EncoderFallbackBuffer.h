#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x915CF60)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALRESET_OFFSET UNITYSDK_OFFSET(0x915CF90)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x915CFC0)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALGETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x915D000)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x915D040)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_THROWLASTCHARRECURSIVE_OFFSET UNITYSDK_OFFSET(0x915D1B0)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x915C400)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallbackBuffer_TypeDefinitionIndex = 24239;

	class EncoderFallbackBuffer : public Il2CppObject
	{
	public:
		::System::Object** charStart; // 0x10
		::System::Object** charEnd; // 0x18
		::System::Text::EncoderNLS* encoder; // 0x20
		::System::Boolean setEncoder; // 0x28
		::System::Boolean bUsedEncoder; // 0x29
		::System::Boolean bFallingBack; // 0x2A
		::System::Int32 iRecursionCount; // 0x2C

		::System::Boolean Fallback(::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Fallback(::System::Char arg, ::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Boolean MovePrevious()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_RESET_OFFSET))(nullptr);
		}

		::System::Void InternalReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALRESET_OFFSET))(nullptr);
		}

		::System::Void InternalInitialize(::System::Object** arg, ::System::Object** arg, ::System::Text::EncoderNLS* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Text::EncoderNLS*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Char InternalGetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALGETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Boolean InternalFallback(::System::Char arg, ::System::Object*&* arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ThrowLastCharRecursive(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_THROWLASTCHARRECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_.CTOR_OFFSET))(nullptr);
		}

	};
}

