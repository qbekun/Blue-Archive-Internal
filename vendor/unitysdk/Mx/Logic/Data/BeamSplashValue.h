#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BeamPhase; }
namespace MX::Logic::Data { class AreaSpawnerValue; }
namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace MX::Logic::Data { class TargetProjectileEntityValue; }

#define MX_LOGIC_DATA_BEAMSPLASHVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1244BE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BeamSplashValue_TypeDefinitionIndex = 13953;

	class BeamSplashValue : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BeamPhase* Phase; // 0x10
		::MX::Logic::Data::AreaSpawnerValue* AreaSpawner; // 0x18
		::MX::Logic::Data::SkillEntitySpawnerValue* SkillEntitySpawner; // 0x20
		::MX::Logic::Data::TargetProjectileEntityValue* TargetAttachedEntity; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMSPLASHVALUE_.CTOR_OFFSET))(nullptr);
		}

	};
}

