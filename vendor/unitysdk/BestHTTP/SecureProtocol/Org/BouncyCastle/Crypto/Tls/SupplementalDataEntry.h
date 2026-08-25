#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SUPPLEMENTALDATAENTRY_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x6179B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SUPPLEMENTALDATAENTRY_GET_DATA_OFFSET UNITYSDK_OFFSET(0x6179C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SUPPLEMENTALDATAENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x6179D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int SupplementalDataEntry_TypeDefinitionIndex = 22177;

	class SupplementalDataEntry : public Il2CppObject
	{
	public:
		::System::Int32 mDataType; // 0x10
		::Il2CppArray<::System::Object*>* mData; // 0x18

		::System::Int32 get_DataType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SUPPLEMENTALDATAENTRY_GET_DATATYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Data()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SUPPLEMENTALDATAENTRY_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SUPPLEMENTALDATAENTRY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

