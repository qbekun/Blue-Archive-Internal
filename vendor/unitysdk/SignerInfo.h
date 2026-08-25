#pragma once
#include "unitysdk.h"

namespace Mono::Security { class ASN1; }

#define SIGNERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90F0E80)
#define SIGNERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90F0860)
#define SIGNERINFO_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x90F1250)
#define SIGNERINFO_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x90F1260)
#define SIGNERINFO_GET_AUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x90F12E0)
#define SIGNERINFO_GET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x90F12F0)
#define SIGNERINFO_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x90F1300)
#define SIGNERINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x90F1310)
#define SIGNERINFO_GET_UNAUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x90F1390)
#define SIGNERINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x90F13A0)

	inline static constexpr unsigned int SignerInfo_TypeDefinitionIndex = 35741;

	class SignerInfo : public Il2CppObject
	{
	public:
		::System::Byte version; // 0x10
		::System::String* hashAlgorithm; // 0x18
		::System::Collections::ArrayList* authenticatedAttributes; // 0x20
		::System::Collections::ArrayList* unauthenticatedAttributes; // 0x28
		::Il2CppArray<::System::Object*>* signature; // 0x30
		::System::String* issuer; // 0x38
		::Il2CppArray<::System::Object*>* serial; // 0x40
		::Il2CppArray<::System::Object*>* ski; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Mono::Security::ASN1* arg)
		{
			((::System::Void(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_IssuerName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_GET_ISSUERNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SerialNumber()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_AuthenticatedAttributes()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_GET_AUTHENTICATEDATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* get_HashName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_GET_HASHNAME_OFFSET))(nullptr);
		}

		::System::Void set_HashName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_SET_HASHNAME_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Signature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_GET_SIGNATURE_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_UnauthenticatedAttributes()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_GET_UNAUTHENTICATEDATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Byte get_Version()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFO_GET_VERSION_OFFSET))(nullptr);
		}

	};

