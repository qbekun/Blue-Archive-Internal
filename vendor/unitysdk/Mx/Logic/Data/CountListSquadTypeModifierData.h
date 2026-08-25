#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COUNTLISTSQUADTYPEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA5A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListSquadTypeModifierData_TypeDefinitionIndex = 13395;

	class CountListSquadTypeModifierData : public Il2CppObject
	{
	public:
		Il2CppObject* SquadTypeList; // 0x28
		Il2CppObject* TacticEntityTypeList; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTSQUADTYPEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

