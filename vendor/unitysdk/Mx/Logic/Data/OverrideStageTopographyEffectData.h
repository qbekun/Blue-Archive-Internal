#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace FlatData { class StageTopography; }

#define MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F43B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int OverrideStageTopographyEffectData_TypeDefinitionIndex = 13621;

	class OverrideStageTopographyEffectData : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::String* EndConditionArgumentFirst; // 0x60
		::System::String* EndConditionArgumentSecond; // 0x68
		::FlatData::StageTopography* StageTopography; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

