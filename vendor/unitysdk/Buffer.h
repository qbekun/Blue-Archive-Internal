#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Ed448PublicKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Ed448PrivateKeyParameters; }

#define BUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x66F480)
#define BUFFER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x66F5B0)
#define BUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x66F010)
#define BUFFER_GENERATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x66F1E0)

	inline static constexpr unsigned int Buffer_TypeDefinitionIndex = 22257;

	class Buffer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean VerifySignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFER_VERIFYSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFER_RESET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFER_GENERATESIGNATURE_OFFSET))(arg, arg, nullptr);
		}

	};

