#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class AlertDescription; }

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int AlertDescription_TypeDefinitionIndex = 35789;

	class AlertDescription : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::Mono::Security::Interface::AlertDescription* CloseNotify; // 0x0
		::Mono::Security::Interface::AlertDescription* UnexpectedMessage; // 0x0
		::Mono::Security::Interface::AlertDescription* BadRecordMAC; // 0x0
		::Mono::Security::Interface::AlertDescription* DecryptionFailed_RESERVED; // 0x0
		::Mono::Security::Interface::AlertDescription* RecordOverflow; // 0x0
		::Mono::Security::Interface::AlertDescription* DecompressionFailure; // 0x0
		::Mono::Security::Interface::AlertDescription* HandshakeFailure; // 0x0
		::Mono::Security::Interface::AlertDescription* NoCertificate_RESERVED; // 0x0
		::Mono::Security::Interface::AlertDescription* BadCertificate; // 0x0
		::Mono::Security::Interface::AlertDescription* UnsupportedCertificate; // 0x0
		::Mono::Security::Interface::AlertDescription* CertificateRevoked; // 0x0
		::Mono::Security::Interface::AlertDescription* CertificateExpired; // 0x0
		::Mono::Security::Interface::AlertDescription* CertificateUnknown; // 0x0
		::Mono::Security::Interface::AlertDescription* IlegalParameter; // 0x0
		::Mono::Security::Interface::AlertDescription* UnknownCA; // 0x0
		::Mono::Security::Interface::AlertDescription* AccessDenied; // 0x0
		::Mono::Security::Interface::AlertDescription* DecodeError; // 0x0
		::Mono::Security::Interface::AlertDescription* DecryptError; // 0x0
		::Mono::Security::Interface::AlertDescription* ExportRestriction; // 0x0
		::Mono::Security::Interface::AlertDescription* ProtocolVersion; // 0x0
		::Mono::Security::Interface::AlertDescription* InsuficientSecurity; // 0x0
		::Mono::Security::Interface::AlertDescription* InternalError; // 0x0
		::Mono::Security::Interface::AlertDescription* UserCancelled; // 0x0
		::Mono::Security::Interface::AlertDescription* NoRenegotiation; // 0x0
		::Mono::Security::Interface::AlertDescription* UnsupportedExtension; // 0x0

	};
}

