#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x78E080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x78C690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x797130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_GETINPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x797140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_WRITE_OFFSET UNITYSDK_OFFSET(0x7971A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_GETCONTENT_OFFSET UNITYSDK_OFFSET(0x7971F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsProcessableByteArray_TypeDefinitionIndex = 22692;

	class CmsProcessableByteArray : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* type; // 0x10
		::Il2CppArray<::System::Object*>* bytes; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_GET_TYPE_OFFSET))(nullptr);
		}

		::System::IO::Stream* GetInputStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_GETINPUTSTREAM_OFFSET))(nullptr);
		}

		::System::Void Write(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetContent()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEBYTEARRAY_GETCONTENT_OFFSET))(nullptr);
		}

	};
}

