#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class DispelActionType; }
namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3DF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ApplyLogicDispelCountEffectData_TypeDefinitionIndex = 13552;

	class ApplyLogicDispelCountEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::DispelActionType* DispelActionType; // 0x58
		::System::Int32 DispelCountCondition; // 0x5C
		::System::String* ApplyLogicEffect; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x68
		::System::Int32 EndConditionArgument; // 0x6C
		::System::Boolean Dispellable; // 0x70
		::System::String* IgnoreLogicEffectGroupId; // 0x78
		::System::String* CountTargetCategory; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

