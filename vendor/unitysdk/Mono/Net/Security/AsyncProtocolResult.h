#pragma once
#include "../../../unitysdk.h"

#define MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_GET_USERRESULT_OFFSET UNITYSDK_OFFSET(0x96D0F80)
#define MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x96D0F90)
#define MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D0FA0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D0FC0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolResult_TypeDefinitionIndex = 29056;

	class AsyncProtocolResult : public Il2CppObject
	{
	public:
		::System::Int32 _UserResult_k__BackingField; // 0x10
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _Error_k__BackingField; // 0x18

		::System::Int32 get_UserResult()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_GET_USERRESULT_OFFSET))(nullptr);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error()
		{
			return (return (::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

