#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CBD50)
#define UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CBE20)

	inline static constexpr unsigned int unitytls_tlsctx_notify_close_t_TypeDefinitionIndex = 29043;

	class unitytls_tlsctx_notify_close_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

