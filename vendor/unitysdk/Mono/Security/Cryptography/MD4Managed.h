#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x910DA50)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x910DB60)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x910DC40)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x910E480)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_PADDING_OFFSET UNITYSDK_OFFSET(0x910E670)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_F_OFFSET UNITYSDK_OFFSET(0x910E6D0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_G_OFFSET UNITYSDK_OFFSET(0x910E6E0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_H_OFFSET UNITYSDK_OFFSET(0x910E6F0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ROL_OFFSET UNITYSDK_OFFSET(0x910E700)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_FF_OFFSET UNITYSDK_OFFSET(0x910E710)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_GG_OFFSET UNITYSDK_OFFSET(0x910E740)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HH_OFFSET UNITYSDK_OFFSET(0x910E770)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ENCODE_OFFSET UNITYSDK_OFFSET(0x910E5B0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_DECODE_OFFSET UNITYSDK_OFFSET(0x910E7A0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_MD4TRANSFORM_OFFSET UNITYSDK_OFFSET(0x910DDA0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4Managed_TypeDefinitionIndex = 35808;

	class MD4Managed : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* state; // 0x28
		::Il2CppArray<::System::Object*>* buffer; // 0x30
		::Il2CppArray<::System::Object*>* count; // 0x38
		::Il2CppArray<::System::Object*>* x; // 0x40
		::Il2CppArray<::System::Object*>* digest; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHFINAL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Padding(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_PADDING_OFFSET))(arg, nullptr);
		}

		::System::UInt32 F(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_F_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 G(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_G_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 H(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_H_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 ROL(::System::UInt32 arg, ::System::Byte arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ROL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FF(uint32_t&* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(uint32_t&*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_FF_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GG(uint32_t&* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(uint32_t&*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_GG_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void HH(uint32_t&* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(uint32_t&*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HH_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Encode(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ENCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Decode(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_DECODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MD4Transform(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_MD4TRANSFORM_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

