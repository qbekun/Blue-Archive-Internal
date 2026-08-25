#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELATTACHEDBATTLEITEMENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FAEF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelAttachedBattleItemEntityData_TypeDefinitionIndex = 13676;

	class LevelAttachedBattleItemEntityData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELATTACHEDBATTLEITEMENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

