#pragma once
#include "unitysdk.h"

#define MOUSEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB0A0)

	inline static constexpr unsigned int MouseData_TypeDefinitionIndex = 25627;

	class MouseData : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 cursorX; // 0x18
		::System::Int32 cursorY; // 0x1C
		::System::Int32 delta; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSEDATA_.CTOR_OFFSET))(nullptr);
		}

	};

