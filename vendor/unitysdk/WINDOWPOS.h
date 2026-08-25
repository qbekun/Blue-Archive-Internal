#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int WINDOWPOS_TypeDefinitionIndex = 10169;

	class WINDOWPOS : public Il2CppObject
	{
	public:
		::System::Int32 hwnd; // 0x10
		::System::Int32 hwndInsertAfter; // 0x18
		::System::Int32 x; // 0x20
		::System::Int32 y; // 0x24
		::System::Int32 cx; // 0x28
		::System::Int32 cy; // 0x2C
		::System::UInt32 flags; // 0x30

	};

