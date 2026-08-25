#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldSeasonExcel; }
namespace FlatData { class FieldContentType; }
namespace FlatData { class FieldDialogType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_FIELDSEASONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD454D0)
#define FLATDATA_FIELDSEASONEXCEL_GETROOTASFIELDSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD454E0)
#define FLATDATA_FIELDSEASONEXCEL_GETROOTASFIELDSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD45540)
#define FLATDATA_FIELDSEASONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD455A0)
#define FLATDATA_FIELDSEASONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD451F0)
#define FLATDATA_FIELDSEASONEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD455C0)
#define FLATDATA_FIELDSEASONEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD45610)
#define FLATDATA_FIELDSEASONEXCEL_GET_FIELDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xD45690)
#define FLATDATA_FIELDSEASONEXCEL_GET_FIELDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xD456E0)
#define FLATDATA_FIELDSEASONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD45760)
#define FLATDATA_FIELDSEASONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD457B0)
#define FLATDATA_FIELDSEASONEXCEL_GET_ENTRYDATEID_OFFSET UNITYSDK_OFFSET(0xD45830)
#define FLATDATA_FIELDSEASONEXCEL_GET_ENTRYDATEID_OFFSET UNITYSDK_OFFSET(0xD45880)
#define FLATDATA_FIELDSEASONEXCEL_GET_INSTANTENTRYDATEID_OFFSET UNITYSDK_OFFSET(0xD45900)
#define FLATDATA_FIELDSEASONEXCEL_GET_INSTANTENTRYDATEID_OFFSET UNITYSDK_OFFSET(0xD45950)
#define FLATDATA_FIELDSEASONEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xD459D0)
#define FLATDATA_FIELDSEASONEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xD45A10)
#define FLATDATA_FIELDSEASONEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0xD45A80)
#define FLATDATA_FIELDSEASONEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xD45AA0)
#define FLATDATA_FIELDSEASONEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xD45AE0)
#define FLATDATA_FIELDSEASONEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0xD45B50)
#define FLATDATA_FIELDSEASONEXCEL_GET_LOBBYBGMCHANGESTAGEID_OFFSET UNITYSDK_OFFSET(0xD45B70)
#define FLATDATA_FIELDSEASONEXCEL_GET_LOBBYBGMCHANGESTAGEID_OFFSET UNITYSDK_OFFSET(0xD45BC0)
#define FLATDATA_FIELDSEASONEXCEL_GET_FIELDPREFABCONTROLID_OFFSET UNITYSDK_OFFSET(0xD45C40)
#define FLATDATA_FIELDSEASONEXCEL_GET_FIELDPREFABCONTROLID_OFFSET UNITYSDK_OFFSET(0xD45C90)
#define FLATDATA_FIELDSEASONEXCEL_GET_FIELDGETKEYWORDCALLDIALOGENUM_OFFSET UNITYSDK_OFFSET(0xD45D10)
#define FLATDATA_FIELDSEASONEXCEL_GET_FIELDGETKEYWORDCALLDIALOGENUM_OFFSET UNITYSDK_OFFSET(0xD45D60)
#define FLATDATA_FIELDSEASONEXCEL_GET_MASTERYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD45DE0)
#define FLATDATA_FIELDSEASONEXCEL_GET_MASTERYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD45E20)
#define FLATDATA_FIELDSEASONEXCEL_GETMASTERYIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD45E90)
#define FLATDATA_FIELDSEASONEXCEL_GET_FIELDLOBBYTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD45EB0)
#define FLATDATA_FIELDSEASONEXCEL_GET_FIELDLOBBYTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD45EF0)
#define FLATDATA_FIELDSEASONEXCEL_GETFIELDLOBBYTITLEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD45F60)
#define FLATDATA_FIELDSEASONEXCEL_GET_KEYWORDLOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD45F80)
#define FLATDATA_FIELDSEASONEXCEL_GET_KEYWORDLOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD45FC0)
#define FLATDATA_FIELDSEASONEXCEL_GETKEYWORDLOGOIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD46030)
#define FLATDATA_FIELDSEASONEXCEL_CREATEFIELDSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD46050)
#define FLATDATA_FIELDSEASONEXCEL_STARTFIELDSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD46560)
#define FLATDATA_FIELDSEASONEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD46390)
#define FLATDATA_FIELDSEASONEXCEL_ADDFIELDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xD464E0)
#define FLATDATA_FIELDSEASONEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD46360)
#define FLATDATA_FIELDSEASONEXCEL_ADDENTRYDATEID_OFFSET UNITYSDK_OFFSET(0xD46330)
#define FLATDATA_FIELDSEASONEXCEL_ADDINSTANTENTRYDATEID_OFFSET UNITYSDK_OFFSET(0xD46300)
#define FLATDATA_FIELDSEASONEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0xD464B0)
#define FLATDATA_FIELDSEASONEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0xD46480)
#define FLATDATA_FIELDSEASONEXCEL_ADDLOBBYBGMCHANGESTAGEID_OFFSET UNITYSDK_OFFSET(0xD462D0)
#define FLATDATA_FIELDSEASONEXCEL_ADDFIELDPREFABCONTROLID_OFFSET UNITYSDK_OFFSET(0xD462A0)
#define FLATDATA_FIELDSEASONEXCEL_ADDFIELDGETKEYWORDCALLDIALOGENUM_OFFSET UNITYSDK_OFFSET(0xD46450)
#define FLATDATA_FIELDSEASONEXCEL_ADDMASTERYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD46420)
#define FLATDATA_FIELDSEASONEXCEL_ADDFIELDLOBBYTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD463F0)
#define FLATDATA_FIELDSEASONEXCEL_ADDKEYWORDLOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD463C0)
#define FLATDATA_FIELDSEASONEXCEL_ENDFIELDSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD46510)

