#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x9159B30)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALRESET_OFFSET UNITYSDK_OFFSET(0x9159B60)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9159B80)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x9159B90)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x9159D30)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_THROWLASTBYTESRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9159EA0)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91591A0)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallbackBuffer_TypeDefinitionIndex = 24228;

	class DecoderFallbackBuffer : public Il2CppObject
	{
	public:
		::System::Object** byteStart; // 0x10
		::System::Object** charEnd; // 0x18

		::System::Boolean Fallback(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_RESET_OFFSET))(nullptr);
		}

		::System::Void InternalReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALRESET_OFFSET))(nullptr);
		}

		::System::Void InternalInitialize(::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean InternalFallback(::Il2CppArray<::System::Object*>* arg, ::System::Object** arg, ::System::Object*&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Object**, ::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 InternalFallback(::Il2CppArray<::System::Object*>* arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ThrowLastBytesRecursive(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_THROWLASTBYTESRECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_.CTOR_OFFSET))(nullptr);
		}

	};
}

