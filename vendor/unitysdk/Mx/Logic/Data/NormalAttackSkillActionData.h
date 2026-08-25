#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillToTargetDistributeType; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class NormalAttackPhaseData; }

#define MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_SHOULDSERIALIZESHOTFRAMES_OFFSET UNITYSDK_OFFSET(0x11F6E30)
#define MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_SHOULDSERIALIZEANIMATIONFRAMES_OFFSET UNITYSDK_OFFSET(0x11F6E80)
#define MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_SHOULDSERIALIZEFIXEDNORMALATTACKFRAMEVALUES_OFFSET UNITYSDK_OFFSET(0x11F6ED0)
#define MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F6F20)
#define MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x11F6F30)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NormalAttackSkillActionData_TypeDefinitionIndex = 13658;

	class NormalAttackSkillActionData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillToTargetDistributeType* DistributeType; // 0x178
		::System::Boolean UseFixedNormalAttackFrameRate; // 0x17C
		Il2CppObject* FixedNormalAttackFrameRateValues; // 0x180
		Il2CppObject* AnimationFrames; // 0x188
		::MX::Logic::Skills::SpawnDirectionTypes* ExclusiveIngInvokerDirectionOverride; // 0x190
		::UnityEngine::Vector2* ExclusiveIngInvokerDirectionOverrideWorldPosition; // 0x194
		Il2CppObject* ShotFrames; // 0x1A0
		::MX::Logic::Data::NormalAttackPhaseData* PhaseData; // 0x1A8

		::System::Boolean ShouldSerializeShotFrames()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_SHOULDSERIALIZESHOTFRAMES_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAnimationFrames()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_SHOULDSERIALIZEANIMATIONFRAMES_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeFixedNormalAttackFrameValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_SHOULDSERIALIZEFIXEDNORMALATTACKFRAMEVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKSKILLACTIONDATA_GET_DURATION_OFFSET))(nullptr);
		}

	};
}

