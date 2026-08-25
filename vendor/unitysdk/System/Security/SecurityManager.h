#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_SECURITYMANAGER_GET_SECURITYENABLED_OFFSET UNITYSDK_OFFSET(0x917C820)
#define SYSTEM_SECURITY_SECURITYMANAGER_ENSUREELEVATEDPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x91804D0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityManager_TypeDefinitionIndex = 24283;

	class SecurityManager : public Il2CppObject
	{
	public:
		::System::Boolean get_SecurityEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYMANAGER_GET_SECURITYENABLED_OFFSET))(nullptr);
		}

		::System::Void EnsureElevatedPermissions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYMANAGER_ENSUREELEVATEDPERMISSIONS_OFFSET))(nullptr);
		}

	};
}

