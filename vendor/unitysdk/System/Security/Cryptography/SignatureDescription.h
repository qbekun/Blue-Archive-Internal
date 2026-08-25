#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91ABEC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91ABED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_GET_KEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x91AC020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_KEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x91AC030)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_GET_DIGESTALGORITHM_OFFSET UNITYSDK_OFFSET(0x91AC040)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DIGESTALGORITHM_OFFSET UNITYSDK_OFFSET(0x91AC050)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_GET_FORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x91AC060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_FORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x91AC070)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_GET_DEFORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x91AC080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DEFORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x91AC090)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_CREATEDEFORMATTER_OFFSET UNITYSDK_OFFSET(0x91AC0A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_CREATEFORMATTER_OFFSET UNITYSDK_OFFSET(0x91AC1F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_CREATEDIGEST_OFFSET UNITYSDK_OFFSET(0x91AC340)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SignatureDescription_TypeDefinitionIndex = 24376;

	class SignatureDescription : public Il2CppObject
	{
	public:
		::System::String* _strKey; // 0x10
		::System::String* _strDigest; // 0x18
		::System::String* _strFormatter; // 0x20
		::System::String* _strDeformatter; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::SecurityElement* arg)
		{
			((::System::Void(*)(::System::Security::SecurityElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_KeyAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_GET_KEYALGORITHM_OFFSET))(nullptr);
		}

		::System::Void set_KeyAlgorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_KEYALGORITHM_OFFSET))(str, nullptr);
		}

		::System::String* get_DigestAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_GET_DIGESTALGORITHM_OFFSET))(nullptr);
		}

		::System::Void set_DigestAlgorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DIGESTALGORITHM_OFFSET))(str, nullptr);
		}

		::System::String* get_FormatterAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_GET_FORMATTERALGORITHM_OFFSET))(nullptr);
		}

		::System::Void set_FormatterAlgorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_FORMATTERALGORITHM_OFFSET))(str, nullptr);
		}

		::System::String* get_DeformatterAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_GET_DEFORMATTERALGORITHM_OFFSET))(nullptr);
		}

		::System::Void set_DeformatterAlgorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DEFORMATTERALGORITHM_OFFSET))(str, nullptr);
		}

		::System::Security::Cryptography::AsymmetricSignatureDeformatter* CreateDeformatter(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::System::Security::Cryptography::AsymmetricSignatureDeformatter*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_CREATEDEFORMATTER_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::AsymmetricSignatureFormatter* CreateFormatter(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::System::Security::Cryptography::AsymmetricSignatureFormatter*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_CREATEFORMATTER_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* CreateDigest()
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_CREATEDIGEST_OFFSET))(nullptr);
		}

	};
}

