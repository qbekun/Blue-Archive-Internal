#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPRESPSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D7710)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int OcspRespStatus_TypeDefinitionIndex = 21745;

	class OcspRespStatus : public Il2CppObject
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
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPRESPSTATUS_.CTOR_OFFSET))(nullptr);
		}

	};
}

