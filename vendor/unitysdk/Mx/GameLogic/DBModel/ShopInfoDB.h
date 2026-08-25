#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace FlatData { class ShopGroupType; }
namespace MX::GameLogic::DBModel { class ShopInfoDB; }

#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_SHOPPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x100B210)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x100B220)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_ISREFRESH_OFFSET UNITYSDK_OFFSET(0x100B230)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_LASTAUTOREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x100B240)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_LASTAUTOREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x100B250)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_NEXTAUTOREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x100B260)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x100B270)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_CLONE_OFFSET UNITYSDK_OFFSET(0x100B280)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_ISREFRESH_OFFSET UNITYSDK_OFFSET(0x100B6D0)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_SHOPPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x100B6E0)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_SHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x100B6F0)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x100B700)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_MANUALREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x100B710)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_MANUALREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x100B720)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100B630)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x100B730)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_NEXTAUTOREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x100B740)
#define MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_SHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x100B750)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ShopInfoDB_TypeDefinitionIndex = 12726;

	class ShopInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::FlatData::ShopCategoryType* _Category_k__BackingField; // 0x18
		Il2CppObject* _ManualRefreshCount_k__BackingField; // 0x20
		::System::Boolean _IsRefresh_k__BackingField; // 0x30
		::FlatData::ShopGroupType* _ShopGroupType_k__BackingField; // 0x34
		Il2CppObject* _NextAutoRefreshDate_k__BackingField; // 0x38
		Il2CppObject* _LastAutoRefreshDate_k__BackingField; // 0x48
		Il2CppObject* _ShopProductList_k__BackingField; // 0x58

		::System::Void set_ShopProductList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_SHOPPRODUCTLIST_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_Category()
		{
			return ((::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_IsRefresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_ISREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastAutoRefreshDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_LASTAUTOREFRESHDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LastAutoRefreshDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_LASTAUTOREFRESHDATE_OFFSET))(nullptr);
		}

		::System::Void set_NextAutoRefreshDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_NEXTAUTOREFRESHDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Category(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ShopInfoDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ShopInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_ISREFRESH_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopProductList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_SHOPPRODUCTLIST_OFFSET))(nullptr);
		}

		::System::Void set_ShopGroupType(::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_SHOPGROUPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_ManualRefreshCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_MANUALREFRESHCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ManualRefreshCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_MANUALREFRESHCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NextAutoRefreshDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_NEXTAUTOREFRESHDATE_OFFSET))(nullptr);
		}

		::FlatData::ShopGroupType* get_ShopGroupType()
		{
			return ((::FlatData::ShopGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPINFODB_GET_SHOPGROUPTYPE_OFFSET))(nullptr);
		}

	};
}

