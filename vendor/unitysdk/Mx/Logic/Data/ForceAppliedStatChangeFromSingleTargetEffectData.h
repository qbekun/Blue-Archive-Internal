#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class ForceApplyCheckTargetSide; }

#define MX_LOGIC_DATA_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4120)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ForceAppliedStatChangeFromSingleTargetEffectData_TypeDefinitionIndex = 13593;

	class ForceAppliedStatChangeFromSingleTargetEffectData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CategoryCondition; // 0x58
		::Il2CppArray<::System::Object*>* ApplySkillType; // 0x60
		::System::String* CheckLogicEffectGroupId; // 0x68
		::System::Boolean ShowTargetPortrait; // 0x70
		::FlatData::EndCondition* EndCondition; // 0x74
		::System::String* EndConditionArgumentFirst; // 0x78
		::System::String* EndConditionArgumentSecond; // 0x80
		::System::Boolean Dispellable; // 0x88
		::System::Boolean UpdateStatChangeAlways; // 0x89
		::System::Boolean ApplyStatChangeLayer; // 0x8A
		::System::Boolean ShowForceAppliedEffectSkillVisual; // 0x8B
		::System::Boolean ShowForceAppliedEffectCommonVisual; // 0x8C
		::System::Boolean AppliedFromSummoner; // 0x8D
		::MX::Logic::Data::ForceApplyCheckTargetSide* CheckTargetSide; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

