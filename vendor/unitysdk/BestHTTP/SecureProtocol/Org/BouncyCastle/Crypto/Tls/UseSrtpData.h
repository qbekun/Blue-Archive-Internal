#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_USESRTPDATA_GET_PROTECTIONPROFILES_OFFSET UNITYSDK_OFFSET(0x668E30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_USESRTPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x65F350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_USESRTPDATA_GET_MKI_OFFSET UNITYSDK_OFFSET(0x668E40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int UseSrtpData_TypeDefinitionIndex = 22245;

	class UseSrtpData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mProtectionProfiles; // 0x10
		::Il2CppArray<::System::Object*>* mMki; // 0x18

		::Il2CppArray<::System::Object*>* get_ProtectionProfiles()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_USESRTPDATA_GET_PROTECTIONPROFILES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_USESRTPDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Mki()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_USESRTPDATA_GET_MKI_OFFSET))(nullptr);
		}

	};
}

