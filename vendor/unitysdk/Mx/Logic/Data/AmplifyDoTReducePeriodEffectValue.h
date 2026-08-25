#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class AmplifyDoTRemoveCondition; }
namespace MX::GameData::DAO::Battle { class AmplifyDoTReducePeriodEffectDAO; }

#define MX_LOGIC_DATA_AMPLIFYDOTREDUCEPERIODEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1233B70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AmplifyDoTReducePeriodEffectValue_TypeDefinitionIndex = 13850;

	class AmplifyDoTReducePeriodEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 DurationFrame; // 0x48
		::System::Boolean Dispellable; // 0x50
		::MX::Core::Math::BasisPoint* PeriodReduceRate; // 0x58
		::FlatData::AmplifyDoTRemoveCondition* RemoveCondition; // 0x60
		::System::String* RemoveConditionArgument; // 0x68
		::Il2CppArray<::System::Object*>* TargetLogicEffectTemplateId; // 0x70

		::System::Void .ctor(::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTREDUCEPERIODEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

