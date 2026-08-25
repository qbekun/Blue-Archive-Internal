#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9197850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GET_EFFECTIVEKEYSIZE_OFFSET UNITYSDK_OFFSET(0x9197CF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_SET_EFFECTIVEKEYSIZE_OFFSET UNITYSDK_OFFSET(0x9197D00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GET_USESALT_OFFSET UNITYSDK_OFFSET(0x9197D70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_SET_USESALT_OFFSET UNITYSDK_OFFSET(0x9197D80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x9197D90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x9197E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x9197F30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x9197FE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9198080)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2CryptoServiceProvider_TypeDefinitionIndex = 24354;

	class RC2CryptoServiceProvider : public Il2CppObject
	{
	public:
		::System::Boolean m_use40bitSalt; // 0x50
		::Il2CppArray<::System::Object*>* s_legalKeySizes; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_EffectiveKeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GET_EFFECTIVEKEYSIZE_OFFSET))(nullptr);
		}

		::System::Void set_EffectiveKeySize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_SET_EFFECTIVEKEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseSalt()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GET_USESALT_OFFSET))(nullptr);
		}

		::System::Void set_UseSalt(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_SET_USESALT_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET))(nullptr);
		}

		::System::Void GenerateIV()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

