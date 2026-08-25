#pragma once
#include "unitysdk.h"

#define UNITYTLS_KEY_GET_REF_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA520)
#define UNITYTLS_KEY_GET_REF_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA5F0)

	inline static constexpr unsigned int unitytls_key_get_ref_t_TypeDefinitionIndex = 29018;

	class unitytls_key_get_ref_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_KEY_GET_REF_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		unitytls_key_ref* Invoke(::System::Object** arg, ::System::Object** arg)
		{
			return (return (unitytls_key_ref*(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_KEY_GET_REF_T_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

