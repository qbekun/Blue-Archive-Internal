#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509RevocationMode_TypeDefinitionIndex = 29284;

	class X509RevocationMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509RevocationMode* NoCheck; // 0x0
		::System::Security::Cryptography::X509Certificates::X509RevocationMode* Online; // 0x0
		::System::Security::Cryptography::X509Certificates::X509RevocationMode* Offline; // 0x0

	};
}

