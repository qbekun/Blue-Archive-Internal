#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameMissionExcel; }
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

#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC0D60)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETROOTASMINIGAMEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC0D70)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETROOTASMINIGAMEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC0DD0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BC0E60)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BC0E30)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BC0E80)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC0ED0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BC0F20)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1BC0F70)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETGROUPNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BC0FB0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1BC0FD0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BC1020)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_RESETTYPE_OFFSET UNITYSDK_OFFSET(0x1BC1070)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1BC10C0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1BC1110)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1150)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_VIEWFLAG_OFFSET UNITYSDK_OFFSET(0x1BC1170)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BC11C0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1BC1210)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC1270)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BC12B0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1BC12D0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1BC1320)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_SHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1BC1370)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET UNITYSDK_OFFSET(0x1BC13C0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BC1400)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_ISCOMPLETEEXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x1BC1450)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC14A0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BC14F0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC1550)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1590)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1BC15B0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC1610)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1650)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x1BC1670)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETREWARDICONBYTES_OFFSET UNITYSDK_OFFSET(0x1BC16B0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_COMPLETECONDITIONMISSIONID_OFFSET UNITYSDK_OFFSET(0x1BC16D0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONMISSIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC1730)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCOMPLETECONDITIONMISSIONIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1770)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC1790)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BC17E0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1BC1840)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1880)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BC18A0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC1900)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1940)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BC1960)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC19C0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1A00)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CONDITIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BC1A20)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_CONDITIONREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1BC1A80)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCONDITIONREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1AC0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CONDITIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BC1AE0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_CONDITIONREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC1B40)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCONDITIONREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1B80)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CONDITIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BC1BA0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_CONDITIONREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC1C00)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCONDITIONREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BC1C40)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEMINIGAMEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC1C60)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTMINIGAMEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC2710)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1BC2270)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC2240)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1BC2210)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1BC2630)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1BC2600)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BC25D0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1BC25A0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1BC2570)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1BC2540)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDVIEWFLAG_OFFSET UNITYSDK_OFFSET(0x1BC2690)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BC21E0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDPREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1BC2510)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2730)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC27C0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1BC24E0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1BC21B0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1BC24B0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2800)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2890)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BC2480)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDISCOMPLETEEXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x1BC2660)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC2180)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BC2450)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC28D0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2960)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1BC2420)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC29A0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2A30)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDREWARDICON_OFFSET UNITYSDK_OFFSET(0x1BC23F0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONMISSIONID_OFFSET UNITYSDK_OFFSET(0x1BC23C0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECOMPLETECONDITIONMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2A70)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCOMPLETECONDITIONMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2B00)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC2150)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BC2390)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2B40)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2BD0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BC2360)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2C10)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2CA0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BC2330)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2CE0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2D70)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCONDITIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BC2300)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECONDITIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2DB0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCONDITIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2E40)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCONDITIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BC22D0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECONDITIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2E80)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCONDITIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2F10)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCONDITIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BC22A0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECONDITIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2F50)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCONDITIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BC2FE0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ENDMINIGAMEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC26C0)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_FINISHMINIGAMEMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC3020)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_FINISHSIZEPREFIXEDMINIGAMEMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC3040)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameMissionExcel_TypeDefinitionIndex = 18695;

	class MiniGameMissionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameMissionExcel* GetRootAsMiniGameMissionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETROOTASMINIGAMEMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameMissionExcel* GetRootAsMiniGameMissionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameMissionExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameMissionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETROOTASMINIGAMEMISSIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameMissionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameMissionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::String* get_GroupName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_GROUPNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroupNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETGROUPNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_Category()
		{
			return (return (::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::UInt32 get_Description()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::MissionResetType* get_ResetType()
		{
			return (return (::FlatData::MissionResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_RESETTYPE_OFFSET))(nullptr);
		}

		::FlatData::MissionToastDisplayConditionType* get_ToastDisplayType()
		{
			return (return (::FlatData::MissionToastDisplayConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ToastImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetToastImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_ViewFlag()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_VIEWFLAG_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 PreMissionId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_PREMISSIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PreMissionIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPreMissionIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::String* ShortcutUI(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_SHORTCUTUI_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShortcutUILength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET))(nullptr);
		}

		::FlatData::MissionCompleteConditionType* get_CompleteConditionType()
		{
			return (return (::FlatData::MissionCompleteConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCompleteExtensionTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_ISCOMPLETEEXTENSIONTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_CompleteConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 CompleteConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* CompleteConditionParameterTag(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterTagLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterTagBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET))(nullptr);
		}

		::System::String* get_RewardIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_REWARDICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETREWARDICONBYTES_OFFSET))(nullptr);
		}

		::System::Int64 CompleteConditionMissionId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_COMPLETECONDITIONMISSIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionMissionIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONMISSIONIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionMissionIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCOMPLETECONDITIONMISSIONIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CompleteConditionMissionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_COMPLETECONDITIONMISSIONCOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* MissionRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MissionRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 MissionRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ConditionRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CONDITIONREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_CONDITIONREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCONDITIONREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ConditionRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CONDITIONREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_CONDITIONREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCONDITIONREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 ConditionRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CONDITIONREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GET_CONDITIONREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_GETCONDITIONREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameMissionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::MissionCategory* arg, ::System::UInt32 arg, ::FlatData::MissionResetType* arg, ::FlatData::MissionToastDisplayConditionType* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::TargetGroup* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::MissionCompleteConditionType* arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::MissionCategory*, ::System::UInt32, ::FlatData::MissionResetType*, ::FlatData::MissionToastDisplayConditionType*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatData::TargetGroup*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatData::MissionCompleteConditionType*, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEMINIGAMEMISSIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTMINIGAMEMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDGROUPNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionResetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastDisplayType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionToastDisplayConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionToastDisplayConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddViewFlag(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDVIEWFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDPREMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDTARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDACCOUNTLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDSHORTCUTUI_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCompleteConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsCompleteExtensionTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDISCOMPLETEEXTENSIONTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameterTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDREWARDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECOMPLETECONDITIONMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCOMPLETECONDITIONMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionMissionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCOMPLETECONDITIONMISSIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCONDITIONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECONDITIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCONDITIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCONDITIONREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECONDITIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCONDITIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ADDCONDITIONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_CREATECONDITIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_STARTCONDITIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_ENDMINIGAMEMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_FINISHMINIGAMEMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCEL_FINISHSIZEPREFIXEDMINIGAMEMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

