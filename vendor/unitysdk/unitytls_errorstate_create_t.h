#pragma once
#include "unitysdk.h"

#define UNITYTLS_ERRORSTATE_CREATE_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA360)
#define UNITYTLS_ERRORSTATE_CREATE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA420)

	inline static constexpr unsigned int unitytls_errorstate_create_t_TypeDefinitionIndex = 29016;

	class unitytls_errorstate_create_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_ERRORSTATE_CREATE_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		unitytls_errorstate* Invoke()
		{
			return (return (unitytls_errorstate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_ERRORSTATE_CREATE_T_INVOKE_OFFSET))(nullptr);
		}

	};

