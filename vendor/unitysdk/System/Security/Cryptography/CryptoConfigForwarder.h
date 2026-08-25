#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIGFORWARDER_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x91BB7D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIGFORWARDER_CREATEDEFAULTHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x91BB820)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConfigForwarder_TypeDefinitionIndex = 24404;

	class CryptoConfigForwarder : public Il2CppObject
	{
	public:
		::System::Object* CreateFromName(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIGFORWARDER_CREATEFROMNAME_OFFSET))(str, nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* CreateDefaultHashAlgorithm()
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIGFORWARDER_CREATEDEFAULTHASHALGORITHM_OFFSET))(nullptr);
		}

	};
}

