#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509VerifyParam; }

#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9ABCBB0)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_COPY_OFFSET UNITYSDK_OFFSET(0x9AC4B20)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_LOOKUP_OFFSET UNITYSDK_OFFSET(0x9AC4BA0)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_CAN_MODIFY_OFFSET UNITYSDK_OFFSET(0x9AC4C20)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_SET_HOST_OFFSET UNITYSDK_OFFSET(0x9AC4CA0)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_SET_TIME_OFFSET UNITYSDK_OFFSET(0x9AC4D30)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_FREE_OFFSET UNITYSDK_OFFSET(0x9AC4DC0)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC4E40)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_COPY_OFFSET UNITYSDK_OFFSET(0x9AC4E50)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_GETSSLCLIENT_OFFSET UNITYSDK_OFFSET(0x9AC5020)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_GETSSLSERVER_OFFSET UNITYSDK_OFFSET(0x9AC5380)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_LOOKUP_OFFSET UNITYSDK_OFFSET(0x9AC5060)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_GET_CANMODIFY_OFFSET UNITYSDK_OFFSET(0x9AC53C0)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_WANTTOMODIFY_OFFSET UNITYSDK_OFFSET(0x9AC54C0)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_SETHOST_OFFSET UNITYSDK_OFFSET(0x9AC5530)
#define MONO_BTLS_MONOBTLSX509VERIFYPARAM_SETTIME_OFFSET UNITYSDK_OFFSET(0x9AC57D0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509VerifyParam_TypeDefinitionIndex = 29149;

	class MonoBtlsX509VerifyParam : public Il2CppObject
	{
	public:
		BoringX509VerifyParamHandle* get_Handle()
		{
			return (return (BoringX509VerifyParamHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_x509_verify_param_copy(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_COPY_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_verify_param_lookup(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_LOOKUP_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_verify_param_can_modify(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_CAN_MODIFY_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_verify_param_set_host(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_SET_HOST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_verify_param_set_time(::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_SET_TIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mono_btls_x509_verify_param_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_MONO_BTLS_X509_VERIFY_PARAM_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(BoringX509VerifyParamHandle* arg)
		{
			((::System::Void(*)(BoringX509VerifyParamHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509VerifyParam* Copy()
		{
			return (return (::Mono::Btls::MonoBtlsX509VerifyParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_COPY_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509VerifyParam* GetSslClient()
		{
			return (return (::Mono::Btls::MonoBtlsX509VerifyParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_GETSSLCLIENT_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509VerifyParam* GetSslServer()
		{
			return (return (::Mono::Btls::MonoBtlsX509VerifyParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_GETSSLSERVER_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509VerifyParam* Lookup(::System::String* str, ::System::Boolean arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509VerifyParam*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_LOOKUP_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_CanModify()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_GET_CANMODIFY_OFFSET))(nullptr);
		}

		::System::Void WantToModify()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_WANTTOMODIFY_OFFSET))(nullptr);
		}

		::System::Void SetHost(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_SETHOST_OFFSET))(str, nullptr);
		}

		::System::Void SetTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509VERIFYPARAM_SETTIME_OFFSET))(arg, nullptr);
		}

	};
}

