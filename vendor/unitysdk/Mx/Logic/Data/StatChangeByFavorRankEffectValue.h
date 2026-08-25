#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class StatChangeByFavorRankEffectValue; }
namespace FlatData { class StatType; }
namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class StatChangeByFavorRankEffectDAO; }

#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x123F6B0)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123F6C0)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x123F6D0)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x123F6E0)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x123F6F0)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_REMOVECONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x123F700)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_REMOVECONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x123F710)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x123F720)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_CASTERCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x123F730)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_CASTERSTATTYPE_OFFSET UNITYSDK_OFFSET(0x123F740)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_TARGETCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x123F750)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123F760)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_STACKSAMEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x123F770)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET UNITYSDK_OFFSET(0x123F780)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_RATEPERFAVORRANK_OFFSET UNITYSDK_OFFSET(0x123F790)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123F7A0)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123FA10)
#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x123FA30)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatChangeByFavorRankEffectValue_TypeDefinitionIndex = 13928;

	class StatChangeByFavorRankEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Data::StatChangeByFavorRankEffectValue* Empty; // 0x0
		::FlatData::StatType* _StatType_k__BackingField; // 0x48
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x4C
		::System::String* _EndConditionArgumentFirst_k__BackingField; // 0x50
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0x58
		::FlatData::EndCondition* _RemoveCondition_k__BackingField; // 0x60
		::System::String* _RemoveConditionArgumentFirst_k__BackingField; // 0x68
		::System::String* _RemoveConditionArgumentSecond_k__BackingField; // 0x70
		::System::Int64 _BaseAmount_k__BackingField; // 0x78
		::System::Int64 _CasterCoefficientAmount_k__BackingField; // 0x80
		::FlatData::StatType* _CasterStatType_k__BackingField; // 0x88
		::System::Int64 _TargetCoefficientAmount_k__BackingField; // 0x90
		::System::Boolean _Dispellable_k__BackingField; // 0x98
		::System::Int32 _StackSameEffectCount_k__BackingField; // 0x9C
		::System::Boolean _ExpireOldIfStackCountOver_k__BackingField; // 0xA0
		::System::Int64 _RatePerFavorRank_k__BackingField; // 0xA8

		::FlatData::StatType* get_StatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_STATTYPE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_RemoveCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::String* get_RemoveConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_REMOVECONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::System::String* get_RemoveConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_REMOVECONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CasterCoefficientAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_CASTERCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_CasterStatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_CASTERSTATTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCoefficientAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_TARGETCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_StackSameEffectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_STACKSAMEEFFECTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ExpireOldIfStackCountOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET))(nullptr);
		}

		::System::Int64 get_RatePerFavorRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_GET_RATEPERFAVORRANK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::StatChangeByFavorRankEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StatChangeByFavorRankEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTVALUE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

