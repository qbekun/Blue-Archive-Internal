#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class ExtraStatType; }
namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class HealedLimitEffectDAO; }

#define MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x123B290)
#define MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x123B2A0)
#define MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_EXTRASTATTYPE_OFFSET UNITYSDK_OFFSET(0x123B2B0)
#define MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123B2C0)
#define MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123B2D0)
#define MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_LIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0x123B2E0)
#define MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123B2F0)
#define MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_LIMITHPRATE_OFFSET UNITYSDK_OFFSET(0x123B450)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealedLimitEffectValue_TypeDefinitionIndex = 13895;

	class HealedLimitEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _LimitAmount_k__BackingField; // 0x48
		::System::Int64 _LimitHPRate_k__BackingField; // 0x50
		::MX::Logic::Skills::ExtraStatType* _ExtraStatType_k__BackingField; // 0x58
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x5C
		::System::String* _EndConditionArgumentFirst_k__BackingField; // 0x60
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0x68
		::System::Boolean _Dispellable_k__BackingField; // 0x70

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatType()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_EXTRASTATTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_LIMITAMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::HealedLimitEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HealedLimitEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LimitHPRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEDLIMITEFFECTVALUE_GET_LIMITHPRATE_OFFSET))(nullptr);
		}

	};
}

