#pragma once
#include "../../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFPRECOMPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x561760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFPRECOMPINFO_SET_PRECOMP_OFFSET UNITYSDK_OFFSET(0x561770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFPRECOMPINFO_GET_PRECOMP_OFFSET UNITYSDK_OFFSET(0x561780)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier
{
	inline static constexpr unsigned int WTauNafPreCompInfo_TypeDefinitionIndex = 21846;

	class WTauNafPreCompInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_preComp; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFPRECOMPINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PreComp(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFPRECOMPINFO_SET_PRECOMP_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PreComp()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFPRECOMPINFO_GET_PRECOMP_OFFSET))(nullptr);
		}

	};
}

