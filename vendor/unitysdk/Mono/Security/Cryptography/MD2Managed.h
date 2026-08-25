#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_PADDING_OFFSET UNITYSDK_OFFSET(0x910D310)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x910D230)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x910D430)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x910D4A0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x910D820)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_MD2TRANSFORM_OFFSET UNITYSDK_OFFSET(0x910D590)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x910D950)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2Managed_TypeDefinitionIndex = 35806;

	class MD2Managed : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* state; // 0x28
		::Il2CppArray<::System::Object*>* checksum; // 0x30
		::Il2CppArray<::System::Object*>* buffer; // 0x38
		::System::Int32 count; // 0x40
		::Il2CppArray<::System::Object*>* x; // 0x48
		::Il2CppArray<::System::Object*>* PI_SUBST; // 0x0

		::Il2CppArray<::System::Object*>* Padding(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_PADDING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHFINAL_OFFSET))(nullptr);
		}

		::System::Void MD2Transform(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_MD2TRANSFORM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_.CCTOR_OFFSET))(nullptr);
		}

	};
}

