#pragma once
#include "unitysdk.h"

#define TABLEENTRY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E386F0)

	inline static constexpr unsigned int TableEntry_TypeDefinitionIndex = 37012;

	class TableEntry : public Il2CppObject
	{
	public:
		Il2CppObject* Ref; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEENTRY_.CCTOR_OFFSET))(nullptr);
		}

	};

