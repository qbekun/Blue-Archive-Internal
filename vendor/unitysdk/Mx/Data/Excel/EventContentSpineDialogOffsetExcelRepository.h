#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EventContentType; }

#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B03D50)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTCONTENTTYPE_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B03EC0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B043E0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B048F0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B04F30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpineDialogOffsetExcelRepository_TypeDefinitionIndex = 17856;

	class EventContentSpineDialogOffsetExcelRepository : public <<CreateVisual>g__co_CreateVisual|34_1>d
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_EventContentType_CostumeUniqueId(::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::EventContentType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTCONTENTTYPE_COSTUMEUNIQUEID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventContentType_CostumeUniqueId(::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::EventContentType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_COSTUMEUNIQUEID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventContentType_CostumeUniqueId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_COSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

