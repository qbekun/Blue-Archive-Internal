#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldDialogType; }
namespace FlatData { class FieldContentType; }
namespace FlatData { class FieldSeasonExcel; }

#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_ENTRYDATEID_OFFSET UNITYSDK_OFFSET(0xE7F1A0)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xE7F1B0)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7F1C0)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GETSEASONUINAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_LOBBYBGMCHANGESTAGEID_OFFSET UNITYSDK_OFFSET(0xE7F430)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE7F440)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_LOBBYTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE7F450)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_DAYSSINCESTARTDATE_OFFSET UNITYSDK_OFFSET(0xE7F460)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xE7F4C0)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_INSTANTENTRYDATEID_OFFSET UNITYSDK_OFFSET(0xE7F4D0)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_FIELDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xE7F4E0)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_MASTERYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE7F4F0)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE7F500)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE7F590)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_KEYWORDLOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE7F5A0)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_KEYWORDDIALOGTYPE_OFFSET UNITYSDK_OFFSET(0xE7F5B0)
#define MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_SEASONPREFABNAMEPOSTFIX_OFFSET UNITYSDK_OFFSET(0xE7F5C0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldSeasonInfo_TypeDefinitionIndex = 10608;

	class FieldSeasonInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _EventContentId_k__BackingField; // 0x18
		::System::Int64 _EntryDateId_k__BackingField; // 0x20
		::System::Int64 _InstantEntryDateId_k__BackingField; // 0x28
		::System::DateTime* _StartDate_k__BackingField; // 0x30
		::System::DateTime* _EndDate_k__BackingField; // 0x38
		::System::Int64 _LobbyBGMChangeStageId_k__BackingField; // 0x40
		::System::String* _MasteryImagePath_k__BackingField; // 0x48
		::System::String* _LobbyTitleImagePath_k__BackingField; // 0x50
		::System::String* _KeywordLogoImagePath_k__BackingField; // 0x58
		::System::String* _SeasonPrefabNamePostfix_k__BackingField; // 0x60
		::FlatData::FieldDialogType* _KeywordDialogType_k__BackingField; // 0x68
		::FlatData::FieldContentType* _FieldContentType_k__BackingField; // 0x6C

		::System::Int64 get_EntryDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_ENTRYDATEID_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldSeasonExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetSeasonUIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GETSEASONUINAME_OFFSET))(nullptr);
		}

		::System::Int64 get_LobbyBGMChangeStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_LOBBYBGMCHANGESTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* get_LobbyTitleImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_LOBBYTITLEIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Int32 DaysSinceStartDate(::System::DateTime* arg)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_DAYSSINCESTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_InstantEntryDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_INSTANTENTRYDATEID_OFFSET))(nullptr);
		}

		::FlatData::FieldContentType* get_FieldContentType()
		{
			return ((::FlatData::FieldContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_FIELDCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_MasteryImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_MASTERYIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Boolean IsOpen(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_ISOPEN_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_KeywordLogoImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_KEYWORDLOGOIMAGEPATH_OFFSET))(nullptr);
		}

		::FlatData::FieldDialogType* get_KeywordDialogType()
		{
			return ((::FlatData::FieldDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_KEYWORDDIALOGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_SeasonPrefabNamePostfix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONINFO_GET_SEASONPREFABNAMEPOSTFIX_OFFSET))(nullptr);
		}

	};
}

