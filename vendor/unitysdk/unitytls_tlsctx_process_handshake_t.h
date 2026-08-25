#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CBA70)
#define UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CBB40)

	inline static constexpr unsigned int unitytls_tlsctx_process_handshake_t_TypeDefinitionIndex = 29040;

	class unitytls_tlsctx_process_handshake_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		unitytls_x509verify_result* Invoke(::System::Object** arg, ::System::Object** arg)
		{
			return (return (unitytls_x509verify_result*(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

