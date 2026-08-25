#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BattlePassMissionExcel; }
namespace FlatData { class MissionCategory; }
namespace FlatData { class MissionResetType; }
namespace FlatData { class MissionToastDisplayConditionType; }
namespace FlatData { class MissionCompleteConditionType; }
namespace FlatData { class Tag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19E8280)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETROOTASBATTLEPASSMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19E8290)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETROOTASBATTLEPASSMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19E82F0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19E8380)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19E8350)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E83A0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19E83F0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x19E8440)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x19E8490)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19E84F0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET UNITYSDK_OFFSET(0x19E8530)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19E8550)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_RESETTYPE_OFFSET UNITYSDK_OFFSET(0x19E85A0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x19E85F0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19E8640)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19E8680)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_VIEWFLAG_OFFSET UNITYSDK_OFFSET(0x19E86A0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x19E86F0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_SHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x19E8740)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET UNITYSDK_OFFSET(0x19E8790)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_CHALLENGESTAGESHORTCUT_OFFSET UNITYSDK_OFFSET(0x19E87D0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x19E8820)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19E8870)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x19E88C0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x19E8920)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x19E8960)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x19E8980)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET UNITYSDK_OFFSET(0x19E89E0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET UNITYSDK_OFFSET(0x19E8A20)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_BATTLEPASSEXPAMOUNT_OFFSET UNITYSDK_OFFSET(0x19E8A40)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATEBATTLEPASSMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19E8A90)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTBATTLEPASSMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19E9100)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E8E40)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19E8E10)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x19E9050)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDPREMISSIONID_OFFSET UNITYSDK_OFFSET(0x19E9020)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19E9120)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19E91B0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19E8FF0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDRESETTYPE_OFFSET UNITYSDK_OFFSET(0x19E8FC0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x19E8F90)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19E8F60)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDVIEWFLAG_OFFSET UNITYSDK_OFFSET(0x19E9080)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x19E8DE0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x19E8F30)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x19E91F0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x19E9280)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCHALLENGESTAGESHORTCUT_OFFSET UNITYSDK_OFFSET(0x19E8DB0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x19E8F00)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19E8D80)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x19E8ED0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x19E92C0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x19E9350)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x19E8EA0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x19E9390)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x19E9420)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDBATTLEPASSEXPAMOUNT_OFFSET UNITYSDK_OFFSET(0x19E8E70)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ENDBATTLEPASSMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19E90B0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_FINISHBATTLEPASSMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E9460)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_FINISHSIZEPREFIXEDBATTLEPASSMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E9480)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassMissionExcel_TypeDefinitionIndex = 16765;

	class BattlePassMissionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BattlePassMissionExcel* GetRootAsBattlePassMissionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETROOTASBATTLEPASSMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BattlePassMissionExcel* GetRootAsBattlePassMissionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BattlePassMissionExcel* arg)
		{
			return (return (::MX::Data::Excel::BattlePassMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BattlePassMissionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETROOTASBATTLEPASSMISSIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BattlePassMissionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassMissionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_Category()
		{
			return (return (::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Int64 PreMissionId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_PREMISSIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PreMissionIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPreMissionIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Description()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::MissionResetType* get_ResetType()
		{
			return (return (::FlatData::MissionResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_RESETTYPE_OFFSET))(nullptr);
		}

		::FlatData::MissionToastDisplayConditionType* get_ToastDisplayType()
		{
			return (return (::FlatData::MissionToastDisplayConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ToastImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetToastImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_ViewFlag()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_VIEWFLAG_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::String* ShortcutUI(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_SHORTCUTUI_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShortcutUILength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_ChallengeStageShortcut()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_CHALLENGESTAGESHORTCUT_OFFSET))(nullptr);
		}

		::FlatData::MissionCompleteConditionType* get_CompleteConditionType()
		{
			return (return (::FlatData::MissionCompleteConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CompleteConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 CompleteConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* CompleteConditionParameterTag(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterTagLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterTagBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_BattlePassExpAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_GET_BATTLEPASSEXPAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBattlePassMissionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::MissionCategory* arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::FlatData::MissionResetType* arg, ::FlatData::MissionToastDisplayConditionType* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatData::MissionCompleteConditionType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::MissionCategory*, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::FlatData::MissionResetType*, ::FlatData::MissionToastDisplayConditionType*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatData::MissionCompleteConditionType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATEBATTLEPASSMISSIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBattlePassMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTBATTLEPASSMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddBattlePassId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDBATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDPREMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionResetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastDisplayType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionToastDisplayConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionToastDisplayConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddViewFlag(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDVIEWFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDSHORTCUTUI_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChallengeStageShortcut(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCHALLENGESTAGESHORTCUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCompleteConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameterTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattlePassExpAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ADDBATTLEPASSEXPAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBattlePassMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_ENDBATTLEPASSMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBattlePassMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_FINISHBATTLEPASSMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBattlePassMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCEL_FINISHSIZEPREFIXEDBATTLEPASSMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

