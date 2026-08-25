#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class HealByHitTriggerType; }
namespace MX::Logic::Data { class HealByHitRemoveCondition; }
namespace MX::GameData::DAO::Battle { class ShieldHealByHitEffectDAO; }

#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123E4E0)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x123E4F0)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_TRIGGERARGUMENT_OFFSET UNITYSDK_OFFSET(0x123E500)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x123E510)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123E520)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x123E530)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123E540)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123E890)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x123E8A0)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_ADDTRIGGERVALUERATE_OFFSET UNITYSDK_OFFSET(0x123E8B0)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x123E8C0)
#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x123E8D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ShieldHealByHitEffectValue_TypeDefinitionIndex = 13920;

	class ShieldHealByHitEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x58
		::System::Int32 _DurationFrame_k__BackingField; // 0x60
		::MX::Logic::Data::HealByHitTriggerType* _TriggerType_k__BackingField; // 0x64
		::System::Boolean _IsDispellable_k__BackingField; // 0x68
		::MX::Logic::Data::HealByHitRemoveCondition* _RemoveCondition_k__BackingField; // 0x6C
		::System::Int32 _RemoveConditionArgument_k__BackingField; // 0x70
		Il2CppObject* _TriggerArgument_k__BackingField; // 0x78
		::System::Int64 _AddTriggerValueRate_k__BackingField; // 0x80
		::System::String* _ShieldId_k__BackingField; // 0x88

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_TriggerArgument()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_TRIGGERARGUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_RemoveConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HealByHitRemoveCondition* get_RemoveCondition()
		{
			return ((::MX::Logic::Data::HealByHitRemoveCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HealByHitTriggerType* get_TriggerType()
		{
			return ((::MX::Logic::Data::HealByHitTriggerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_TRIGGERTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_AddTriggerValueRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_ADDTRIGGERVALUERATE_OFFSET))(nullptr);
		}

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_SHIELDID_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

	};
}

