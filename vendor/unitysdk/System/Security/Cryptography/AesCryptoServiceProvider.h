#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9628DF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x9628E40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x9628E70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x9628EA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x9629770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_IV_OFFSET UNITYSDK_OFFSET(0x9629860)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_IV_OFFSET UNITYSDK_OFFSET(0x9629870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9629880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_KEY_OFFSET UNITYSDK_OFFSET(0x9629890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x96298A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x96298B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x96298C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x96298D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_MODE_OFFSET UNITYSDK_OFFSET(0x96298E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_MODE_OFFSET UNITYSDK_OFFSET(0x96298F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x9629960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x9629970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x9629980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x96299E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9629A40)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesCryptoServiceProvider_TypeDefinitionIndex = 32917;

	class AesCryptoServiceProvider : public BlendCurveMode
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GenerateIV()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET))(nullptr);
		}

		::System::Void GenerateKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_IV()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_IV_OFFSET))(nullptr);
		}

		::System::Void set_IV(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_IV_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Key()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_KeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET))(nullptr);
		}

		::System::Void set_KeySize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_KEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FeedbackSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_FEEDBACKSIZE_OFFSET))(nullptr);
		}

		::System::Void set_FeedbackSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_FEEDBACKSIZE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::CipherMode* get_Mode()
		{
			return (return (::System::Security::Cryptography::CipherMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_MODE_OFFSET))(nullptr);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::CipherMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_MODE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::PaddingMode* get_Padding()
		{
			return (return (::System::Security::Cryptography::PaddingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::PaddingMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_PADDING_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor()
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor()
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

