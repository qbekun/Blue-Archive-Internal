#pragma once
#include "../unitysdk.h"

namespace Mono { class ISystemCertificateProvider; }

#define MONO_ISYSTEMDEPENDENCYPROVIDER_GET_CERTIFICATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Mono
{
	inline static constexpr unsigned int ISystemDependencyProvider_TypeDefinitionIndex = 23568;

	class ISystemDependencyProvider : public Il2CppObject
	{
	public:
		::Mono::ISystemCertificateProvider* get_CertificateProvider()
		{
			return (return (::Mono::ISystemCertificateProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_ISYSTEMDEPENDENCYPROVIDER_GET_CERTIFICATEPROVIDER_OFFSET))(nullptr);
		}

	};
}

