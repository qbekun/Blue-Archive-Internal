#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KdfDoublePipelineIterationParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_GET_USECOUNTER_OFFSET UNITYSDK_OFFSET(0x6916A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_GET_KI_OFFSET UNITYSDK_OFFSET(0x6916B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x691700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_GET_FIXEDINPUTDATA_OFFSET UNITYSDK_OFFSET(0x691860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_GET_R_OFFSET UNITYSDK_OFFSET(0x6918B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6918C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_CREATEWITHOUTCOUNTER_OFFSET UNITYSDK_OFFSET(0x691900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_CREATEWITHCOUNTER_OFFSET UNITYSDK_OFFSET(0x691990)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int KdfDoublePipelineIterationParameters_TypeDefinitionIndex = 22346;

	class KdfDoublePipelineIterationParameters : public Il2CppObject
	{
	public:
		::System::Int32 UNUSED_R; // 0x0
		::Il2CppArray<::System::Object*>* ki; // 0x10
		::System::Boolean useCounter; // 0x18
		::System::Int32 r; // 0x1C
		::Il2CppArray<::System::Object*>* fixedInputData; // 0x20

		::System::Boolean get_UseCounter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_GET_USECOUNTER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Ki()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_GET_KI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FixedInputData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_GET_FIXEDINPUTDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_R()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_GET_R_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters* CreateWithoutCounter(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_CREATEWITHOUTCOUNTER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters* CreateWithCounter(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFDOUBLEPIPELINEITERATIONPARAMETERS_CREATEWITHCOUNTER_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

