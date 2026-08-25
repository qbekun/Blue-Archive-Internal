#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KdfFeedbackParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_R_OFFSET UNITYSDK_OFFSET(0x691A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x691A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_KI_OFFSET UNITYSDK_OFFSET(0x691A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_FIXEDINPUTDATA_OFFSET UNITYSDK_OFFSET(0x691AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_USECOUNTER_OFFSET UNITYSDK_OFFSET(0x691AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_CREATEWITHCOUNTER_OFFSET UNITYSDK_OFFSET(0x691B00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_IV_OFFSET UNITYSDK_OFFSET(0x691D50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_CREATEWITHOUTCOUNTER_OFFSET UNITYSDK_OFFSET(0x691DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x691BD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int KdfFeedbackParameters_TypeDefinitionIndex = 22347;

	class KdfFeedbackParameters : public Il2CppObject
	{
	public:
		::System::Int32 UNUSED_R; // 0x0
		::Il2CppArray<::System::Object*>* ki; // 0x10
		::Il2CppArray<::System::Object*>* iv; // 0x18
		::System::Boolean useCounter; // 0x20
		::System::Int32 r; // 0x24
		::Il2CppArray<::System::Object*>* fixedInputData; // 0x28

		::System::Int32 get_R()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_R_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Ki()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_KI_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FixedInputData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_FIXEDINPUTDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_UseCounter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_USECOUNTER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters* CreateWithCounter(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_CREATEWITHCOUNTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Iv()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_GET_IV_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters* CreateWithoutCounter(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_CREATEWITHOUTCOUNTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFFEEDBACKPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

