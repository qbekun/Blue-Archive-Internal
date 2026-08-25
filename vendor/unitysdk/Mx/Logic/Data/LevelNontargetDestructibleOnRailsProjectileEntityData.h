#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELNONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBE10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelNontargetDestructibleOnRailsProjectileEntityData_TypeDefinitionIndex = 13701;

	class LevelNontargetDestructibleOnRailsProjectileEntityData : public Il2CppObject
	{
	public:
		::System::Boolean UseMovePoints; // 0x210
		Il2CppObject* MovePointCommandIdList; // 0x218
		::System::Boolean RepeatMove; // 0x220
		::System::Boolean AllowDuplicateHit; // 0x221

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELNONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

