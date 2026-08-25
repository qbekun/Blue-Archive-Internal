#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int unitytls_tlsctx_callbacks_TypeDefinitionIndex = 29015;

	class unitytls_tlsctx_callbacks : public Il2CppObject
	{
	public:
		unitytls_tlsctx_read_callback* read; // 0x10
		unitytls_tlsctx_write_callback* write; // 0x18
		::System::Object** data; // 0x20

	};

