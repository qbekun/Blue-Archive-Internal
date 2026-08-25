#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AttendanceExcel; }
namespace FlatData { class AttendanceType; }
namespace FlatData { class TargetGroup; }
namespace FlatData { class AttendanceCountRule; }
namespace FlatData { class AttendanceResetType; }
namespace FlatData { class MailType; }
namespace FlatData { class DialogCategory; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19DC550)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETROOTASATTENDANCEEXCEL_OFFSET UNITYSDK_OFFSET(0x19DC560)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETROOTASATTENDANCEEXCEL_OFFSET UNITYSDK_OFFSET(0x19DC5C0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19DC650)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19DC620)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19DC670)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19DC6C0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_COUNTDOWNPREFAB_OFFSET UNITYSDK_OFFSET(0x19DC710)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETCOUNTDOWNPREFABBYTES_OFFSET UNITYSDK_OFFSET(0x19DC750)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x19DC770)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x19DC7C0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_ACCOUNTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x19DC810)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x19DC860)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETTITLEBYTES_OFFSET UNITYSDK_OFFSET(0x19DC8A0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_INFOMATIONLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x19DC8C0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETINFOMATIONLOCALIZECODEBYTES_OFFSET UNITYSDK_OFFSET(0x19DC900)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_COUNTRULE_OFFSET UNITYSDK_OFFSET(0x19DC920)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_COUNTRESET_OFFSET UNITYSDK_OFFSET(0x19DC970)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_BOOKSIZE_OFFSET UNITYSDK_OFFSET(0x19DC9C0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x19DCA10)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x19DCA50)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_STARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x19DCA70)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETSTARTABLEENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x19DCAB0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x19DCAD0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x19DCB10)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x19DCB30)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x19DCB80)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x19DCBD0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_TITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19DCC20)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETTITLEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19DCC60)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_DECORATIONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19DCC80)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETDECORATIONIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19DCCC0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_DECORATIONGARLANDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19DCCE0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_GETDECORATIONGARLANDIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19DCD20)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_CREATEATTENDANCEEXCEL_OFFSET UNITYSDK_OFFSET(0x19DCD40)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_STARTATTENDANCEEXCEL_OFFSET UNITYSDK_OFFSET(0x19DD4C0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19DD170)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDTYPE_OFFSET UNITYSDK_OFFSET(0x19DD440)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDCOUNTDOWNPREFAB_OFFSET UNITYSDK_OFFSET(0x19DD410)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x19DD140)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x19DD3E0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDACCOUNTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x19DD110)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDTITLE_OFFSET UNITYSDK_OFFSET(0x19DD3B0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDINFOMATIONLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x19DD380)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDCOUNTRULE_OFFSET UNITYSDK_OFFSET(0x19DD350)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDCOUNTRESET_OFFSET UNITYSDK_OFFSET(0x19DD320)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDBOOKSIZE_OFFSET UNITYSDK_OFFSET(0x19DD0E0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0x19DD2F0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDSTARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x19DD2C0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0x19DD290)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDEXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x19DD0B0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDMAILTYPE_OFFSET UNITYSDK_OFFSET(0x19DD260)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x19DD230)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19DD200)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDDECORATIONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19DD1D0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDDECORATIONGARLANDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19DD1A0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_ENDATTENDANCEEXCEL_OFFSET UNITYSDK_OFFSET(0x19DD470)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_FINISHATTENDANCEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19DD4E0)
#define MX_DATA_EXCEL_ATTENDANCEEXCEL_FINISHSIZEPREFIXEDATTENDANCEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19DD500)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AttendanceExcel_TypeDefinitionIndex = 16706;

	class AttendanceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AttendanceExcel* GetRootAsAttendanceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AttendanceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETROOTASATTENDANCEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AttendanceExcel* GetRootAsAttendanceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AttendanceExcel* arg)
		{
			return (return (::MX::Data::Excel::AttendanceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AttendanceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETROOTASATTENDANCEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AttendanceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AttendanceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::AttendanceType* get_Type()
		{
			return (return (::FlatData::AttendanceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_CountdownPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_COUNTDOWNPREFAB_OFFSET))(nullptr);
		}

		Il2CppObject* GetCountdownPrefabBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETCOUNTDOWNPREFABBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountLevelLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_ACCOUNTLEVELLIMIT_OFFSET))(nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_TITLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETTITLEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_InfomationLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_INFOMATIONLOCALIZECODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetInfomationLocalizeCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETINFOMATIONLOCALIZECODEBYTES_OFFSET))(nullptr);
		}

		::FlatData::AttendanceCountRule* get_CountRule()
		{
			return (return (::FlatData::AttendanceCountRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_COUNTRULE_OFFSET))(nullptr);
		}

		::FlatData::AttendanceResetType* get_CountReset()
		{
			return (return (::FlatData::AttendanceResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_COUNTRESET_OFFSET))(nullptr);
		}

		::System::Int64 get_BookSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_BOOKSIZE_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StartableEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_STARTABLEENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartableEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETSTARTABLEENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpiryDate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_EXPIRYDATE_OFFSET))(nullptr);
		}

		::FlatData::MailType* get_MailType()
		{
			return (return (::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_MAILTYPE_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::String* get_TitleImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_TITLEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETTITLEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DecorationImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_DECORATIONIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDecorationImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETDECORATIONIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DecorationGarlandImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GET_DECORATIONGARLANDIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDecorationGarlandImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_GETDECORATIONGARLANDIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAttendanceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::AttendanceType* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::TargetGroup* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::AttendanceCountRule* arg, ::FlatData::AttendanceResetType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::MailType* arg, ::FlatData::DialogCategory* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::AttendanceType*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::TargetGroup*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::AttendanceCountRule*, ::FlatData::AttendanceResetType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::MailType*, ::FlatData::DialogCategory*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_CREATEATTENDANCEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAttendanceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_STARTATTENDANCEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AttendanceType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AttendanceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCountdownPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDCOUNTDOWNPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDTARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountLevelLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDACCOUNTLEVELLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDTITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInfomationLocalizeCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDINFOMATIONLOCALIZECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCountRule(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AttendanceCountRule* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AttendanceCountRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDCOUNTRULE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCountReset(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AttendanceResetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AttendanceResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDCOUNTRESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBookSize(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDBOOKSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartableEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDSTARTABLEENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpiryDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDEXPIRYDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMailType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MailType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MailType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDMAILTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDDIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDTITLEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDecorationImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDDECORATIONIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDecorationGarlandImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ADDDECORATIONGARLANDIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAttendanceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_ENDATTENDANCEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAttendanceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_FINISHATTENDANCEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAttendanceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEEXCEL_FINISHSIZEPREFIXEDATTENDANCEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

