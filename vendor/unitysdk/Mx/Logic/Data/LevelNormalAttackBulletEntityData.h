#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELNORMALATTACKBULLETENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBF20)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelNormalAttackBulletEntityData_TypeDefinitionIndex = 13704;

	class LevelNormalAttackBulletEntityData : public Il2CppObject
	{
	public:
		::System::Int64 Speed; // 0x158

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELNORMALATTACKBULLETENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

