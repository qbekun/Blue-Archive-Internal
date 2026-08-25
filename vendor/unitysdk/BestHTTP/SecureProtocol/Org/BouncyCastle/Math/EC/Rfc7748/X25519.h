#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_.CTOR_OFFSET UNITYSDK_OFFSET(0x5574E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_GENERATEPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x5574F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_DECODESCALAR_OFFSET UNITYSDK_OFFSET(0x5576A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_DECODE32_OFFSET UNITYSDK_OFFSET(0x557A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_SCALARMULTBASE_OFFSET UNITYSDK_OFFSET(0x557500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_SCALARMULT_OFFSET UNITYSDK_OFFSET(0x557AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_POINTDOUBLE_OFFSET UNITYSDK_OFFSET(0x558130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x558280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_CALCULATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x5582E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_GENERATEPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x558380)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc7748
{
	inline static constexpr unsigned int X25519_TypeDefinitionIndex = 21817;

	class X25519 : public Il2CppObject
	{
	public:
		::System::Int32 PointSize; // 0x0
		::System::Int32 ScalarSize; // 0x0
		::System::Int32 C_A; // 0x0
		::System::Int32 C_A24; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GeneratePublicKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_GENERATEPUBLICKEY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DecodeScalar(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_DECODESCALAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 Decode32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_DECODE32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ScalarMultBase(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_SCALARMULTBASE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ScalarMult(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_SCALARMULT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PointDouble(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_POINTDOUBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Precompute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_PRECOMPUTE_OFFSET))(nullptr);
		}

		::System::Boolean CalculateAgreement(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_CALCULATEAGREEMENT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GeneratePrivateKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_RFC7748_X25519_GENERATEPRIVATEKEY_OFFSET))(arg, arg, nullptr);
		}

	};
}

