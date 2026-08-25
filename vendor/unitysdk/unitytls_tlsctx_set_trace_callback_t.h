#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CB5B0)
#define UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CB680)

	inline static constexpr unsigned int unitytls_tlsctx_set_trace_callback_t_TypeDefinitionIndex = 29035;

	class unitytls_tlsctx_set_trace_callback_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, unitytls_tlsctx_trace_callback* arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, unitytls_tlsctx_trace_callback*, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

