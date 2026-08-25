#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A5FF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x91A6170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x91A61C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x91A6340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x91A60E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x91A61D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x91A6350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_SHATRANSFORM_OFFSET UNITYSDK_OFFSET(0x91A6510)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_SHAEXPAND_OFFSET UNITYSDK_OFFSET(0x91A75F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1Managed_TypeDefinitionIndex = 24369;

	class SHA1Managed : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buffer; // 0x28
		::System::Int64 _count; // 0x30
		::Il2CppArray<::System::Object*>* _stateSHA1; // 0x38
		::Il2CppArray<::System::Object*>* _expandedBuffer; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_HASHFINAL_OFFSET))(nullptr);
		}

		::System::Void InitializeState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_INITIALIZESTATE_OFFSET))(nullptr);
		}

		::System::Void _HashData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__HASHDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* _EndHash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__ENDHASH_OFFSET))(nullptr);
		}

		::System::Void SHATransform(::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_SHATRANSFORM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SHAExpand(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_SHAEXPAND_OFFSET))(arg, nullptr);
		}

	};
}

