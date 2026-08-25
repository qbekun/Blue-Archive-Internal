#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x919C3F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x919C440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x919C5C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x919C360)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x919C450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x919C5D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_MDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x919C790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_F_OFFSET UNITYSDK_OFFSET(0x919E3E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_G_OFFSET UNITYSDK_OFFSET(0x919E3F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_H_OFFSET UNITYSDK_OFFSET(0x919E400)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_I_OFFSET UNITYSDK_OFFSET(0x919E410)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_J_OFFSET UNITYSDK_OFFSET(0x919E420)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RIPEMD160Managed_TypeDefinitionIndex = 24360;

	class RIPEMD160Managed : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buffer; // 0x28
		::System::Int64 _count; // 0x30
		::Il2CppArray<::System::Object*>* _stateMD160; // 0x38
		::Il2CppArray<::System::Object*>* _blockDWords; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHFINAL_OFFSET))(nullptr);
		}

		::System::Void InitializeState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZESTATE_OFFSET))(nullptr);
		}

		::System::Void _HashData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__HASHDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* _EndHash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__ENDHASH_OFFSET))(nullptr);
		}

		::System::Void MDTransform(::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_MDTRANSFORM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 F(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_F_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 G(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_G_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 H(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_H_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 I(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_I_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 J(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_J_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

