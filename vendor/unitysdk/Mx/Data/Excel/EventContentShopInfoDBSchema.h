#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }

#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF240)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1AFF250)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1AFF260)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFF270)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFF280)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentShopInfoDBSchema_TypeDefinitionIndex = 17827;

	class EventContentShopInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFODBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

