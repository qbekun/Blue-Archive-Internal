#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_TRACE_CALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA040)
#define UNITYTLS_TLSCTX_TRACE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA110)

	inline static constexpr unsigned int unitytls_tlsctx_trace_callback_TypeDefinitionIndex = 29012;

	class unitytls_tlsctx_trace_callback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_TRACE_CALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_TRACE_CALLBACK_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

