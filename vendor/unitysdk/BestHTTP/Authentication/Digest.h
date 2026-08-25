#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Authentication { class AuthenticationTypes; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Authentication { class Credentials; }

#define BESTHTTP_AUTHENTICATION_DIGEST_SET_HA1SESS_OFFSET UNITYSDK_OFFSET(0x928050)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_OPAQUE_OFFSET UNITYSDK_OFFSET(0x928060)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_QUALITYOFPROTECTIONS_OFFSET UNITYSDK_OFFSET(0x928070)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_STALE_OFFSET UNITYSDK_OFFSET(0x928080)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x928090)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x9280A0)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_NONCECOUNT_OFFSET UNITYSDK_OFFSET(0x9280B0)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_NONCE_OFFSET UNITYSDK_OFFSET(0x9280C0)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_URI_OFFSET UNITYSDK_OFFSET(0x9280D0)
#define BESTHTTP_AUTHENTICATION_DIGEST_ISURIPROTECTED_OFFSET UNITYSDK_OFFSET(0x9280E0)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_URI_OFFSET UNITYSDK_OFFSET(0x928210)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x928220)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_PROTECTEDURIS_OFFSET UNITYSDK_OFFSET(0x928230)
#define BESTHTTP_AUTHENTICATION_DIGEST_PARSECHALLANGE_OFFSET UNITYSDK_OFFSET(0x928240)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_QUALITYOFPROTECTIONS_OFFSET UNITYSDK_OFFSET(0x9289C0)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_NONCECOUNT_OFFSET UNITYSDK_OFFSET(0x9289D0)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_REALM_OFFSET UNITYSDK_OFFSET(0x9289E0)
#define BESTHTTP_AUTHENTICATION_DIGEST_GENERATERESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0x9289F0)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_STALE_OFFSET UNITYSDK_OFFSET(0x929C10)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_PROTECTEDURIS_OFFSET UNITYSDK_OFFSET(0x929C20)
#define BESTHTTP_AUTHENTICATION_DIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x929C30)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x929C90)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_OPAQUE_OFFSET UNITYSDK_OFFSET(0x929CA0)
#define BESTHTTP_AUTHENTICATION_DIGEST_SET_REALM_OFFSET UNITYSDK_OFFSET(0x929CB0)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_NONCE_OFFSET UNITYSDK_OFFSET(0x929CC0)
#define BESTHTTP_AUTHENTICATION_DIGEST_GET_HA1SESS_OFFSET UNITYSDK_OFFSET(0x929CD0)

namespace BestHTTP::Authentication
{
	inline static constexpr unsigned int Digest_TypeDefinitionIndex = 23478;

	class Digest : public Il2CppObject
	{
	public:
		::System::Uri* _Uri_k__BackingField; // 0x10
		::BestHTTP::Authentication::AuthenticationTypes* _Type_k__BackingField; // 0x18
		::System::String* _Realm_k__BackingField; // 0x20
		::System::Boolean _Stale_k__BackingField; // 0x28
		::System::String* _Nonce_k__BackingField; // 0x30
		::System::String* _Opaque_k__BackingField; // 0x38
		::System::String* _Algorithm_k__BackingField; // 0x40
		Il2CppObject* _ProtectedUris_k__BackingField; // 0x48
		::System::String* _QualityOfProtections_k__BackingField; // 0x50
		::System::Int32 _NonceCount_k__BackingField; // 0x58
		::System::String* _HA1Sess_k__BackingField; // 0x60

		::System::Void set_HA1Sess(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_HA1SESS_OFFSET))(str, nullptr);
		}

		::System::Void set_Opaque(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_OPAQUE_OFFSET))(str, nullptr);
		}

		::System::Void set_QualityOfProtections(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_QUALITYOFPROTECTIONS_OFFSET))(str, nullptr);
		}

		::System::Void set_Stale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_STALE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Type(::BestHTTP::Authentication::AuthenticationTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::Authentication::AuthenticationTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Algorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_ALGORITHM_OFFSET))(nullptr);
		}

		::System::Void set_NonceCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_NONCECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Nonce(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_NONCE_OFFSET))(str, nullptr);
		}

		::System::Void set_Uri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_URI_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUriProtected(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_ISURIPROTECTED_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_Uri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_URI_OFFSET))(nullptr);
		}

		::BestHTTP::Authentication::AuthenticationTypes* get_Type()
		{
			return (return (::BestHTTP::Authentication::AuthenticationTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProtectedUris()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_PROTECTEDURIS_OFFSET))(nullptr);
		}

		::System::Void ParseChallange(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_PARSECHALLANGE_OFFSET))(str, nullptr);
		}

		::System::String* get_QualityOfProtections()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_QUALITYOFPROTECTIONS_OFFSET))(nullptr);
		}

		::System::Int32 get_NonceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_NONCECOUNT_OFFSET))(nullptr);
		}

		::System::String* get_Realm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_REALM_OFFSET))(nullptr);
		}

		::System::String* GenerateResponseHeader(::BestHTTP::HTTPRequest* arg, ::BestHTTP::Authentication::Credentials* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::Authentication::Credentials*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GENERATERESPONSEHEADER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_Stale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_STALE_OFFSET))(nullptr);
		}

		::System::Void set_ProtectedUris(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_PROTECTEDURIS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Algorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_ALGORITHM_OFFSET))(str, nullptr);
		}

		::System::String* get_Opaque()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_OPAQUE_OFFSET))(nullptr);
		}

		::System::Void set_Realm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_SET_REALM_OFFSET))(str, nullptr);
		}

		::System::String* get_Nonce()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_NONCE_OFFSET))(nullptr);
		}

		::System::String* get_HA1Sess()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGEST_GET_HA1SESS_OFFSET))(nullptr);
		}

	};
}

