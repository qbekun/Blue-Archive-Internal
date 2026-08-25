#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AD340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_GETMAC_OFFSET UNITYSDK_OFFSET(0x9AF0D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_GETMAC_OFFSET UNITYSDK_OFFSET(0x9AF130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_GETALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x9AFD70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_DOFINAL_OFFSET UNITYSDK_OFFSET(0x9AFEA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_DOFINALOPTIMIZED_OFFSET UNITYSDK_OFFSET(0x9AFFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_DOFINAL_OFFSET UNITYSDK_OFFSET(0x9B0110)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int MacUtilities_TypeDefinitionIndex = 21714;

	class MacUtilities : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* algorithms; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* GetMac(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_GETMAC_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* GetMac(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_GETMAC_OFFSET))(str, nullptr);
		}

		::System::String* GetAlgorithmName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_GETALGORITHMNAME_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DoFinal(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_DOFINAL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* DoFinalOptimized(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_DOFINALOPTIMIZED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DoFinal(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_MACUTILITIES_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

