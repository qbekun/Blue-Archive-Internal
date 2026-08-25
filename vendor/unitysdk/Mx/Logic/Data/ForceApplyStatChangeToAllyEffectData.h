#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4130)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ForceApplyStatChangeToAllyEffectData_TypeDefinitionIndex = 13594;

	class ForceApplyStatChangeToAllyEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Range; // 0x58
		::FlatData::LogicEffectCategory* CategoryCondition; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x64
		::System::String* EndConditionArgumentFirst; // 0x68
		::System::String* EndConditionArgumentSecond; // 0x70
		::System::Boolean Dispellable; // 0x78
		::System::Boolean UpdateStatChangeAlways; // 0x79
		::System::Boolean ApplyStatChangeLayer; // 0x7A
		::System::Boolean ShowForceAppliedEffectSkillVisual; // 0x7B
		::System::Boolean ShowForceAppliedEffectCommonVisual; // 0x7C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

