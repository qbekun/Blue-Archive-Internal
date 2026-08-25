#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Net::Security { class AsyncOperationStatus; }

#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x96D0FF0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_RUNSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x96D1000)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_NAME_OFFSET UNITYSDK_OFFSET(0x96D1010)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_USERRESULT_OFFSET UNITYSDK_OFFSET(0x96D1050)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_SET_USERRESULT_OFFSET UNITYSDK_OFFSET(0x96D1060)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D1070)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTREAD_OFFSET UNITYSDK_OFFSET(0x96D1100)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTWRITE_OFFSET UNITYSDK_OFFSET(0x96D11F0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_STARTOPERATION_OFFSET UNITYSDK_OFFSET(0x96D1200)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_PROCESSOPERATION_OFFSET UNITYSDK_OFFSET(0x96D1310)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_INNERREAD_OFFSET UNITYSDK_OFFSET(0x96D1410)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_RUN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96D1520)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolRequest_TypeDefinitionIndex = 29060;

	class AsyncProtocolRequest : public Il2CppObject
	{
	public:
		::Mono::Net::Security::MobileAuthenticatedStream* _Parent_k__BackingField; // 0x10
		::System::Boolean _RunSynchronously_k__BackingField; // 0x18
		::System::Int32 _UserResult_k__BackingField; // 0x1C
		::System::Int32 Started; // 0x20
		::System::Int32 RequestedSize; // 0x24
		::System::Int32 WriteRequested; // 0x28
		::System::Object* locker; // 0x30

		::Mono::Net::Security::MobileAuthenticatedStream* get_Parent()
		{
			return (return (::Mono::Net::Security::MobileAuthenticatedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Boolean get_RunSynchronously()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_RUNSYNCHRONOUSLY_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_UserResult()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_USERRESULT_OFFSET))(nullptr);
		}

		::System::Void set_UserResult(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_SET_USERRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mono::Net::Security::MobileAuthenticatedStream* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RequestRead(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTREAD_OFFSET))(arg, nullptr);
		}

		::System::Void RequestWrite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTWRITE_OFFSET))(nullptr);
		}

		Il2CppObject* StartOperation(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_STARTOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ProcessOperation(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_PROCESSOPERATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* InnerRead(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_INNERREAD_OFFSET))(arg, nullptr);
		}

		::Mono::Net::Security::AsyncOperationStatus* Run(::Mono::Net::Security::AsyncOperationStatus* arg)
		{
			return (return (::Mono::Net::Security::AsyncOperationStatus*(*)(::Mono::Net::Security::AsyncOperationStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_TOSTRING_OFFSET))(nullptr);
		}

	};
}

