#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_PARAMETERSWITHSBOX_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x692DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_PARAMETERSWITHSBOX_GETSBOX_OFFSET UNITYSDK_OFFSET(0x692DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_PARAMETERSWITHSBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x692DE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int ParametersWithSBox_TypeDefinitionIndex = 22360;

	class ParametersWithSBox : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters; // 0x10
		::Il2CppArray<::System::Object*>* sBox; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_PARAMETERSWITHSBOX_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSBox()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_PARAMETERSWITHSBOX_GETSBOX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_PARAMETERSWITHSBOX_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

