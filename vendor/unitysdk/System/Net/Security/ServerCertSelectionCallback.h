#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SECURITY_SERVERCERTSELECTIONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAF640)
#define SYSTEM_NET_SECURITY_SERVERCERTSELECTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AAF710)

namespace System::Net::Security
{
	inline static constexpr unsigned int ServerCertSelectionCallback_TypeDefinitionIndex = 29947;

	class ServerCertSelectionCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SERVERCERTSELECTIONCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::System::String* str)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SERVERCERTSELECTIONCALLBACK_INVOKE_OFFSET))(str, nullptr);
		}

	};
}

