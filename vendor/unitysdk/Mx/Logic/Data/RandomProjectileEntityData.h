#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class LevelProjectileEntityData; }

#define MX_LOGIC_DATA_RANDOMPROJECTILEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC220)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RandomProjectileEntityData_TypeDefinitionIndex = 13725;

	class RandomProjectileEntityData : public Il2CppObject
	{
	public:
		::System::Int32 SpawnProb; // 0x10
		::MX::Logic::Data::LevelProjectileEntityData* ProjectileData; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RANDOMPROJECTILEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

