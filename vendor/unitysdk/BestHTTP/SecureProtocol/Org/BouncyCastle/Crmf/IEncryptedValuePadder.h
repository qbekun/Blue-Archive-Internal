#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_IENCRYPTEDVALUEPADDER_GETUNPADDEDDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_IENCRYPTEDVALUEPADDER_GETPADDEDDATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int IEncryptedValuePadder_TypeDefinitionIndex = 22654;

	class IEncryptedValuePadder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetUnpaddedData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_IENCRYPTEDVALUEPADDER_GETUNPADDEDDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPaddedData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_IENCRYPTEDVALUEPADDER_GETPADDEDDATA_OFFSET))(arg, nullptr);
		}

	};
}

