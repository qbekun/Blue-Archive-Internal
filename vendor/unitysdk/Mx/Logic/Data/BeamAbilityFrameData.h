#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BeamPhase; }

#define MX_LOGIC_DATA_BEAMABILITYFRAMEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FAA80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BeamAbilityFrameData_TypeDefinitionIndex = 13670;

	class BeamAbilityFrameData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BeamPhase* Phase; // 0x10
		::System::Int32 Frame; // 0x14
		Il2CppObject* Abilities; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BEAMABILITYFRAMEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

