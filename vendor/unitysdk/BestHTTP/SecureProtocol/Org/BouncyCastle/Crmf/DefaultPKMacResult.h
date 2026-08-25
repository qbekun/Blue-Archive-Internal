#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_DEFAULTPKMACRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x78C7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_DEFAULTPKMACRESULT_COLLECT_OFFSET UNITYSDK_OFFSET(0x78CB50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_DEFAULTPKMACRESULT_COLLECT_OFFSET UNITYSDK_OFFSET(0x78CC80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int DefaultPKMacResult_TypeDefinitionIndex = 22660;

	class DefaultPKMacResult : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_DEFAULTPKMACRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Collect()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_DEFAULTPKMACRESULT_COLLECT_OFFSET))(nullptr);
		}

		::System::Int32 Collect(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_DEFAULTPKMACRESULT_COLLECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

