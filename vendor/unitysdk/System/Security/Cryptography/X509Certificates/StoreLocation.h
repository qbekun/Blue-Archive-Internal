#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int StoreLocation_TypeDefinitionIndex = 29276;

	class StoreLocation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::StoreLocation* CurrentUser; // 0x0
		::System::Security::Cryptography::X509Certificates::StoreLocation* LocalMachine; // 0x0

	};
}

