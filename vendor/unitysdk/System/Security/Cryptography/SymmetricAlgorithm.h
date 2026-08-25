#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AC7A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91AC7D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x91AC830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91AC8C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x91AC940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x91AC950)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x91ACA60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x91ACA70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_IV_OFFSET UNITYSDK_OFFSET(0x91ACB00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_IV_OFFSET UNITYSDK_OFFSET(0x91ACBA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEY_OFFSET UNITYSDK_OFFSET(0x91ACD10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEY_OFFSET UNITYSDK_OFFSET(0x91ACDB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALBLOCKSIZES_OFFSET UNITYSDK_OFFSET(0x91AD0A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET UNITYSDK_OFFSET(0x91AD120)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x91AD1A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x91AD1B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_MODE_OFFSET UNITYSDK_OFFSET(0x91AD300)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_MODE_OFFSET UNITYSDK_OFFSET(0x91AD310)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x91AD390)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x91AD3A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_VALIDKEYSIZE_OFFSET UNITYSDK_OFFSET(0x91ACFE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x91AD420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x91AD470)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x91AD590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x91AD5F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SymmetricAlgorithm_TypeDefinitionIndex = 24383;

	class SymmetricAlgorithm : public Il2CppObject
	{
	public:
		::System::Int32 BlockSizeValue; // 0x10
		::System::Int32 FeedbackSizeValue; // 0x14
		::Il2CppArray<::System::Object*>* IVValue; // 0x18
		::Il2CppArray<::System::Object*>* KeyValue; // 0x20
		::Il2CppArray<::System::Object*>* LegalBlockSizesValue; // 0x28
		::Il2CppArray<::System::Object*>* LegalKeySizesValue; // 0x30
		::System::Int32 KeySizeValue; // 0x38
		::System::Security::Cryptography::CipherMode* ModeValue; // 0x3C
		::System::Security::Cryptography::PaddingMode* PaddingValue; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void set_BlockSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_BLOCKSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FeedbackSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_FEEDBACKSIZE_OFFSET))(nullptr);
		}

		::System::Void set_FeedbackSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_FEEDBACKSIZE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_IV()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_IV_OFFSET))(nullptr);
		}

		::System::Void set_IV(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_IV_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Key()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LegalBlockSizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALBLOCKSIZES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LegalKeySizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET))(nullptr);
		}

		::System::Int32 get_KeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEYSIZE_OFFSET))(nullptr);
		}

		::System::Void set_KeySize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::CipherMode* get_Mode()
		{
			return (return (::System::Security::Cryptography::CipherMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_MODE_OFFSET))(nullptr);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::CipherMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_MODE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::PaddingMode* get_Padding()
		{
			return (return (::System::Security::Cryptography::PaddingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::PaddingMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_PADDING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidKeySize(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_VALIDKEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::SymmetricAlgorithm* Create()
		{
			return (return (::System::Security::Cryptography::SymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::SymmetricAlgorithm* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::SymmetricAlgorithm*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET))(str, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor()
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEENCRYPTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEENCRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor()
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEDECRYPTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEDECRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GENERATEKEY_OFFSET))(nullptr);
		}

		::System::Void GenerateIV()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GENERATEIV_OFFSET))(nullptr);
		}

	};
}

