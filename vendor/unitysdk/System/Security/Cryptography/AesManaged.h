#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x96284C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x9628640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x9628670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_IV_OFFSET UNITYSDK_OFFSET(0x96286A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_IV_OFFSET UNITYSDK_OFFSET(0x96286D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9628700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x9628730)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x9628760)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x9628790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_MODE_OFFSET UNITYSDK_OFFSET(0x96287C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_MODE_OFFSET UNITYSDK_OFFSET(0x96287F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x9628880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x96288B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x96288E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x9628910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x9628A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x9628AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9628C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x9628D90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x9628DC0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesManaged_TypeDefinitionIndex = 32916;

	class AesManaged : public BlendCurveMode
	{
	public:
		::System::Security::Cryptography::RijndaelManaged* m_rijndael; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_FeedbackSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_FEEDBACKSIZE_OFFSET))(nullptr);
		}

		::System::Void set_FeedbackSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_FEEDBACKSIZE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_IV()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_IV_OFFSET))(nullptr);
		}

		::System::Void set_IV(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_IV_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Key()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_KeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEYSIZE_OFFSET))(nullptr);
		}

		::System::Void set_KeySize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::CipherMode* get_Mode()
		{
			return (return (::System::Security::Cryptography::CipherMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_MODE_OFFSET))(nullptr);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::CipherMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_MODE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::PaddingMode* get_Padding()
		{
			return (return (::System::Security::Cryptography::PaddingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::PaddingMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_PADDING_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor()
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor()
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateIV()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEIV_OFFSET))(nullptr);
		}

		::System::Void GenerateKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEKEY_OFFSET))(nullptr);
		}

	};
}

