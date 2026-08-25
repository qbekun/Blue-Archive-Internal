#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MX::GameData::DAO::Battle { class ShieldEffectDAO; }

#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET UNITYSDK_OFFSET(0x123E040)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_SHIELDPRIORITY_OFFSET UNITYSDK_OFFSET(0x123E050)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_LOGICEFFECTGROUPIDINSTEADSHIELD_OFFSET UNITYSDK_OFFSET(0x123E060)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x123E070)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_CASTERCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x123E080)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x123E090)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_SHIELDLEFTOVERCONVERSIONCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x123E0A0)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_TARGETCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x123E0B0)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x123E0C0)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x123E0D0)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123E0E0)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_TARGETSTATTYPE_OFFSET UNITYSDK_OFFSET(0x123E0F0)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_CASTERSTATTYPE_OFFSET UNITYSDK_OFFSET(0x123E100)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123E110)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_APPLYHEALRATE_OFFSET UNITYSDK_OFFSET(0x123E4B0)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x123E4C0)
#define MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_LEFTOVERCONVERTRATE_OFFSET UNITYSDK_OFFSET(0x123E4D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ShieldEffectValue_TypeDefinitionIndex = 13919;

	class ShieldEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _BaseAmount_k__BackingField; // 0x48
		::FlatData::StatType* _TargetStatType_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _TargetCoefficientAmount_k__BackingField; // 0x58
		::FlatData::StatType* _CasterStatType_k__BackingField; // 0x60
		::MX::Core::Math::BasisPoint* _CasterCoefficientAmount_k__BackingField; // 0x68
		::System::Int32 _DurationFrame_k__BackingField; // 0x70
		::System::Boolean _IsDispellable_k__BackingField; // 0x74
		::Il2CppArray<::System::Object*>* _ChangeRateByCostList_k__BackingField; // 0x78
		::System::Int32 _ShieldPriority_k__BackingField; // 0x80
		::System::String* _ShieldId_k__BackingField; // 0x88
		Il2CppObject* _ShieldLeftoverConversionConditionList_k__BackingField; // 0x90
		::MX::Core::Math::BasisPoint* _LeftoverConvertRate_k__BackingField; // 0x98
		::System::Boolean _ApplyHealRate_k__BackingField; // 0xA0
		::System::Boolean _ApplyHealRateByArmorType_k__BackingField; // 0xA1
		::System::Boolean _ApplyHealRateByBulletType_k__BackingField; // 0xA2
		::MX::Logic::Data::LogicEffectValue* _LogicEffectGroupIdInsteadShield_k__BackingField; // 0xA8

		::Il2CppArray<::System::Object*>* get_ChangeRateByCostList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET))(nullptr);
		}

		::System::Int32 get_ShieldPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_SHIELDPRIORITY_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* get_LogicEffectGroupIdInsteadShield()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_LOGICEFFECTGROUPIDINSTEADSHIELD_OFFSET))(nullptr);
		}

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_SHIELDID_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_CasterCoefficientAmount()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_CASTERCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShieldLeftoverConversionConditionList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_SHIELDLEFTOVERCONVERSIONCONDITIONLIST_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_TargetCoefficientAmount()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_TARGETCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_TargetStatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_TARGETSTATTYPE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_CasterStatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_CASTERSTATTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ShieldEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ShieldEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyHealRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_APPLYHEALRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_LeftoverConvertRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTVALUE_GET_LEFTOVERCONVERTRATE_OFFSET))(nullptr);
		}

	};
}

