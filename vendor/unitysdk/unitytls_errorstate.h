#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int unitytls_errorstate_TypeDefinitionIndex = 28997;

	class unitytls_errorstate : public Il2CppObject
	{
	public:
		::System::UInt32 magic; // 0x10
		unitytls_error_code* code; // 0x14
		::System::UInt64 reserved; // 0x18

	};

