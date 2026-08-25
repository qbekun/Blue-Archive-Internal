#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODERNLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x915D250)
#define SYSTEM_TEXT_ENCODERNLS_RESET_OFFSET UNITYSDK_OFFSET(0x915D2B0)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x915D2E0)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x915D4D0)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x915D5E0)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x915D8B0)
#define SYSTEM_TEXT_ENCODERNLS_CONVERT_OFFSET UNITYSDK_OFFSET(0x915D9F0)
#define SYSTEM_TEXT_ENCODERNLS_CONVERT_OFFSET UNITYSDK_OFFSET(0x915DD10)
#define SYSTEM_TEXT_ENCODERNLS_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x915DF00)
#define SYSTEM_TEXT_ENCODERNLS_GET_MUSTFLUSH_OFFSET UNITYSDK_OFFSET(0x915DF10)
#define SYSTEM_TEXT_ENCODERNLS_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x915DF20)
#define SYSTEM_TEXT_ENCODERNLS_CLEARMUSTFLUSH_OFFSET UNITYSDK_OFFSET(0x915DF30)

namespace System::Text
{
	inline static constexpr unsigned int EncoderNLS_TypeDefinitionIndex = 24240;

	class EncoderNLS : public Il2CppObject
	{
	public:
		::System::Char _charLeftOver; // 0x20
		::System::Text::Encoding* _encoding; // 0x28
		::System::Boolean _mustFlush; // 0x30
		::System::Boolean _throwOnOverflow; // 0x31
		::System::Int32 _charsUsed; // 0x34

		::System::Void .ctor(::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_RESET_OFFSET))(nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Boolean get_MustFlush()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GET_MUSTFLUSH_OFFSET))(nullptr);
		}

		::System::Boolean get_HasState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GET_HASSTATE_OFFSET))(nullptr);
		}

		::System::Void ClearMustFlush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_CLEARMUSTFLUSH_OFFSET))(nullptr);
		}

	};
}

