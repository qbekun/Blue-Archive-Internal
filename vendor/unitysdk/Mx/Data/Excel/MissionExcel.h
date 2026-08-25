#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MissionExcel; }
namespace FlatData { class MissionCategory; }
namespace FlatData { class MissionResetType; }
namespace FlatData { class MissionToastDisplayConditionType; }
namespace FlatData { class ContentType; }
namespace FlatData { class TargetGroup; }
namespace FlatData { class SuddenMissionContentType; }
namespace FlatData { class MissionCompleteConditionType; }
namespace FlatData { class Tag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MISSIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C119C0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETROOTASMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C119D0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETROOTASMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C11A30)
#define MX_DATA_EXCEL_MISSIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C11AC0)
#define MX_DATA_EXCEL_MISSIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C11A90)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C11AE0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1C11B30)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C11B80)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_RESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C11BD0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1C11C20)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C11C70)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C11CB0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_VIEWFLAG_OFFSET UNITYSDK_OFFSET(0x1C11CD0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x1C11D20)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1C11D70)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C11DB0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1C11DD0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C11E10)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_ENDDAY_OFFSET UNITYSDK_OFFSET(0x1C11E30)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_STARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x1C11E80)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETSTARTABLEENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C11EC0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_DATEAUTOREFER_OFFSET UNITYSDK_OFFSET(0x1C11EE0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C11F30)
#define MX_DATA_EXCEL_MISSIONEXCEL_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C11F80)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C11FE0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C12020)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1C12040)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1C12090)
#define MX_DATA_EXCEL_MISSIONEXCEL_CONTENTTAGS_OFFSET UNITYSDK_OFFSET(0x1C120E0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_CONTENTTAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1C12140)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETCONTENTTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1C12180)
#define MX_DATA_EXCEL_MISSIONEXCEL_SHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1C121A0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET UNITYSDK_OFFSET(0x1C121F0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_CHALLENGESTAGESHORTCUT_OFFSET UNITYSDK_OFFSET(0x1C12230)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C12280)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C122D0)
#define MX_DATA_EXCEL_MISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C12320)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1C12380)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1C123C0)
#define MX_DATA_EXCEL_MISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1C123E0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET UNITYSDK_OFFSET(0x1C12440)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET UNITYSDK_OFFSET(0x1C12480)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x1C124A0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETREWARDICONBYTES_OFFSET UNITYSDK_OFFSET(0x1C124E0)
#define MX_DATA_EXCEL_MISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C12500)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C12560)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C125A0)
#define MX_DATA_EXCEL_MISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C125C0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C12620)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C12660)
#define MX_DATA_EXCEL_MISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C12680)
#define MX_DATA_EXCEL_MISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C126E0)
#define MX_DATA_EXCEL_MISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C12720)
#define MX_DATA_EXCEL_MISSIONEXCEL_CREATEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C12740)
#define MX_DATA_EXCEL_MISSIONEXCEL_STARTMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C13180)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C12CE0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1C130A0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C13070)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C13040)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1C13010)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C12FE0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDVIEWFLAG_OFFSET UNITYSDK_OFFSET(0x1C13100)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDLIMIT_OFFSET UNITYSDK_OFFSET(0x1C130D0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1C12FB0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0x1C12F80)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDENDDAY_OFFSET UNITYSDK_OFFSET(0x1C12CB0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDSTARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x1C12F50)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDDATEAUTOREFER_OFFSET UNITYSDK_OFFSET(0x1C12F20)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C12C80)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDPREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C12EF0)
#define MX_DATA_EXCEL_MISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C131A0)
#define MX_DATA_EXCEL_MISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13230)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1C12EC0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1C12C50)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDCONTENTTAGS_OFFSET UNITYSDK_OFFSET(0x1C12E90)
#define MX_DATA_EXCEL_MISSIONEXCEL_CREATECONTENTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13270)
#define MX_DATA_EXCEL_MISSIONEXCEL_STARTCONTENTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13300)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1C12E60)
#define MX_DATA_EXCEL_MISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13340)
#define MX_DATA_EXCEL_MISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1C133D0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDCHALLENGESTAGESHORTCUT_OFFSET UNITYSDK_OFFSET(0x1C12C20)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C12E30)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C12BF0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C12E00)
#define MX_DATA_EXCEL_MISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13410)
#define MX_DATA_EXCEL_MISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1C134A0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1C12DD0)
#define MX_DATA_EXCEL_MISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1C134E0)
#define MX_DATA_EXCEL_MISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13570)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDREWARDICON_OFFSET UNITYSDK_OFFSET(0x1C12DA0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C12D70)
#define MX_DATA_EXCEL_MISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C135B0)
#define MX_DATA_EXCEL_MISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13640)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C12D40)
#define MX_DATA_EXCEL_MISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13680)
#define MX_DATA_EXCEL_MISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13710)
#define MX_DATA_EXCEL_MISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C12D10)
#define MX_DATA_EXCEL_MISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13750)
#define MX_DATA_EXCEL_MISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C137E0)
#define MX_DATA_EXCEL_MISSIONEXCEL_ENDMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C13130)
#define MX_DATA_EXCEL_MISSIONEXCEL_FINISHMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C13820)
#define MX_DATA_EXCEL_MISSIONEXCEL_FINISHSIZEPREFIXEDMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C13840)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MissionExcel_TypeDefinitionIndex = 18936;

	class MissionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MissionExcel* GetRootAsMissionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETROOTASMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MissionExcel* GetRootAsMissionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MissionExcel* arg)
		{
			return (return (::MX::Data::Excel::MissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MissionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETROOTASMISSIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MissionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MissionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_Category()
		{
			return (return (::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::UInt32 get_Description()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::MissionResetType* get_ResetType()
		{
			return (return (::FlatData::MissionResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_RESETTYPE_OFFSET))(nullptr);
		}

		::FlatData::MissionToastDisplayConditionType* get_ToastDisplayType()
		{
			return (return (::FlatData::MissionToastDisplayConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ToastImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetToastImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_ViewFlag()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_VIEWFLAG_OFFSET))(nullptr);
		}

		::System::Boolean get_Limit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_LIMIT_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EndDay()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_ENDDAY_OFFSET))(nullptr);
		}

		::System::String* get_StartableEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_STARTABLEENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartableEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETSTARTABLEENDDATEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_DateAutoRefer()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_DATEAUTOREFER_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 PreMissionId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_PREMISSIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PreMissionIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPreMissionIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::FlatData::SuddenMissionContentType* ContentTags(::System::Int32 arg)
		{
			return (return (::FlatData::SuddenMissionContentType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CONTENTTAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ContentTagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_CONTENTTAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetContentTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETCONTENTTAGSBYTES_OFFSET))(nullptr);
		}

		::System::String* ShortcutUI(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_SHORTCUTUI_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShortcutUILength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_ChallengeStageShortcut()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_CHALLENGESTAGESHORTCUT_OFFSET))(nullptr);
		}

		::FlatData::MissionCompleteConditionType* get_CompleteConditionType()
		{
			return (return (::FlatData::MissionCompleteConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CompleteConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 CompleteConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* CompleteConditionParameterTag(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterTagLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterTagBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET))(nullptr);
		}

		::System::String* get_RewardIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_REWARDICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETREWARDICONBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* MissionRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MissionRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 MissionRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMissionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::MissionCategory* arg, ::System::UInt32 arg, ::FlatData::MissionResetType* arg, ::FlatData::MissionToastDisplayConditionType* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ContentType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::TargetGroup* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatData::MissionCompleteConditionType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::MissionCategory*, ::System::UInt32, ::FlatData::MissionResetType*, ::FlatData::MissionToastDisplayConditionType*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::ContentType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatData::TargetGroup*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatData::MissionCompleteConditionType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CREATEMISSIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_STARTMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionResetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastDisplayType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionToastDisplayConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionToastDisplayConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddViewFlag(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDVIEWFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDENDDAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartableEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDSTARTABLEENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDateAutoRefer(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDDATEAUTOREFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDPREMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDTARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDACCOUNTLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDCONTENTTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateContentTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CREATECONTENTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartContentTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_STARTCONTENTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDSHORTCUTUI_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChallengeStageShortcut(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDCHALLENGESTAGESHORTCUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCompleteConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameterTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDREWARDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_ENDMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_FINISHMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCEL_FINISHSIZEPREFIXEDMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

