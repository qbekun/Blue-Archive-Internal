#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E8A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_GET_KEY_OFFSET UNITYSDK_OFFSET(0x918E940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_SET_KEY_OFFSET UNITYSDK_OFFSET(0x918EE80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET UNITYSDK_OFFSET(0x918F0B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET UNITYSDK_OFFSET(0x918F2A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x918EA60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISSEMIWEAKKEY_OFFSET UNITYSDK_OFFSET(0x918EBF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x918F340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_QUADWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x918F350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x918F3F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DES_TypeDefinitionIndex = 24331;

	class DES : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_legalBlockSizes; // 0x0
		::Il2CppArray<::System::Object*>* s_legalKeySizes; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Key()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::DES* Create()
		{
			return (return (::System::Security::Cryptography::DES*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::DES* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::DES*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsWeakKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISWEAKKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSemiWeakKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISSEMIWEAKKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISLEGALKEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::UInt64 QuadWordFromBigEndian(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt64(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_QUADWORDFROMBIGENDIAN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

