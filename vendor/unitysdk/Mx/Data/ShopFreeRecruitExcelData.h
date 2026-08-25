#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ShopFreeRecruitType; }
namespace MX::Data::Excel { class ShopFreeRecruitExcel; }
namespace MX::GameLogic::DBModel { class ShopFreeRecruitHistoryDB; }

#define MX_DATA_SHOPFREERECRUITEXCELDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x185C0B0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x185C0C0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_GET_FREEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x185C0D0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_SET_FREEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x185C0E0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_GET_FREEPERIODTO_OFFSET UNITYSDK_OFFSET(0x185C0F0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_SET_FREEPERIODTO_OFFSET UNITYSDK_OFFSET(0x185C100)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_GET_FREERECRUITTYPE_OFFSET UNITYSDK_OFFSET(0x185C110)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_SET_FREERECRUITTYPE_OFFSET UNITYSDK_OFFSET(0x185C120)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_GET_FREERECRUITDECORATIONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x185C130)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_SET_FREERECRUITDECORATIONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x185C140)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_GET_TENRECRUITCOUNTONLY_OFFSET UNITYSDK_OFFSET(0x185C150)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_SET_TENRECRUITCOUNTONLY_OFFSET UNITYSDK_OFFSET(0x185C160)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_GET_TARGETSHOPRECRUITGOODSIDS_OFFSET UNITYSDK_OFFSET(0x185C170)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_SET_TARGETSHOPRECRUITGOODSIDS_OFFSET UNITYSDK_OFFSET(0x185C180)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_GET_PERIODDATALIST_OFFSET UNITYSDK_OFFSET(0x185C190)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_SET_PERIODDATALIST_OFFSET UNITYSDK_OFFSET(0x185C1A0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185C1B0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185C1C0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x185C5E0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_CALCFREERECRUITTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x185C6F0)
#define MX_DATA_SHOPFREERECRUITEXCELDATA_CALCFREERECRUITUSEDCOUNT_OFFSET UNITYSDK_OFFSET(0x185C970)

namespace MX::Data
{
	inline static constexpr unsigned int ShopFreeRecruitExcelData_TypeDefinitionIndex = 15891;

	class ShopFreeRecruitExcelData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		Il2CppObject* _FreePeriodFrom_k__BackingField; // 0x18
		Il2CppObject* _FreePeriodTo_k__BackingField; // 0x28
		::FlatData::ShopFreeRecruitType* _FreeRecruitType_k__BackingField; // 0x38
		::System::String* _FreeRecruitDecorationImagePath_k__BackingField; // 0x40
		::System::Boolean _TenRecruitCountOnly_k__BackingField; // 0x48
		Il2CppObject* _TargetShopRecruitGoodsIds_k__BackingField; // 0x50
		Il2CppObject* _PeriodDataList_k__BackingField; // 0x58

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FreePeriodFrom()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_GET_FREEPERIODFROM_OFFSET))(nullptr);
		}

		::System::Void set_FreePeriodFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_SET_FREEPERIODFROM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FreePeriodTo()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_GET_FREEPERIODTO_OFFSET))(nullptr);
		}

		::System::Void set_FreePeriodTo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_SET_FREEPERIODTO_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopFreeRecruitType* get_FreeRecruitType()
		{
			return (return (::FlatData::ShopFreeRecruitType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_GET_FREERECRUITTYPE_OFFSET))(nullptr);
		}

		::System::Void set_FreeRecruitType(::FlatData::ShopFreeRecruitType* arg)
		{
			((::System::Void(*)(::FlatData::ShopFreeRecruitType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_SET_FREERECRUITTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_FreeRecruitDecorationImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_GET_FREERECRUITDECORATIONIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_FreeRecruitDecorationImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_SET_FREERECRUITDECORATIONIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_TenRecruitCountOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_GET_TENRECRUITCOUNTONLY_OFFSET))(nullptr);
		}

		::System::Void set_TenRecruitCountOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_SET_TENRECRUITCOUNTONLY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TargetShopRecruitGoodsIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_GET_TARGETSHOPRECRUITGOODSIDS_OFFSET))(nullptr);
		}

		::System::Void set_TargetShopRecruitGoodsIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_SET_TARGETSHOPRECRUITGOODSIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PeriodDataList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_GET_PERIODDATALIST_OFFSET))(nullptr);
		}

		::System::Void set_PeriodDataList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_SET_PERIODDATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ShopFreeRecruitExcel* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopFreeRecruitExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsActive(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalcFreeRecruitTotalCount(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_CALCFREERECRUITTOTALCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalcFreeRecruitUsedCount(::System::DateTime* arg, ::MX::GameLogic::DBModel::ShopFreeRecruitHistoryDB* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::MX::GameLogic::DBModel::ShopFreeRecruitHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITEXCELDATA_CALCFREERECRUITUSEDCOUNT_OFFSET))(arg, arg, nullptr);
		}

	};
}

