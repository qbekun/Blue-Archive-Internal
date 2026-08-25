#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillToTargetDistributeType; }

#define MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x11FA390)
#define MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x11FA440)
#define MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x11FA5E0)
#define MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_SHOULDSERIALIZEENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x11FA6F0)
#define MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FA740)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TimelineSkillActionData_TypeDefinitionIndex = 13666;

	class TimelineSkillActionData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillToTargetDistributeType* DistributeType; // 0x178
		::System::Boolean RotateTurretOnly; // 0x17C
		::System::Boolean RotateTurretDirectionTargetTracking; // 0x17D
		::System::Int32 RotatingTurretFrameMin; // 0x180
		::System::Int32 RotatingTurretFrameMax; // 0x184
		::System::Boolean RotateInvokerDirectionEveryFrame; // 0x188
		Il2CppObject* EntityTimeline; // 0x190

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean Validate(::System::String&* arg)
		{
			return ((::System::Boolean(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeEntityTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_SHOULDSERIALIZEENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TIMELINESKILLACTIONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

