#pragma once
#include "../../unitysdk.h"

#define MONO_BTLS_MONOBTLSERROR_MONO_BTLS_ERROR_CLEAR_ERROR_OFFSET UNITYSDK_OFFSET(0x96E0360)
#define MONO_BTLS_MONOBTLSERROR_MONO_BTLS_ERROR_GET_ERROR_LINE_OFFSET UNITYSDK_OFFSET(0x96E03E0)
#define MONO_BTLS_MONOBTLSERROR_MONO_BTLS_ERROR_GET_ERROR_STRING_N_OFFSET UNITYSDK_OFFSET(0x96E0470)
#define MONO_BTLS_MONOBTLSERROR_MONO_BTLS_ERROR_GET_REASON_OFFSET UNITYSDK_OFFSET(0x96E0500)
#define MONO_BTLS_MONOBTLSERROR_CLEARERROR_OFFSET UNITYSDK_OFFSET(0x96DED20)
#define MONO_BTLS_MONOBTLSERROR_GETERRORSTRING_OFFSET UNITYSDK_OFFSET(0x96DE8F0)
#define MONO_BTLS_MONOBTLSERROR_GETERROR_OFFSET UNITYSDK_OFFSET(0x96DE6C0)
#define MONO_BTLS_MONOBTLSERROR_GETERRORREASON_OFFSET UNITYSDK_OFFSET(0x96DE870)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsError_TypeDefinitionIndex = 29100;

	class MonoBtlsError : public Il2CppObject
	{
	public:
		::System::Void mono_btls_error_clear_error()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSERROR_MONO_BTLS_ERROR_CLEAR_ERROR_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_error_get_error_line(int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSERROR_MONO_BTLS_ERROR_GET_ERROR_LINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mono_btls_error_get_error_string_n(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSERROR_MONO_BTLS_ERROR_GET_ERROR_STRING_N_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_error_get_reason(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSERROR_MONO_BTLS_ERROR_GET_REASON_OFFSET))(arg, nullptr);
		}

		::System::Void ClearError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSERROR_CLEARERROR_OFFSET))(nullptr);
		}

		::System::String* GetErrorString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSERROR_GETERRORSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetError(::System::String&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSERROR_GETERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetErrorReason(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSERROR_GETERRORREASON_OFFSET))(arg, nullptr);
		}

	};
}

