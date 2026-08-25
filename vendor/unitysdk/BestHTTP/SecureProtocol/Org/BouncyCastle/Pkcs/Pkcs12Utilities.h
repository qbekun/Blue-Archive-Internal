#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12UTILITIES_CONVERTTODEFINITELENGTH_OFFSET UNITYSDK_OFFSET(0x9922E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12UTILITIES_CONVERTTODEFINITELENGTH_OFFSET UNITYSDK_OFFSET(0x992370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12UTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x992820)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	inline static constexpr unsigned int Pkcs12Utilities_TypeDefinitionIndex = 21683;

	class Pkcs12Utilities : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ConvertToDefiniteLength(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12UTILITIES_CONVERTTODEFINITELENGTH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ConvertToDefiniteLength(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12UTILITIES_CONVERTTODEFINITELENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12UTILITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

