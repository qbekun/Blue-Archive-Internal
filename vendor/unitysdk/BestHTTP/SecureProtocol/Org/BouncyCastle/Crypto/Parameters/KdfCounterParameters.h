#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6913D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6913F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_KI_OFFSET UNITYSDK_OFFSET(0x691590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_FIXEDINPUTDATA_OFFSET UNITYSDK_OFFSET(0x6915A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_FIXEDINPUTDATACOUNTERPREFIX_OFFSET UNITYSDK_OFFSET(0x6915F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_FIXEDINPUTDATACOUNTERSUFFIX_OFFSET UNITYSDK_OFFSET(0x691640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_R_OFFSET UNITYSDK_OFFSET(0x691690)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int KdfCounterParameters_TypeDefinitionIndex = 22345;

	class KdfCounterParameters : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ki; // 0x10
		::Il2CppArray<::System::Object*>* fixedInputDataCounterPrefix; // 0x18
		::Il2CppArray<::System::Object*>* fixedInputDataCounterSuffix; // 0x20
		::System::Int32 r; // 0x28

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Ki()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_KI_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FixedInputData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_FIXEDINPUTDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FixedInputDataCounterPrefix()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_FIXEDINPUTDATACOUNTERPREFIX_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FixedInputDataCounterSuffix()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_FIXEDINPUTDATACOUNTERSUFFIX_OFFSET))(nullptr);
		}

		::System::Int32 get_R()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFCOUNTERPARAMETERS_GET_R_OFFSET))(nullptr);
		}

	};
}

