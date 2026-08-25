#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509KeyStorageFlags_TypeDefinitionIndex = 24408;

	class X509KeyStorageFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* DefaultKeySet; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* UserKeySet; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* MachineKeySet; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* Exportable; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* UserProtected; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* PersistKeySet; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* EphemeralKeySet; // 0x0

	};
}

