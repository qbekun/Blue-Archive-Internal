#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class OcspResp; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPRESPGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D7390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPRESPGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x9D73A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int OCSPRespGenerator_TypeDefinitionIndex = 21743;

	class OCSPRespGenerator : public Il2CppObject
	{
	public:
		::System::Int32 Successful; // 0x0
		::System::Int32 MalformedRequest; // 0x0
		::System::Int32 InternalError; // 0x0
		::System::Int32 TryLater; // 0x0
		::System::Int32 SigRequired; // 0x0
		::System::Int32 Unauthorized; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPRESPGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::OcspResp* Generate(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::OcspResp*(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPRESPGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

