#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CurrencyTypes; }
namespace FlatData { class WeekDungeonType; }
namespace FlatData { class ContentType; }
namespace FlatData { class EchelonType; }
namespace MX::Data::Excel { class WeekDungeonExcel&; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace FlatData { class WeekDay; }
namespace MX::Data::Excel { class WeekDungeonGroupBuffExcel&; }

#define MX_DATA_WEEKDUNGEONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x19672C0)
#define MX_DATA_WEEKDUNGEONDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x19673D0)
#define MX_DATA_WEEKDUNGEONDATA_GETCURRENCYTYPEFORWEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x19689D0)
#define MX_DATA_WEEKDUNGEONDATA_GETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x19689F0)
#define MX_DATA_WEEKDUNGEONDATA_GETECHELONTYPEFORWEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1968A10)
#define MX_DATA_WEEKDUNGEONDATA_GET_FINDGIFTREWARDLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x1968AC0)
#define MX_DATA_WEEKDUNGEONDATA_TRYGETDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1968B50)
#define MX_DATA_WEEKDUNGEONDATA_GETDUNGEONEXCELBYGROUNDID_OFFSET UNITYSDK_OFFSET(0x1968BB0)
#define MX_DATA_WEEKDUNGEONDATA_FINDDUNGEONS_OFFSET UNITYSDK_OFFSET(0x1968DA0)
#define MX_DATA_WEEKDUNGEONDATA_FINDDUNGEONREWARDS_OFFSET UNITYSDK_OFFSET(0x1968E90)
#define MX_DATA_WEEKDUNGEONDATA_GETFINDGIFTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1968F90)
#define MX_DATA_WEEKDUNGEONDATA_GETOPENWEEKDUNGEONTYPES_OFFSET UNITYSDK_OFFSET(0x1969360)
#define MX_DATA_WEEKDUNGEONDATA_GETOPENWEEKDUNGEONTYPES_OFFSET UNITYSDK_OFFSET(0x1969410)
#define MX_DATA_WEEKDUNGEONDATA_ISOPEN_OFFSET UNITYSDK_OFFSET(0x19694D0)
#define MX_DATA_WEEKDUNGEONDATA_ISOPEN_OFFSET UNITYSDK_OFFSET(0x19695F0)
#define MX_DATA_WEEKDUNGEONDATA_GETOPENWEEKDAYS_OFFSET UNITYSDK_OFFSET(0x1969710)
#define MX_DATA_WEEKDUNGEONDATA_FINDGROUNDMODULEREWARDS_OFFSET UNITYSDK_OFFSET(0x19699A0)
#define MX_DATA_WEEKDUNGEONDATA_TRYGETGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1969E00)
#define MX_DATA_WEEKDUNGEONDATA_FINDGROUPBUFFS_OFFSET UNITYSDK_OFFSET(0x1969E60)
#define MX_DATA_WEEKDUNGEONDATA_FINDGROUPBUFFS_OFFSET UNITYSDK_OFFSET(0x196A1B0)
#define MX_DATA_WEEKDUNGEONDATA_GETPARCELTOOLTIPDATA_OFFSET UNITYSDK_OFFSET(0x196A510)
#define MX_DATA_WEEKDUNGEONDATA_TRYGETENTERCOST_OFFSET UNITYSDK_OFFSET(0x196B000)
#define MX_DATA_WEEKDUNGEONDATA_GETAPPLIEDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x196B060)
#define MX_DATA_WEEKDUNGEONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x196B430)

namespace MX::Data
{
	inline static constexpr unsigned int WeekDungeonData_TypeDefinitionIndex = 16456;

	class WeekDungeonData : public Il2CppObject
	{
	public:
		Il2CppObject* dungeonTables; // 0x28
		Il2CppObject* rewardTables; // 0x30
		Il2CppObject* displayedRewardTables; // 0x38
		Il2CppObject* openScheduleExcelTables; // 0x40
		Il2CppObject* groupBuffTable; // 0x48
		Il2CppObject* enterCostTables; // 0x50

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* GetCurrencyTypeForWeekDungeonType(::FlatData::WeekDungeonType* arg)
		{
			return (return (::FlatData::CurrencyTypes*(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETCURRENCYTYPEFORWEEKDUNGEONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* GetContentType(::FlatData::WeekDungeonType* arg)
		{
			return (return (::FlatData::ContentType*(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* GetEchelonTypeForWeekDungeonType(::FlatData::WeekDungeonType* arg)
		{
			return (return (::FlatData::EchelonType*(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETECHELONTYPEFORWEEKDUNGEONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FindGiftRewardLimitCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GET_FINDGIFTREWARDLIMITCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetDungeonExcel(::System::Int64 arg, ::MX::Data::Excel::WeekDungeonExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::WeekDungeonExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_TRYGETDUNGEONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetDungeonExcelByGroundId(::System::Int64 arg, ::MX::Data::Excel::WeekDungeonExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::WeekDungeonExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETDUNGEONEXCELBYGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FindDungeons(::FlatData::WeekDungeonType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_FINDDUNGEONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindDungeonRewards(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_FINDDUNGEONREWARDS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetFindGiftEffectPath(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETFINDGIFTEFFECTPATH_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetOpenWeekDungeonTypes(::FlatData::WeekDay* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::WeekDay*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETOPENWEEKDUNGEONTYPES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOpenWeekDungeonTypes(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETOPENWEEKDUNGEONTYPES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpen(::FlatData::WeekDay* arg, ::FlatData::WeekDungeonType* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::WeekDay*, ::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_ISOPEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsOpen(::System::DateTime* arg, ::FlatData::WeekDungeonType* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_ISOPEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetOpenWeekDays(::FlatData::WeekDungeonType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETOPENWEEKDAYS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindGroundModuleRewards(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_FINDGROUNDMODULEREWARDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetGroupBuffExcel(::System::Int64 arg, ::MX::Data::Excel::WeekDungeonGroupBuffExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::WeekDungeonGroupBuffExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_TRYGETGROUPBUFFEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FindGroupBuffs(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_FINDGROUPBUFFS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindGroupBuffs(::FlatData::WeekDungeonType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_FINDGROUPBUFFS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetParcelTooltipData(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETPARCELTOOLTIPDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetEnterCost(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_TRYGETENTERCOST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAppliedBuffCount(::System::Int64 arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_GETAPPLIEDBUFFCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEEKDUNGEONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

