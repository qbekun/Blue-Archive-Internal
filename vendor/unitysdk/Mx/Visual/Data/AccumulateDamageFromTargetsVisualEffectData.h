#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class VisualEffectData; }

#define MX_VISUAL_DATA_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BA80)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int AccumulateDamageFromTargetsVisualEffectData_TypeDefinitionIndex = 20226;

	class AccumulateDamageFromTargetsVisualEffectData : public Il2CppObject
	{
	public:
		::System::Int64 AccumulateRateStart; // 0x10
		::System::Int64 AccumulateRateEnd; // 0x18
		::MX::Visual::Data::VisualEffectData* StartEffect; // 0x20
		::MX::Visual::Data::VisualEffectData* LoopEffect; // 0x28
		::MX::Visual::Data::VisualEffectData* EndEffect; // 0x30
		::MX::Visual::Data::VisualEffectData* RemovedEffect; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_ACCUMULATEDAMAGEFROMTARGETSVISUALEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

