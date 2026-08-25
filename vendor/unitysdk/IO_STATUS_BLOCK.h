#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int IO_STATUS_BLOCK_TypeDefinitionIndex = 23554;

	class IO_STATUS_BLOCK : public Il2CppObject
	{
	public:
		IO_STATUS* Status; // 0x10
		::System::Int32 Information; // 0x18

	};

