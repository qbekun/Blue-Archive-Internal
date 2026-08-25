#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_CALCULATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x559960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_DECODE32_OFFSET UNITYSDK_OFFSET(0x559F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_DECODESCALAR_OFFSET UNITYSDK_OFFSET(0x559F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_GENERATEPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x55A060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_GENERATEPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x55A0B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x55A230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_SCALARMULT_OFFSET UNITYSDK_OFFSET(0x559A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_.CTOR_OFFSET UNITYSDK_OFFSET(0x55A410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_POINTDOUBLE_OFFSET UNITYSDK_OFFSET(0x55A310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_SCALARMULTBASE_OFFSET UNITYSDK_OFFSET(0x55A0C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc7748
{
	inline static constexpr unsigned int X448_TypeDefinitionIndex = 21819;

	class X448 : public Il2CppObject
	{
	public:
		::System::Int32 PointSize; // 0x0
		::System::Int32 ScalarSize; // 0x0
		::System::UInt32 C_A; // 0x0
		::System::UInt32 C_A24; // 0x0

		::System::Boolean CalculateAgreement(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_CALCULATEAGREEMENT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 Decode32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_DECODE32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DecodeScalar(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_DECODESCALAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GeneratePrivateKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_GENERATEPRIVATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GeneratePublicKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_GENERATEPUBLICKEY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Precompute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_PRECOMPUTE_OFFSET))(nullptr);
		}

		::System::Void ScalarMult(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_SCALARMULT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PointDouble(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_POINTDOUBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ScalarMultBase(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X448_SCALARMULTBASE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

