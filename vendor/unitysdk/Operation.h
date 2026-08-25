#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int Operation_TypeDefinitionIndex = 29067;

	class Operation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		Operation* None; // 0x0
		Operation* Handshake; // 0x0
		Operation* Authenticated; // 0x0
		Operation* Renegotiate; // 0x0
		Operation* Read; // 0x0
		Operation* Write; // 0x0
		Operation* Close; // 0x0

	};

