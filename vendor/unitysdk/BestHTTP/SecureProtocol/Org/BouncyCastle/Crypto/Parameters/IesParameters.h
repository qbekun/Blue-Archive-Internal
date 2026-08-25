#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESPARAMETERS_GETDERIVATIONV_OFFSET UNITYSDK_OFFSET(0x6912A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6912B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESPARAMETERS_GETENCODINGV_OFFSET UNITYSDK_OFFSET(0x691300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESPARAMETERS_GET_MACKEYSIZE_OFFSET UNITYSDK_OFFSET(0x691310)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int IesParameters_TypeDefinitionIndex = 22342;

	class IesParameters : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* derivation; // 0x10
		::Il2CppArray<::System::Object*>* encoding; // 0x18
		::System::Int32 macKeySize; // 0x20

		::Il2CppArray<::System::Object*>* GetDerivationV()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESPARAMETERS_GETDERIVATIONV_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncodingV()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESPARAMETERS_GETENCODINGV_OFFSET))(nullptr);
		}

		::System::Int32 get_MacKeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESPARAMETERS_GET_MACKEYSIZE_OFFSET))(nullptr);
		}

	};
}

