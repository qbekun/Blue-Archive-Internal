#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class VisualEffectData; }

#define MX_VISUAL_DATA_ACCUMULATEVISUALEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BA70)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int AccumulateVisualEffectData_TypeDefinitionIndex = 20225;

	class AccumulateVisualEffectData : public Il2CppObject
	{
	public:
		::System::Int64 AccumulateRateStart; // 0x10
		::System::Int64 AccumulateRateEnd; // 0x18
		::MX::Visual::Data::VisualEffectData* AccumulateEffect; // 0x20
		::MX::Visual::Data::VisualEffectData* AccumulateLoopEffect; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_ACCUMULATEVISUALEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

