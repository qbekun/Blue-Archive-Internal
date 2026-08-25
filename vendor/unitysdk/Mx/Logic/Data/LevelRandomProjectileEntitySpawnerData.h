#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELRANDOMPROJECTILEENTITYSPAWNERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBFD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelRandomProjectileEntitySpawnerData_TypeDefinitionIndex = 13710;

	class LevelRandomProjectileEntitySpawnerData : public Il2CppObject
	{
	public:
		Il2CppObject* EntityList; // 0x150

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELRANDOMPROJECTILEENTITYSPAWNERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

