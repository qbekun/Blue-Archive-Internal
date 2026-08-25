#pragma once
#include "unitysdk.h"

#define DECODERUTF7FALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x916A440)
#define DECODERUTF7FALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x916A4C0)
#define DECODERUTF7FALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x916A510)
#define DECODERUTF7FALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x916A530)
#define DECODERUTF7FALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x916A540)
#define DECODERUTF7FALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x916A550)

	inline static constexpr unsigned int DecoderUTF7FallbackBuffer_TypeDefinitionIndex = 24254;

	class DecoderUTF7FallbackBuffer : public Il2CppObject
	{
	public:
		::System::Char cFallback; // 0x20
		::System::Int32 iCount; // 0x24
		::System::Int32 iSize; // 0x28

		::System::Void .ctor(DecoderUTF7Fallback* arg)
		{
			((::System::Void(*)(DecoderUTF7Fallback*, ::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACKBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACKBUFFER_RESET_OFFSET))(nullptr);
		}

		::System::Int32 InternalFallback(::Il2CppArray<::System::Object*>* arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + DECODERUTF7FALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(arg, arg, nullptr);
		}

	};

