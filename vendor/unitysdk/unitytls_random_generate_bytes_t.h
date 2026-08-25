#pragma once
#include "unitysdk.h"

#define UNITYTLS_RANDOM_GENERATE_BYTES_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CBF10)
#define UNITYTLS_RANDOM_GENERATE_BYTES_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CBFE0)

	inline static constexpr unsigned int unitytls_random_generate_bytes_t_TypeDefinitionIndex = 29045;

	class unitytls_random_generate_bytes_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_RANDOM_GENERATE_BYTES_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_RANDOM_GENERATE_BYTES_T_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

