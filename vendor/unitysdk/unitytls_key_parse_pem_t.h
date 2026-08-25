#pragma once
#include "unitysdk.h"

#define UNITYTLS_KEY_PARSE_PEM_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA700)
#define UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA7D0)

	inline static constexpr unsigned int unitytls_key_parse_pem_t_TypeDefinitionIndex = 29020;

	class unitytls_key_parse_pem_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_KEY_PARSE_PEM_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** Invoke(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

