#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A7640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x91A7920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x91A7970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x91A7B40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x91A7840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x91A7980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x91A7B50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHATRANSFORM_OFFSET UNITYSDK_OFFSET(0x91A7D10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x91A8AC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_CH_OFFSET UNITYSDK_OFFSET(0x91A8A40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_MAJ_OFFSET UNITYSDK_OFFSET(0x91A8AB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_OFFSET UNITYSDK_OFFSET(0x91A8AD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_OFFSET UNITYSDK_OFFSET(0x91A8B30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_OFFSET UNITYSDK_OFFSET(0x91A8A50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_OFFSET UNITYSDK_OFFSET(0x91A89E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHA256EXPAND_OFFSET UNITYSDK_OFFSET(0x91A8880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91A8B90)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA256Managed_TypeDefinitionIndex = 24371;

	class SHA256Managed : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buffer; // 0x28
		::System::Int64 _count; // 0x30
		::Il2CppArray<::System::Object*>* _stateSHA256; // 0x38
		::Il2CppArray<::System::Object*>* _W; // 0x40
		::Il2CppArray<::System::Object*>* _K; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHFINAL_OFFSET))(nullptr);
		}

		::System::Void InitializeState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZESTATE_OFFSET))(nullptr);
		}

		::System::Void _HashData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__HASHDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* _EndHash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__ENDHASH_OFFSET))(nullptr);
		}

		::System::Void SHATransform(::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHATRANSFORM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 RotateRight(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_ROTATERIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Ch(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_CH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 Maj(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_MAJ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 sigma_0(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_OFFSET))(arg, nullptr);
		}

		::System::UInt32 sigma_1(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_OFFSET))(arg, nullptr);
		}

		::System::UInt32 Sigma_0(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_OFFSET))(arg, nullptr);
		}

		::System::UInt32 Sigma_1(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_OFFSET))(arg, nullptr);
		}

		::System::Void SHA256Expand(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHA256EXPAND_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_.CCTOR_OFFSET))(nullptr);
		}

	};
}

