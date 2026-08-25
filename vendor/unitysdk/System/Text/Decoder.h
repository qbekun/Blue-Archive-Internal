#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_DECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91580C0)
#define SYSTEM_TEXT_DECODER_GET_FALLBACK_OFFSET UNITYSDK_OFFSET(0x91580D0)
#define SYSTEM_TEXT_DECODER_GET_FALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x91580E0)
#define SYSTEM_TEXT_DECODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x9158210)
#define SYSTEM_TEXT_DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x9158220)
#define SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9158360)
#define SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9158380)
#define SYSTEM_TEXT_DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x91584E0)
#define SYSTEM_TEXT_DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9158520)
#define SYSTEM_TEXT_DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9158740)
#define SYSTEM_TEXT_DECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x91587F0)
#define SYSTEM_TEXT_DECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x9158B60)

namespace System::Text
{
	inline static constexpr unsigned int Decoder_TypeDefinitionIndex = 24221;

	class Decoder : public Il2CppObject
	{
	public:
		::System::Text::DecoderFallback* _fallback; // 0x10
		::System::Text::DecoderFallbackBuffer* _fallbackBuffer; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::DecoderFallback* get_Fallback()
		{
			return (return (::System::Text::DecoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GET_FALLBACK_OFFSET))(nullptr);
		}

		::System::Text::DecoderFallbackBuffer* get_FallbackBuffer()
		{
			return (return (::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GET_FALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Boolean get_InternalHasFallbackBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_RESET_OFFSET))(nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Convert(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

