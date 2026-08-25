#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class MiniGameTBGThemaRewardType; }

#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_GET_THEMAUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C0DF50)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DF60)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0DF70)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_SET_MINIGAMETBGTHEMAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1C0DF80)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0DF90)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_SET_THEMAUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C0DFA0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_GET_MINIGAMETBGTHEMAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1C0DFB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameTBGThemaRewardDBSchema_TypeDefinitionIndex = 18916;

	class MiniGameTBGThemaRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int32 _ThemaUniqueId_k__BackingField; // 0x28
		::FlatData::MiniGameTBGThemaRewardType* _MiniGameTBGThemaRewardType_k__BackingField; // 0x2C

		::System::Int32 get_ThemaUniqueId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_GET_THEMAUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MiniGameTBGThemaRewardType(::FlatData::MiniGameTBGThemaRewardType* arg)
		{
			((::System::Void(*)(::FlatData::MiniGameTBGThemaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_SET_MINIGAMETBGTHEMAREWARDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_ThemaUniqueId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_SET_THEMAUNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::MiniGameTBGThemaRewardType* get_MiniGameTBGThemaRewardType()
		{
			return (return (::FlatData::MiniGameTBGThemaRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDDBSCHEMA_GET_MINIGAMETBGTHEMAREWARDTYPE_OFFSET))(nullptr);
		}

	};
}

