#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WelcomeCampaignMissionExcel; }
namespace FlatData { class MissionCategory; }
namespace FlatData { class MissionToastDisplayConditionType; }
namespace FlatData { class MissionCompleteConditionType; }
namespace FlatData { class Tag; }
namespace FlatData { class MissionCompleteUIPrefabType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC2770)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETROOTASWELCOMECAMPAIGNMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC2780)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETROOTASWELCOMECAMPAIGNMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC27E0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CC2870)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CC2840)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CC2890)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC28E0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1CC2930)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1CC2980)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1CC29D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1CC2A20)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CC2A80)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CC2AC0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1CC2AE0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1CC2B30)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1CC2B80)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1CC2BC0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_SHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1CC2BE0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET UNITYSDK_OFFSET(0x1CC2C30)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONDAYBLOCK_OFFSET UNITYSDK_OFFSET(0x1CC2C70)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CC2CC0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC2D10)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1CC2D60)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1CC2DC0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1CC2E00)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1CC2E20)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET UNITYSDK_OFFSET(0x1CC2E80)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET UNITYSDK_OFFSET(0x1CC2EC0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERUIPREFABTYPE_OFFSET UNITYSDK_OFFSET(0x1CC2EE0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CC2F30)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1CC2F90)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC2FD0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1CC2FF0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CC3050)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CC3090)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CC30B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CC3110)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1CC3150)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEWELCOMECAMPAIGNMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC3170)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTWELCOMECAMPAIGNMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC3890)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0x1CC3510)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CC34E0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1CC37B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1CC3810)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDDAY_OFFSET UNITYSDK_OFFSET(0x1CC3780)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDPREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1CC3750)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC38B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3940)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1CC3720)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1CC36F0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1CC36C0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1CC3690)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3980)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3A10)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONDAYBLOCK_OFFSET UNITYSDK_OFFSET(0x1CC37E0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CC3660)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC34B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1CC3630)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3A50)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3AE0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1CC3600)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3B20)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3BB0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERUIPREFABTYPE_OFFSET UNITYSDK_OFFSET(0x1CC35D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CC35A0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3BF0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3C80)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1CC3570)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3CC0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3D50)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CC3540)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3D90)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC3E20)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ENDWELCOMECAMPAIGNMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC3840)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_FINISHWELCOMECAMPAIGNMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC3E60)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC3E80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignMissionExcel_TypeDefinitionIndex = 19771;

	class WelcomeCampaignMissionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignMissionExcel* GetRootAsWelcomeCampaignMissionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETROOTASWELCOMECAMPAIGNMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignMissionExcel* GetRootAsWelcomeCampaignMissionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WelcomeCampaignMissionExcel* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WelcomeCampaignMissionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETROOTASWELCOMECAMPAIGNMISSIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignMissionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignMissionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_Category()
		{
			return (return (::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int32 get_Day()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_DAY_OFFSET))(nullptr);
		}

		::System::Int64 PreMissionId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_PREMISSIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PreMissionIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPreMissionIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Description()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::MissionToastDisplayConditionType* get_ToastDisplayType()
		{
			return (return (::FlatData::MissionToastDisplayConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ToastImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetToastImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* ShortcutUI(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_SHORTCUTUI_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShortcutUILength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_CompleteConditionDayBlock()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONDAYBLOCK_OFFSET))(nullptr);
		}

		::FlatData::MissionCompleteConditionType* get_CompleteConditionType()
		{
			return (return (::FlatData::MissionCompleteConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CompleteConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 CompleteConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* CompleteConditionParameterTag(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterTagLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterTagBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET))(nullptr);
		}

		::FlatData::MissionCompleteUIPrefabType* get_CompleteConditionParameterUIPrefabType()
		{
			return (return (::FlatData::MissionCompleteUIPrefabType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERUIPREFABTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* MissionRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MissionRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 MissionRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWelcomeCampaignMissionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::MissionCategory* arg, ::System::Boolean arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::FlatData::MissionToastDisplayConditionType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::FlatData::MissionCompleteConditionType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::MissionCompleteUIPrefabType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::MissionCategory*, ::System::Boolean, ::System::Int32, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::FlatData::MissionToastDisplayConditionType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::FlatData::MissionCompleteConditionType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::MissionCompleteUIPrefabType*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEWELCOMECAMPAIGNMISSIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWelcomeCampaignMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTWELCOMECAMPAIGNMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDDAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDPREMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastDisplayType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionToastDisplayConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionToastDisplayConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDSHORTCUTUI_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionDayBlock(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONDAYBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCompleteConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameterTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameterUIPrefabType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCompleteUIPrefabType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCompleteUIPrefabType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERUIPREFABTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWelcomeCampaignMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_ENDWELCOMECAMPAIGNMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWelcomeCampaignMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_FINISHWELCOMECAMPAIGNMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWelcomeCampaignMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

