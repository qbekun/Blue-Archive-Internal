#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A8C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x91A8F70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x91A8FC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x91A91A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x91A8E40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x91A8FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x91A91B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SHATRANSFORM_OFFSET UNITYSDK_OFFSET(0x91A9370)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x91AA4E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_CH_OFFSET UNITYSDK_OFFSET(0x91AA460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_MAJ_OFFSET UNITYSDK_OFFSET(0x91AA4D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_0_OFFSET UNITYSDK_OFFSET(0x91AA470)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_1_OFFSET UNITYSDK_OFFSET(0x91AA400)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_0_OFFSET UNITYSDK_OFFSET(0x91AA4F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_1_OFFSET UNITYSDK_OFFSET(0x91AA550)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SHA384EXPAND_OFFSET UNITYSDK_OFFSET(0x91AA290)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91AA5B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA384Managed_TypeDefinitionIndex = 24373;

	class SHA384Managed : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buffer; // 0x28
		::System::UInt64 _count; // 0x30
		::Il2CppArray<::System::Object*>* _stateSHA384; // 0x38
		::Il2CppArray<::System::Object*>* _W; // 0x40
		::Il2CppArray<::System::Object*>* _K; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_HASHFINAL_OFFSET))(nullptr);
		}

		::System::Void InitializeState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_INITIALIZESTATE_OFFSET))(nullptr);
		}

		::System::Void _HashData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__HASHDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* _EndHash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__ENDHASH_OFFSET))(nullptr);
		}

		::System::Void SHATransform(::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SHATRANSFORM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 RotateRight(::System::UInt64 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_ROTATERIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Ch(::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_CH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 Maj(::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_MAJ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 Sigma_0(::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_0_OFFSET))(arg, nullptr);
		}

		::System::UInt64 Sigma_1(::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_1_OFFSET))(arg, nullptr);
		}

		::System::UInt64 sigma_0(::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_0_OFFSET))(arg, nullptr);
		}

		::System::UInt64 sigma_1(::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_1_OFFSET))(arg, nullptr);
		}

		::System::Void SHA384Expand(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SHA384EXPAND_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_.CCTOR_OFFSET))(nullptr);
		}

	};
}

