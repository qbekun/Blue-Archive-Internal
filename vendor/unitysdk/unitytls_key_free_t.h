#pragma once
#include "unitysdk.h"

#define UNITYTLS_KEY_FREE_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA800)
#define UNITYTLS_KEY_FREE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA8D0)

	inline static constexpr unsigned int unitytls_key_free_t_TypeDefinitionIndex = 29021;

	class unitytls_key_free_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_KEY_FREE_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_KEY_FREE_T_INVOKE_OFFSET))(arg, nullptr);
		}

	};

