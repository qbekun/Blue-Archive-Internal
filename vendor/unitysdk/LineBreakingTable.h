#pragma once
#include "unitysdk.h"

#define LINEBREAKINGTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA175830)

	inline static constexpr unsigned int LineBreakingTable_TypeDefinitionIndex = 33716;

	class LineBreakingTable : public Il2CppObject
	{
	public:
		Il2CppObject* leadingCharacters; // 0x10
		Il2CppObject* followingCharacters; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINEBREAKINGTABLE_.CTOR_OFFSET))(nullptr);
		}

	};

