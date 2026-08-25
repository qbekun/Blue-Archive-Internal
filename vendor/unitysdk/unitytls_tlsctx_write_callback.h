#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_WRITE_CALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C9E40)
#define UNITYTLS_TLSCTX_WRITE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x96C9F10)

	inline static constexpr unsigned int unitytls_tlsctx_write_callback_TypeDefinitionIndex = 29010;

	class unitytls_tlsctx_write_callback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_WRITE_CALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_WRITE_CALLBACK_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

