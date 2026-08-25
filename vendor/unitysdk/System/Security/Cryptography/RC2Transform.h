#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91B6590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x91B6B40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91B7740)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2Transform_TypeDefinitionIndex = 24395;

	class RC2Transform : public Il2CppObject
	{
	public:
		::System::UInt16 R0; // 0x58
		::System::UInt16 R1; // 0x5A
		::System::UInt16 R2; // 0x5C
		::System::UInt16 R3; // 0x5E
		::Il2CppArray<::System::Object*>* K; // 0x60
		::System::Int32 j; // 0x68
		::Il2CppArray<::System::Object*>* pitable; // 0x0

		::System::Void .ctor(::System::Security::Cryptography::RC2* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RC2*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ECB(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_ECB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

