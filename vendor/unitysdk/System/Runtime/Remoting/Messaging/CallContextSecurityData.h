#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x91E9710)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x91E9690)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E9930)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CallContextSecurityData_TypeDefinitionIndex = 24522;

	class CallContextSecurityData : public Il2CppObject
	{
	public:
		::System::Security::Principal::IPrincipal* _principal; // 0x10

		::System::Boolean get_HasInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_GET_HASINFO_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

