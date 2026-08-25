#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class AddGroggyByDamagedRatioEffectDAO; }

#define MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1233620)
#define MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1233630)
#define MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1233720)
#define MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_GET_GROGGYRATIOBYDAMAGED_OFFSET UNITYSDK_OFFSET(0x1233730)
#define MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1233740)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddGroggyByDamagedRatioEffectValue_TypeDefinitionIndex = 13844;

	class AddGroggyByDamagedRatioEffectValue : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x48
		::System::String* _EndConditionArgument_k__BackingField; // 0x50
		::System::Int64 _GroggyRatioByDamaged_k__BackingField; // 0x58
		::System::Boolean _Dispellable_k__BackingField; // 0x60

		::System::String* get_EndConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_GroggyRatioByDamaged()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_GET_GROGGYRATIOBYDAMAGED_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDGROGGYBYDAMAGEDRATIOEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

	};
}

