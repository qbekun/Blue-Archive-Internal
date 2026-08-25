#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9197610)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_EFFECTIVEKEYSIZE_OFFSET UNITYSDK_OFFSET(0x91976B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_EFFECTIVEKEYSIZE_OFFSET UNITYSDK_OFFSET(0x91976C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x9197770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x9197780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CREATE_OFFSET UNITYSDK_OFFSET(0x9197800)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CREATE_OFFSET UNITYSDK_OFFSET(0x9197AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9197B40)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2_TypeDefinitionIndex = 24353;

	class RC2 : public Il2CppObject
	{
	public:
		::System::Int32 EffectiveKeySizeValue; // 0x48
		::Il2CppArray<::System::Object*>* s_legalBlockSizes; // 0x0
		::Il2CppArray<::System::Object*>* s_legalKeySizes; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_EffectiveKeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_EFFECTIVEKEYSIZE_OFFSET))(nullptr);
		}

		::System::Void set_EffectiveKeySize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_EFFECTIVEKEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_KeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_KEYSIZE_OFFSET))(nullptr);
		}

		::System::Void set_KeySize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_KEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RC2* Create()
		{
			return (return (::System::Security::Cryptography::RC2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RC2* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::RC2*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_.CCTOR_OFFSET))(nullptr);
		}

	};
}

