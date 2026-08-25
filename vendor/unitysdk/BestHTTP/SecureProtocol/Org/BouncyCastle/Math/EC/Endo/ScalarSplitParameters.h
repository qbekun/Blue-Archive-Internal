#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_V1A_OFFSET UNITYSDK_OFFSET(0x562950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x5624D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_G1_OFFSET UNITYSDK_OFFSET(0x5629E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_V2A_OFFSET UNITYSDK_OFFSET(0x5629F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_V2B_OFFSET UNITYSDK_OFFSET(0x562A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_BITS_OFFSET UNITYSDK_OFFSET(0x562A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_V1B_OFFSET UNITYSDK_OFFSET(0x562A20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_G2_OFFSET UNITYSDK_OFFSET(0x562A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_CHECKVECTOR_OFFSET UNITYSDK_OFFSET(0x562960)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo
{
	inline static constexpr unsigned int ScalarSplitParameters_TypeDefinitionIndex = 21858;

	class ScalarSplitParameters : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m_v1A; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m_v1B; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m_v2A; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m_v2B; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m_g1; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m_g2; // 0x38
		::System::Int32 m_bits; // 0x40

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_V1A()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_V1A_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_G1()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_G1_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_V2A()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_V2A_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_V2B()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_V2B_OFFSET))(nullptr);
		}

		::System::Int32 get_Bits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_BITS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_V1B()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_V1B_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_G2()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_GET_G2_OFFSET))(nullptr);
		}

		::System::Void CheckVector(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_SCALARSPLITPARAMETERS_CHECKVECTOR_OFFSET))(arg, str, nullptr);
		}

	};
}

