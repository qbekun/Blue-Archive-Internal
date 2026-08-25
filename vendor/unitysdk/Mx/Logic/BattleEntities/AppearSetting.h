#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLEENTITIES_APPEARSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x1136920)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int AppearSetting_TypeDefinitionIndex = 13083;

	class AppearSetting : public Il2CppObject
	{
	public:
		::System::Boolean IsApearActionOn; // 0x10
		Il2CppObject* MovePoints; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_APPEARSETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

