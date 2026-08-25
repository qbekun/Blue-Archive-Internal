#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentMissionExcel; }
namespace FlatData { class MissionCategory; }
namespace FlatData { class MissionResetType; }
namespace FlatData { class MissionToastDisplayConditionType; }
namespace FlatData { class TargetGroup; }
namespace FlatData { class MissionCompleteConditionType; }
namespace FlatData { class Tag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF0A20)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETROOTASEVENTCONTENTMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF0A30)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETROOTASEVENTCONTENTMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF0A90)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AF0B20)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AF0AF0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AF0B40)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF0B90)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1AF0BE0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1AF0C30)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETGROUPNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF0C70)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1AF0C90)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AF0CE0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_RESETTYPE_OFFSET UNITYSDK_OFFSET(0x1AF0D30)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1AF0D80)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF0DD0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF0E10)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_VIEWFLAG_OFFSET UNITYSDK_OFFSET(0x1AF0E30)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1AF0E80)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1AF0ED0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF0F30)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AF0F70)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1AF0F90)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1AF0FE0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_SHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1AF1030)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET UNITYSDK_OFFSET(0x1AF1080)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CHALLENGESTAGESHORTCUT_OFFSET UNITYSDK_OFFSET(0x1AF10C0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF1110)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_ISCOMPLETEEXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x1AF1160)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF11B0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AF1200)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF1260)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1AF12A0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1AF12C0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF1320)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET UNITYSDK_OFFSET(0x1AF1360)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x1AF1380)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETREWARDICONBYTES_OFFSET UNITYSDK_OFFSET(0x1AF13C0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_COMPLETECONDITIONMISSIONID_OFFSET UNITYSDK_OFFSET(0x1AF13E0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONMISSIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF1440)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCOMPLETECONDITIONMISSIONIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AF1480)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF14A0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AF14F0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AF1550)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF1590)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AF15B0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF1610)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AF1650)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AF1670)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF16D0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AF1710)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CONDITIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AF1730)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CONDITIONREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AF1790)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCONDITIONREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF17D0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CONDITIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AF17F0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CONDITIONREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF1850)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCONDITIONREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AF1890)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CONDITIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AF18B0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CONDITIONREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF1910)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCONDITIONREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AF1950)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEEVENTCONTENTMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF1970)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTEVENTCONTENTMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF2470)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AF1FD0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF1FA0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1AF1F70)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1AF2390)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1AF2360)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AF2330)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1AF2300)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1AF22D0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF22A0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDVIEWFLAG_OFFSET UNITYSDK_OFFSET(0x1AF23F0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1AF1F40)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDPREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1AF2270)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2490)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2520)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1AF2240)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1AF1F10)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1AF2210)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2560)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF25F0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCHALLENGESTAGESHORTCUT_OFFSET UNITYSDK_OFFSET(0x1AF1EE0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF21E0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDISCOMPLETEEXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x1AF23C0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF1EB0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AF21B0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2630)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF26C0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1AF2180)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2700)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2790)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDREWARDICON_OFFSET UNITYSDK_OFFSET(0x1AF2150)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONMISSIONID_OFFSET UNITYSDK_OFFSET(0x1AF2120)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECOMPLETECONDITIONMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF27D0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCOMPLETECONDITIONMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2860)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF1E80)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AF20F0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF28A0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2930)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AF20C0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2970)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A00)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AF2090)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A40)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2AD0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCONDITIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AF2060)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECONDITIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2B10)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCONDITIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2BA0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCONDITIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AF2030)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECONDITIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2BE0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCONDITIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2C70)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCONDITIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AF2000)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECONDITIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2CB0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCONDITIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AF2D40)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ENDEVENTCONTENTMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF2420)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_FINISHEVENTCONTENTMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF2D80)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF2DA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMissionExcel_TypeDefinitionIndex = 17778;

	class EventContentMissionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentMissionExcel* GetRootAsEventContentMissionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETROOTASEVENTCONTENTMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentMissionExcel* GetRootAsEventContentMissionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentMissionExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentMissionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETROOTASEVENTCONTENTMISSIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentMissionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMissionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::String* get_GroupName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_GROUPNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroupNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETGROUPNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_Category()
		{
			return (return (::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::UInt32 get_Description()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::MissionResetType* get_ResetType()
		{
			return (return (::FlatData::MissionResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_RESETTYPE_OFFSET))(nullptr);
		}

		::FlatData::MissionToastDisplayConditionType* get_ToastDisplayType()
		{
			return (return (::FlatData::MissionToastDisplayConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ToastImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetToastImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_ViewFlag()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_VIEWFLAG_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 PreMissionId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_PREMISSIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PreMissionIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPreMissionIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::String* ShortcutUI(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_SHORTCUTUI_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShortcutUILength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_ChallengeStageShortcut()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CHALLENGESTAGESHORTCUT_OFFSET))(nullptr);
		}

		::FlatData::MissionCompleteConditionType* get_CompleteConditionType()
		{
			return (return (::FlatData::MissionCompleteConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCompleteExtensionTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_ISCOMPLETEEXTENSIONTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_CompleteConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 CompleteConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* CompleteConditionParameterTag(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterTagLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterTagBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET))(nullptr);
		}

		::System::String* get_RewardIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_REWARDICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETREWARDICONBYTES_OFFSET))(nullptr);
		}

		::System::Int64 CompleteConditionMissionId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_COMPLETECONDITIONMISSIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionMissionIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONMISSIONIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionMissionIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCOMPLETECONDITIONMISSIONIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CompleteConditionMissionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_COMPLETECONDITIONMISSIONCOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* MissionRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MissionRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 MissionRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ConditionRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CONDITIONREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CONDITIONREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCONDITIONREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ConditionRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CONDITIONREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CONDITIONREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCONDITIONREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 ConditionRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CONDITIONREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GET_CONDITIONREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_GETCONDITIONREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentMissionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::MissionCategory* arg, ::System::UInt32 arg, ::FlatData::MissionResetType* arg, ::FlatData::MissionToastDisplayConditionType* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::TargetGroup* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatData::MissionCompleteConditionType* arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::MissionCategory*, ::System::UInt32, ::FlatData::MissionResetType*, ::FlatData::MissionToastDisplayConditionType*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatData::TargetGroup*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatData::MissionCompleteConditionType*, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEEVENTCONTENTMISSIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTEVENTCONTENTMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDGROUPNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionResetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastDisplayType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionToastDisplayConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionToastDisplayConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddViewFlag(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDVIEWFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDPREMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDTARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDACCOUNTLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDSHORTCUTUI_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChallengeStageShortcut(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCHALLENGESTAGESHORTCUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCompleteConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsCompleteExtensionTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDISCOMPLETEEXTENSIONTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameterTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDREWARDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECOMPLETECONDITIONMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCOMPLETECONDITIONMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionMissionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCOMPLETECONDITIONMISSIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCONDITIONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECONDITIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCONDITIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCONDITIONREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECONDITIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCONDITIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ADDCONDITIONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_CREATECONDITIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_STARTCONDITIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_ENDEVENTCONTENTMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_FINISHEVENTCONTENTMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