namespace FlatData
{
	inline static constexpr unsigned int FieldSeasonExcel_TypeDefinitionIndex = 9285;

	class FieldSeasonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldSeasonExcel* GetRootAsFieldSeasonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GETROOTASFIELDSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldSeasonExcel* GetRootAsFieldSeasonExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldSeasonExcel* arg2)
		{
			return ((::FlatData::FieldSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GETROOTASFIELDSEASONEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldSeasonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldSeasonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_uniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::FieldContentType* get_fieldContentType()
		{
			return ((::FlatData::FieldContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_FIELDCONTENTTYPE_OFFSET))(nullptr);
		}

		::FlatData::FieldContentType* get_FieldContentType()
		{
			return ((::FlatData::FieldContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_FIELDCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_eventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_entryDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_ENTRYDATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EntryDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_ENTRYDATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_instantEntryDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_INSTANTENTRYDATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_InstantEntryDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_INSTANTENTRYDATEID_OFFSET))(nullptr);
		}

		::System::String* get_startDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_endDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_lobbyBGMChangeStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_LOBBYBGMCHANGESTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_LobbyBGMChangeStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_LOBBYBGMCHANGESTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_fieldPrefabControlID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_FIELDPREFABCONTROLID_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldPrefabControlID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_FIELDPREFABCONTROLID_OFFSET))(nullptr);
		}

		::FlatData::FieldDialogType* get_fieldGetKeywordCallDialogEnum()
		{
			return ((::FlatData::FieldDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_FIELDGETKEYWORDCALLDIALOGENUM_OFFSET))(nullptr);
		}

		::FlatData::FieldDialogType* get_FieldGetKeywordCallDialogEnum()
		{
			return ((::FlatData::FieldDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_FIELDGETKEYWORDCALLDIALOGENUM_OFFSET))(nullptr);
		}

		::System::String* get_masteryImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_MASTERYIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_MasteryImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_MASTERYIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMasteryImagePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GETMASTERYIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_fieldLobbyTitleImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_FIELDLOBBYTITLEIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_FieldLobbyTitleImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_FIELDLOBBYTITLEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFieldLobbyTitleImagePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GETFIELDLOBBYTITLEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_keywordLogoImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_KEYWORDLOGOIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_KeywordLogoImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GET_KEYWORDLOGOIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetKeywordLogoImagePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_GETKEYWORDLOGOIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatData::FieldContentType* arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::FlatBuffers::StringOffset* arg7, ::FlatBuffers::StringOffset* arg8, ::System::Int64 arg9, ::System::Int64 arg10, ::FlatData::FieldDialogType* arg11, ::FlatBuffers::StringOffset* arg12, ::FlatBuffers::StringOffset* arg13, ::FlatBuffers::StringOffset* arg14)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::FieldContentType*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatData::FieldDialogType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_CREATEFIELDSEASONEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, nullptr);
		}

		::System::Void StartFieldSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_STARTFIELDSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFieldContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldContentType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldContentType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDFIELDCONTENTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEntryDateId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDENTRYDATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddInstantEntryDateId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDINSTANTENTRYDATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDSTARTDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDENDDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLobbyBGMChangeStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDLOBBYBGMCHANGESTAGEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFieldPrefabControlID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDFIELDPREFABCONTROLID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFieldGetKeywordCallDialogEnum(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldDialogType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldDialogType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDFIELDGETKEYWORDCALLDIALOGENUM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMasteryImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDMASTERYIMAGEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFieldLobbyTitleImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDFIELDLOBBYTITLEIMAGEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddKeywordLogoImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ADDKEYWORDLOGOIMAGEPATH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSEASONEXCEL_ENDFIELDSEASONEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

