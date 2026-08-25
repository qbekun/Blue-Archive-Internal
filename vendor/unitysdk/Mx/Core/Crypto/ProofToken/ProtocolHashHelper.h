#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Crypto::ProofToken { class IProofHash; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_CORE_CRYPTO_PROOFTOKEN_PROTOCOLHASHHELPER_GETHASH_OFFSET UNITYSDK_OFFSET(0x1087D50)
#define MX_CORE_CRYPTO_PROOFTOKEN_PROTOCOLHASHHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1087E50)

namespace MX::Core::Crypto::ProofToken
{
	inline static constexpr unsigned int ProtocolHashHelper_TypeDefinitionIndex = 12915;

	class ProtocolHashHelper : public Il2CppObject
	{
	public:
		::MX::Core::Crypto::ProofToken::IProofHash* Hash; // 0x0

		::System::String* GetHash(::MX::NetworkProtocol::Protocol* arg)
		{
			return ((::System::String*(*)(::MX::NetworkProtocol::Protocol*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_PROTOCOLHASHHELPER_GETHASH_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_PROTOCOLHASHHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

