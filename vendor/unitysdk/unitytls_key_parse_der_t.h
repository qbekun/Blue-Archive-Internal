#pragma once
#include "unitysdk.h"

#define UNITYTLS_KEY_PARSE_DER_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA600)
#define UNITYTLS_KEY_PARSE_DER_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA6D0)

	inline static constexpr unsigned int unitytls_key_parse_der_t_TypeDefinitionIndex = 29019;

	class unitytls_key_parse_der_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_KEY_PARSE_DER_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** Invoke(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_KEY_PARSE_DER_T_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

