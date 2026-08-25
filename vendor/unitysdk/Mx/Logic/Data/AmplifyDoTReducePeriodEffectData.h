#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class AmplifyDoTRemoveCondition; }

#define MX_LOGIC_DATA_AMPLIFYDOTREDUCEPERIODEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3DE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AmplifyDoTReducePeriodEffectData_TypeDefinitionIndex = 13551;

	class AmplifyDoTReducePeriodEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::FlatData::AmplifyDoTRemoveCondition* RemoveCondition; // 0x60
		::System::String* RemoveConditionArgument; // 0x68
		::System::Boolean Dispellable; // 0x70
		::System::Int64 PeriodReduceRate; // 0x78
		::System::String* TargetLogicEffectTemplateId; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTREDUCEPERIODEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

