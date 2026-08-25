#pragma once
#include "../../../../unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509SubjectKeyIdentifierHashAlgorithm_TypeDefinitionIndex = 29285;

	class X509SubjectKeyIdentifierHashAlgorithm : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm* Sha1; // 0x0
		::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm* ShortSha1; // 0x0
		::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm* CapiSha1; // 0x0

	};
}

