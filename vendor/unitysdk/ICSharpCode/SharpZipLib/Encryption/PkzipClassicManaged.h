#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x9056390)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_SET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x90563A0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_LEGALKEYSIZES_OFFSET UNITYSDK_OFFSET(0x9056410)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x90564E0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_LEGALBLOCKSIZES_OFFSET UNITYSDK_OFFSET(0x90564F0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x90565C0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x9056660)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x90567A0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x9056960)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x90569F0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x904F0B0)

namespace ICSharpCode::SharpZipLib::Encryption
{
	inline static constexpr unsigned int PkzipClassicManaged_TypeDefinitionIndex = 37135;

	class PkzipClassicManaged : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* key_; // 0x48

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void set_BlockSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_SET_BLOCKSIZE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LegalKeySizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_LEGALKEYSIZES_OFFSET))(nullptr);
		}

		::System::Void GenerateIV()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GENERATEIV_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LegalBlockSizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_LEGALBLOCKSIZES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Key()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_GENERATEKEY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_CREATEENCRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_CREATEDECRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICMANAGED_.CTOR_OFFSET))(nullptr);
		}

	};
}

