#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class HealByHitTriggerType; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class HealByHitRemoveCondition; }
namespace MX::GameData::DAO::Battle { class HealByHitEffectDAO; }

#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_ADDTRIGGERVALUERATE_OFFSET UNITYSDK_OFFSET(0x123ACA0)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123ACB0)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x123ACC0)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x123ACD0)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_TRIGGERARGUMENT_OFFSET UNITYSDK_OFFSET(0x123ACE0)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x123ACF0)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123AD00)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x123AD10)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x123AD20)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x123AD30)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x123AD40)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123AD50)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x123B0B0)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x123B0C0)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_APPLYHEALRATE_OFFSET UNITYSDK_OFFSET(0x123B0D0)
#define MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123B0E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealByHitEffectValue_TypeDefinitionIndex = 13893;

	class HealByHitEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x58
		::System::Int32 _DurationFrame_k__BackingField; // 0x60
		::MX::Logic::Data::HealByHitTriggerType* _TriggerType_k__BackingField; // 0x64
		::MX::Logic::Skills::ExtraStatType* _ExtraStatSource_k__BackingField; // 0x68
		::MX::Core::Math::BasisPoint* _ExtraStatRate_k__BackingField; // 0x70
		::System::Boolean _IsDispellable_k__BackingField; // 0x78
		::MX::Logic::Data::HealByHitRemoveCondition* _RemoveCondition_k__BackingField; // 0x7C
		::System::Int32 _RemoveConditionArgument_k__BackingField; // 0x80
		Il2CppObject* _TriggerArgument_k__BackingField; // 0x88
		::System::Int64 _AddTriggerValueRate_k__BackingField; // 0x90
		::System::Boolean _ApplyHealRate_k__BackingField; // 0x98
		::System::Boolean _ApplyHealRateByArmorType_k__BackingField; // 0x99
		::System::Boolean _ApplyHealRateByBulletType_k__BackingField; // 0x9A

		::System::Int64 get_AddTriggerValueRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_ADDTRIGGERVALUERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HealByHitRemoveCondition* get_RemoveCondition()
		{
			return ((::MX::Logic::Data::HealByHitRemoveCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		Il2CppObject* get_TriggerArgument()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_TRIGGERARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_RemoveConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HealByHitTriggerType* get_TriggerType()
		{
			return ((::MX::Logic::Data::HealByHitTriggerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_TRIGGERTYPE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::HealByHitEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HealByHitEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_APPLYHEALRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

	};
}

