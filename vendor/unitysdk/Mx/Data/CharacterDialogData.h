#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class IRandomService; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }
namespace MX::Data { class CharacterDialogInfo; }
namespace FlatData { class DialogConditionDetail; }

#define MX_DATA_CHARACTERDIALOGDATA_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x189C4C0)
#define MX_DATA_CHARACTERDIALOGDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x189C4D0)
#define MX_DATA_CHARACTERDIALOGDATA_GETRANDOMCOSTUMEIDFOREVENT_OFFSET UNITYSDK_OFFSET(0x189C570)
#define MX_DATA_CHARACTERDIALOGDATA_GETRANDOMCOSTUMEIDFORBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x189C8A0)
#define MX_DATA_CHARACTERDIALOGDATA_ANY_OFFSET UNITYSDK_OFFSET(0x189CA70)
#define MX_DATA_CHARACTERDIALOGDATA_PICKRANDOMONE_OFFSET UNITYSDK_OFFSET(0x189CB80)
#define MX_DATA_CHARACTERDIALOGDATA_PICKRANDOMONE_OFFSET UNITYSDK_OFFSET(0x189D7F0)
#define MX_DATA_CHARACTERDIALOGDATA_GETALLIDLEDIALOGLIST_OFFSET UNITYSDK_OFFSET(0x189D8F0)
#define MX_DATA_CHARACTERDIALOGDATA_GETALLIDLEEVENTDIALOGLIST_OFFSET UNITYSDK_OFFSET(0x189E160)
#define MX_DATA_CHARACTERDIALOGDATA_GETALLIDLEBATTLEPASSDIALOGLIST_OFFSET UNITYSDK_OFFSET(0x189E6D0)
#define MX_DATA_CHARACTERDIALOGDATA_GETDIALOGLIST_OFFSET UNITYSDK_OFFSET(0x189CC40)
#define MX_DATA_CHARACTERDIALOGDATA_GETDIALOGLISTEVENT_OFFSET UNITYSDK_OFFSET(0x189ED40)
#define MX_DATA_CHARACTERDIALOGDATA_GETDIALOGLISTBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x189F690)
#define MX_DATA_CHARACTERDIALOGDATA_FILTER_OFFSET UNITYSDK_OFFSET(0x189EC40)
#define MX_DATA_CHARACTERDIALOGDATA_FILTER_OFFSET UNITYSDK_OFFSET(0x189FFA0)
#define MX_DATA_CHARACTERDIALOGDATA_CHECKSEASONDATE_OFFSET UNITYSDK_OFFSET(0x18A0020)
#define MX_DATA_CHARACTERDIALOGDATA_HASDATA_OFFSET UNITYSDK_OFFSET(0x18A01B0)
#define MX_DATA_CHARACTERDIALOGDATA_TRYGETALLNORMALCVLIST_OFFSET UNITYSDK_OFFSET(0x18A02B0)
#define MX_DATA_CHARACTERDIALOGDATA_TRYGETALLNORMALCVLISTBYCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x18A0730)
#define MX_DATA_CHARACTERDIALOGDATA_TRYGETALLEVENTCVLIST_OFFSET UNITYSDK_OFFSET(0x18A0C50)
#define MX_DATA_CHARACTERDIALOGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18A10D0)
#define MX_DATA_CHARACTERDIALOGDATA__GETRANDOMCOSTUMEIDFOREVENT_G__REACHEDWORLDRAIDCONDITION|4_3_OFFSET UNITYSDK_OFFSET(0x18A1140)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDialogData_TypeDefinitionIndex = 16018;

	class CharacterDialogData : public Il2CppObject
	{
	public:
		::MX::Core::Math::IRandomService* _random_k__BackingField; // 0x28

		::MX::Core::Math::IRandomService* get_random()
		{
			return (return (::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_GET_RANDOM_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Int64 GetRandomCostumeIdForEvent(::System::Int64 arg, ::FlatData::DialogCategory* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_GETRANDOMCOSTUMEIDFOREVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetRandomCostumeIdForBattlePass(::System::Int64 arg, ::FlatData::DialogCategory* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_GETRANDOMCOSTUMEIDFORBATTLEPASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Any(::FlatData::DialogCategory* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCondition* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::DialogCategory*, ::System::Int64, ::System::Int64, ::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_ANY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::MX::Data::CharacterDialogInfo* PickRandomOne(::FlatData::DialogCategory* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCondition* arg, ::System::Boolean arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::CharacterDialogInfo*(*)(::FlatData::DialogCategory*, ::System::Int64, ::System::Int64, ::FlatData::DialogCondition*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_PICKRANDOMONE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::MX::Data::CharacterDialogInfo* PickRandomOne(::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg)
		{
			return (return (::MX::Data::CharacterDialogInfo*(*)(::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_PICKRANDOMONE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllIdleDialogList(::FlatData::DialogCategory* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::DialogCategory*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_GETALLIDLEDIALOGLIST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetAllIdleEventDialogList(::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogConditionDetail* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::DialogCategory*, ::FlatData::DialogConditionDetail*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_GETALLIDLEEVENTDIALOGLIST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetAllIdleBattlePassDialogList(::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogConditionDetail* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::DialogCategory*, ::FlatData::DialogConditionDetail*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_GETALLIDLEBATTLEPASSDIALOGLIST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetDialogList(::FlatData::DialogCategory* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCondition* arg, ::System::Boolean arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::DialogCategory*, ::System::Int64, ::System::Int64, ::FlatData::DialogCondition*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_GETDIALOGLIST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetDialogListEvent(::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::FlatData::DialogConditionDetail* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::FlatData::DialogConditionDetail*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_GETDIALOGLISTEVENT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetDialogListBattlePass(::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::FlatData::DialogConditionDetail* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::FlatData::DialogConditionDetail*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_GETDIALOGLISTBATTLEPASS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Filter(Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_FILTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Filter(::MX::Data::CharacterDialogInfo* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::CharacterDialogInfo*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_FILTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckSeasonDate(::MX::Data::CharacterDialogInfo* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::CharacterDialogInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_CHECKSEASONDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasData(::FlatData::DialogCategory* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::DialogCategory*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_HASDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetAllNormalCVList(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_TRYGETALLNORMALCVLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllNormalCVListByCostumeUniqueId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_TRYGETALLNORMALCVLISTBYCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllEventCVList(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_TRYGETALLEVENTCVLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetRandomCostumeIdForEvent_g__ReachedWorldRaidCondition|4_3(<>c__DisplayClass4_1&* arg)
		{
			return (return (::System::Boolean(*)(<>c__DisplayClass4_1&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGDATA__GETRANDOMCOSTUMEIDFOREVENT_G__REACHEDWORLDRAIDCONDITION|4_3_OFFSET))(arg, nullptr);
		}

	};
}

