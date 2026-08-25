#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_DECODERNLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x915A180)
#define SYSTEM_TEXT_DECODERNLS_RESET_OFFSET UNITYSDK_OFFSET(0x915A1E0)
#define SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x915A200)
#define SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x915A230)
#define SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x915A420)
#define SYSTEM_TEXT_DECODERNLS_GETCHARS_OFFSET UNITYSDK_OFFSET(0x915A530)
#define SYSTEM_TEXT_DECODERNLS_GETCHARS_OFFSET UNITYSDK_OFFSET(0x915A570)
#define SYSTEM_TEXT_DECODERNLS_GETCHARS_OFFSET UNITYSDK_OFFSET(0x915A840)
#define SYSTEM_TEXT_DECODERNLS_CONVERT_OFFSET UNITYSDK_OFFSET(0x915A980)
#define SYSTEM_TEXT_DECODERNLS_CONVERT_OFFSET UNITYSDK_OFFSET(0x915ACA0)
#define SYSTEM_TEXT_DECODERNLS_GET_MUSTFLUSH_OFFSET UNITYSDK_OFFSET(0x915AE90)
#define SYSTEM_TEXT_DECODERNLS_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x915AEA0)
#define SYSTEM_TEXT_DECODERNLS_CLEARMUSTFLUSH_OFFSET UNITYSDK_OFFSET(0x915AEB0)

namespace System::Text
{
	inline static constexpr unsigned int DecoderNLS_TypeDefinitionIndex = 24229;

	class DecoderNLS : public Il2CppObject
	{
	public:
		::System::Text::Encoding* _encoding; // 0x20
		::System::Boolean _mustFlush; // 0x28
		::System::Boolean _throwOnOverflow; // 0x29
		::System::Int32 _bytesUsed; // 0x2C

		::System::Void .ctor(::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_RESET_OFFSET))(nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_MustFlush()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GET_MUSTFLUSH_OFFSET))(nullptr);
		}

		::System::Boolean get_HasState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GET_HASSTATE_OFFSET))(nullptr);
		}

		::System::Void ClearMustFlush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_CLEARMUSTFLUSH_OFFSET))(nullptr);
		}

	};
}

