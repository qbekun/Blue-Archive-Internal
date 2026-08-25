#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiStatus; }

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int PkiStatus_TypeDefinitionIndex = 23245;

	class PkiStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* Granted; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* GrantedWithMods; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* Rejection; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* Waiting; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* RevocationWarning; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* RevocationNotification; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* KeyUpdateWarning; // 0x0

	};
}

