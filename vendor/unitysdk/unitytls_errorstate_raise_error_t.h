#pragma once
#include "unitysdk.h"

#define UNITYTLS_ERRORSTATE_RAISE_ERROR_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA440)
#define UNITYTLS_ERRORSTATE_RAISE_ERROR_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA510)

	inline static constexpr unsigned int unitytls_errorstate_raise_error_t_TypeDefinitionIndex = 29017;

	class unitytls_errorstate_raise_error_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_ERRORSTATE_RAISE_ERROR_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, unitytls_error_code* arg)
		{
			((::System::Void(*)(::System::Object**, unitytls_error_code*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_ERRORSTATE_RAISE_ERROR_T_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

