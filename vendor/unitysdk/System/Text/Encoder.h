#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x915B460)
#define SYSTEM_TEXT_ENCODER_GET_FALLBACK_OFFSET UNITYSDK_OFFSET(0x915B470)
#define SYSTEM_TEXT_ENCODER_GET_FALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x915B480)
#define SYSTEM_TEXT_ENCODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x915B5A0)
#define SYSTEM_TEXT_ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x915B5B0)
#define SYSTEM_TEXT_ENCODER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x915B690)
#define SYSTEM_TEXT_ENCODER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x915B810)
#define SYSTEM_TEXT_ENCODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x915BA40)
#define SYSTEM_TEXT_ENCODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x915BDB0)

namespace System::Text
{
	inline static constexpr unsigned int Encoder_TypeDefinitionIndex = 24232;

	class Encoder : public Il2CppObject
	{
	public:
		::System::Text::EncoderFallback* _fallback; // 0x10
		::System::Text::EncoderFallbackBuffer* _fallbackBuffer; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::EncoderFallback* get_Fallback()
		{
			return (return (::System::Text::EncoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GET_FALLBACK_OFFSET))(nullptr);
		}

		::System::Text::EncoderFallbackBuffer* get_FallbackBuffer()
		{
			return (return (::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GET_FALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Boolean get_InternalHasFallbackBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_RESET_OFFSET))(nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTECOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

