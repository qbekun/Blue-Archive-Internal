#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193DF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193F80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x91941F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x9194210)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x9194240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHCORE_OFFSET UNITYSDK_OFFSET(0x91942E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x9194570)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9194830)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int MACTripleDES_TypeDefinitionIndex = 24346;

	class MACTripleDES : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::ICryptoTransform* m_encryptor; // 0x30
		::System::Security::Cryptography::CryptoStream* _cs; // 0x38
		::System::Security::Cryptography::TailStream* _ts; // 0x40
		::System::Int32 m_bitsPerByte; // 0x0
		::System::Int32 m_bytesPerBlock; // 0x48
		::System::Security::Cryptography::TripleDES* des; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::PaddingMode* get_Padding()
		{
			return (return (::System::Security::Cryptography::PaddingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::PaddingMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_SET_PADDING_OFFSET))(arg, nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHFINAL_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

