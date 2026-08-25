#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::Logic::Data { class LevelOneTimeAbilityData; }

#define MX_LOGIC_DATA_LEVELBREATHAREAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FB180)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelBreathAreaEntityData_TypeDefinitionIndex = 13683;

	class LevelBreathAreaEntityData : public Il2CppObject
	{
	public:
		Il2CppObject* BarrierTransferAbilities; // 0x198
		::System::Int64 ExcludeRadius; // 0x1A0
		::System::Boolean RemoveWhenHit; // 0x1A8
		::MX::Logic::Skills::TargetEntityType* EntityType; // 0x1AC
		::System::Int32 NumberOfTargetsRequired; // 0x1B0
		::MX::Logic::Data::LevelOneTimeAbilityData* ApplyAbilitiesToTargets; // 0x1B8
		::System::String* ParticleEffectName; // 0x1C0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELBREATHAREAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

