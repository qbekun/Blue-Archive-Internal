#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AccumulateCheckType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace FlatData { class StatType; }
namespace MX::Logic::Data { class AccumulateExecuteCondition; }

#define MX_LOGIC_DATA_ACCUMULATEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3D50)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AccumulateEffectData_TypeDefinitionIndex = 13542;

	class AccumulateEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::AccumulateCheckType* AccumulateType; // 0x58
		::System::Int64 AccumulateRate; // 0x60
		::MX::Logic::Skills::TargetSideId* AccumulateCasterTargetSideFilter; // 0x68
		::FlatData::StatType* LimitSourceStat; // 0x6C
		::System::Int64 LimitSourceStatRate; // 0x70
		::System::Int64 LimitAmount; // 0x78
		::MX::Logic::Data::AccumulateExecuteCondition* ExecuteConditionType; // 0x80
		::System::Int64 ExecuteConditionAmount; // 0x88
		::System::Int64 Duration; // 0x90
		::System::String* ExecuteAccumulateLogicEffectOnly; // 0x98
		::System::String* ExecuteLogicEffectGroupId01; // 0xA0
		::System::String* ExecuteLogicEffectGroupId02; // 0xA8
		::System::String* ExecuteLogicEffectGroupId03; // 0xB0
		::System::String* ExecuteLogicEffectGroupId04; // 0xB8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

