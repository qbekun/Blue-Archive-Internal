#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPath; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95CE50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95CE70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95CE90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x951940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x95CED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_GET_CERTPATH_OFFSET UNITYSDK_OFFSET(0x95CF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x95CF30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixCertPathValidatorException_TypeDefinitionIndex = 21662;

	class PkixCertPathValidatorException : public Il2CppObject
	{
	public:
		::System::Exception* cause; // 0x90
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath; // 0x98
		::System::Int32 index; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* get_CertPath()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_GET_CERTPATH_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOREXCEPTION_GET_INDEX_OFFSET))(nullptr);
		}

	};
}

