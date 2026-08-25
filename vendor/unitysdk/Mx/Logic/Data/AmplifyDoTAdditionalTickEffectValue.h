#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class AmplifyDoTRemoveCondition; }
namespace MX::GameData::DAO::Battle { class AmplifyDoTAdditionalTickEffectDAO; }

#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1233890)
#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_ADDITIONALTICKDAMAGEAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0x12338A0)
#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x12338B0)
#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_ADDITIONALTICKINTERVAL_OFFSET UNITYSDK_OFFSET(0x12338C0)
#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x12338D0)
#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x12338E0)
#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_TARGETLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x12338F0)
#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_ADDITIONALTICKDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1233900)
#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1233910)
#define MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_PERIODREDUCERATE_OFFSET UNITYSDK_OFFSET(0x1233B60)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AmplifyDoTAdditionalTickEffectValue_TypeDefinitionIndex = 13848;

	class AmplifyDoTAdditionalTickEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _DurationFrame_k__BackingField; // 0x48
		::System::Boolean _Dispellable_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _PeriodReduceRate_k__BackingField; // 0x58
		::FlatData::AmplifyDoTRemoveCondition* _RemoveCondition_k__BackingField; // 0x60
		::System::String* _RemoveConditionArgument_k__BackingField; // 0x68
		Il2CppObject* _TargetLogicEffectTemplateId_k__BackingField; // 0x70
		::System::Int32 _AdditionalTickDamageApplyCount_k__BackingField; // 0x78
		::System::Int64 _AdditionalTickDamageRate_k__BackingField; // 0x80
		::System::Int32 _AdditionalTickInterval_k__BackingField; // 0x88

		::System::String* get_RemoveConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_AdditionalTickDamageApplyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_ADDITIONALTICKDAMAGEAPPLYCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_AdditionalTickInterval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_ADDITIONALTICKINTERVAL_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::FlatData::AmplifyDoTRemoveCondition* get_RemoveCondition()
		{
			return ((::FlatData::AmplifyDoTRemoveCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		Il2CppObject* get_TargetLogicEffectTemplateId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_TARGETLOGICEFFECTTEMPLATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_AdditionalTickDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_ADDITIONALTICKDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_PeriodReduceRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AMPLIFYDOTADDITIONALTICKEFFECTVALUE_GET_PERIODREDUCERATE_OFFSET))(nullptr);
		}

	};
}

