#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SameAuraCheckCondition; }
namespace MX::Logic::Skills { class MovingAreaOptions; }

#define MX_LOGIC_DATA_LEVELAURAENTITYDATA_SHOULDSERIALIZEAREAABILITIES_OFFSET UNITYSDK_OFFSET(0x11FA9A0)
#define MX_LOGIC_DATA_LEVELAURAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FA9F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelAuraEntityData_TypeDefinitionIndex = 13669;

	class LevelAuraEntityData : public Il2CppObject
	{
	public:
		::System::Boolean AttachSpawnTarget; // 0x150
		::System::Boolean RotateEntityDirectionEveryFrame; // 0x151
		::System::Boolean ApplyOffsetRotateEntityDirection; // 0x152
		::System::Boolean RemoveEntityIfAttachSpawnTargetDie; // 0x153
		::System::Int32 Duration; // 0x154
		::System::Int32 Interval; // 0x158
		::MX::Logic::Data::SameAuraCheckCondition* RemoveEntityIfSameEntitySpawn; // 0x15C
		::System::Boolean RemoveEntityIfSkillCancel; // 0x160
		::MX::Logic::Skills::MovingAreaOptions* MovingAreaOption; // 0x164
		Il2CppObject* AreaAbilities; // 0x168

		::System::Boolean ShouldSerializeAreaAbilities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELAURAENTITYDATA_SHOULDSERIALIZEAREAABILITIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELAURAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

