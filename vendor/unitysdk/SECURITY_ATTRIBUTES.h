#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int SECURITY_ATTRIBUTES_TypeDefinitionIndex = 23541;

	class SECURITY_ATTRIBUTES : public Il2CppObject
	{
	public:
		::System::UInt32 nLength; // 0x10
		::System::Int32 lpSecurityDescriptor; // 0x18
		BOOL* bInheritHandle; // 0x20

	};

