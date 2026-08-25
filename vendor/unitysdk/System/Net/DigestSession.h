#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_DIGESTSESSION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A695E0)
#define SYSTEM_NET_DIGESTSESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A69640)
#define SYSTEM_NET_DIGESTSESSION_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x9A696A0)
#define SYSTEM_NET_DIGESTSESSION_GET_REALM_OFFSET UNITYSDK_OFFSET(0x9A696C0)
#define SYSTEM_NET_DIGESTSESSION_GET_NONCE_OFFSET UNITYSDK_OFFSET(0x9A696E0)
#define SYSTEM_NET_DIGESTSESSION_GET_OPAQUE_OFFSET UNITYSDK_OFFSET(0x9A69700)
#define SYSTEM_NET_DIGESTSESSION_GET_QOP_OFFSET UNITYSDK_OFFSET(0x9A69720)
#define SYSTEM_NET_DIGESTSESSION_GET_CNONCE_OFFSET UNITYSDK_OFFSET(0x9A69740)
#define SYSTEM_NET_DIGESTSESSION_PARSE_OFFSET UNITYSDK_OFFSET(0x9A69840)
#define SYSTEM_NET_DIGESTSESSION_HASHTOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x9A69950)
#define SYSTEM_NET_DIGESTSESSION_HA1_OFFSET UNITYSDK_OFFSET(0x9A69A90)
#define SYSTEM_NET_DIGESTSESSION_HA2_OFFSET UNITYSDK_OFFSET(0x9A69BC0)
#define SYSTEM_NET_DIGESTSESSION_RESPONSE_OFFSET UNITYSDK_OFFSET(0x9A69C90)
#define SYSTEM_NET_DIGESTSESSION_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A69DD0)
#define SYSTEM_NET_DIGESTSESSION_GET_LASTUSE_OFFSET UNITYSDK_OFFSET(0x9A6A410)

namespace System::Net
{
	inline static constexpr unsigned int DigestSession_TypeDefinitionIndex = 29765;

	class DigestSession : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::RandomNumberGenerator* rng; // 0x0
		::System::DateTime* lastUse; // 0x10
		::System::Int32 _nc; // 0x18
		::System::Security::Cryptography::HashAlgorithm* hash; // 0x20
		::System::Net::DigestHeaderParser* parser; // 0x28
		::System::String* _cnonce; // 0x30

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Algorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_ALGORITHM_OFFSET))(nullptr);
		}

		::System::String* get_Realm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_REALM_OFFSET))(nullptr);
		}

		::System::String* get_Nonce()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_NONCE_OFFSET))(nullptr);
		}

		::System::String* get_Opaque()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_OPAQUE_OFFSET))(nullptr);
		}

		::System::String* get_QOP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_QOP_OFFSET))(nullptr);
		}

		::System::String* get_CNonce()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_CNONCE_OFFSET))(nullptr);
		}

		::System::Boolean Parse(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_PARSE_OFFSET))(str, nullptr);
		}

		::System::String* HashToHexString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_HASHTOHEXSTRING_OFFSET))(str, nullptr);
		}

		::System::String* HA1(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_HA1_OFFSET))(str, str, nullptr);
		}

		::System::String* HA2(::System::Net::HttpWebRequest* arg)
		{
			return (return (::System::String*(*)(::System::Net::HttpWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_HA2_OFFSET))(arg, nullptr);
		}

		::System::String* Response(::System::String* str, ::System::String* str, ::System::Net::HttpWebRequest* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::Net::HttpWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_RESPONSE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Net::Authorization* Authenticate(::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_AUTHENTICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* get_LastUse()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_LASTUSE_OFFSET))(nullptr);
		}

	};
}

