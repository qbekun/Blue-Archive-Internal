#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BeamPhase; }
namespace MX::Logic::Data { class BeamEntityValue; }

#define MX_LOGIC_DATA_CHAINBEAMVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1244E60)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChainBeamValue_TypeDefinitionIndex = 13956;

	class ChainBeamValue : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BeamPhase* Phase; // 0x10
		::System::Int32 CheckTargetRadiusToSpawn; // 0x14
		::System::Boolean AllowParentTargetDupilication; // 0x18
		::System::Int32 MaxBranchCount; // 0x1C
		::MX::Logic::Data::BeamEntityValue* BeamEntityValue; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHAINBEAMVALUE_.CTOR_OFFSET))(nullptr);
		}

	};
}

