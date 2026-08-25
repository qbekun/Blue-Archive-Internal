#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define CERTID_.CTOR_OFFSET UNITYSDK_OFFSET(0x98A4C0)
#define CERTID_.CTOR_OFFSET UNITYSDK_OFFSET(0x98CB50)
#define CERTID_GET_ID_OFFSET UNITYSDK_OFFSET(0x991EE0)
#define CERTID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x991EF0)
#define CERTID_EQUALS_OFFSET UNITYSDK_OFFSET(0x991F40)

	inline static constexpr unsigned int CertId_TypeDefinitionIndex = 21679;

	class CertId : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* id; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + CERTID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CERTID_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Id()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CERTID_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CERTID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CERTID_EQUALS_OFFSET))(arg, nullptr);
		}

	};

