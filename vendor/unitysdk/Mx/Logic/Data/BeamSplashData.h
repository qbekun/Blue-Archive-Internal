#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BeamPhase; }
namespace MX::Logic::Data { class AreaSpawnerData; }
namespace MX::Logic::Data { class SkillEntitySpawnerData; }
namespace MX::Logic::Data { class LevelTargetAttachedEntityData; }

#define MX_LOGIC_DATA_BEAMSPLASHDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FAA90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BeamSplashData_TypeDefinitionIndex = 13671;

	class BeamSplashData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BeamPhase* Phase; // 0x10
		::MX::Logic::Data::AreaSpawnerData* AreaSpawner; // 0x18
		::MX::Logic::Data::SkillEntitySpawnerData* SkillEntitySpawner; // 0x20
		::MX::Logic::Data::LevelTargetAttachedEntityData* TargetAttachedEntity; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMSPLASHDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

