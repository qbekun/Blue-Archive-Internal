#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int OpenFlags_TypeDefinitionIndex = 29275;

	class OpenFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::OpenFlags* ReadOnly; // 0x0
		::System::Security::Cryptography::X509Certificates::OpenFlags* ReadWrite; // 0x0
		::System::Security::Cryptography::X509Certificates::OpenFlags* MaxAllowed; // 0x0
		::System::Security::Cryptography::X509Certificates::OpenFlags* OpenExistingOnly; // 0x0
		::System::Security::Cryptography::X509Certificates::OpenFlags* IncludeArchived; // 0x0

	};
}

