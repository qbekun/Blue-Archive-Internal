#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_PRINCIPAL_IIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_PRINCIPAL_IIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Security::Principal
{
	inline static constexpr unsigned int IIdentity_TypeDefinitionIndex = 24412;

	class IIdentity : public Il2CppObject
	{
	public:
		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IIDENTITY_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_AuthenticationType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET))(nullptr);
		}

	};
}

