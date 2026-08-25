#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GuideMissionExcel; }
namespace FlatData { class MissionCategory; }
namespace FlatData { class MissionToastDisplayConditionType; }
namespace FlatData { class MissionCompleteConditionType; }
namespace FlatData { class Tag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B44FC0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETROOTASGUIDEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B44FD0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETROOTASGUIDEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B45030)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B450C0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B45090)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1B450E0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B45130)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1B45180)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1B451D0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_TABNUMBER_OFFSET UNITYSDK_OFFSET(0x1B45220)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B45270)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B452D0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B45310)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B45330)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1B45380)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B453D0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B45410)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_SHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1B45430)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET UNITYSDK_OFFSET(0x1B45480)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B454C0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B45510)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B45560)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1B455C0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1B45600)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1B45620)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET UNITYSDK_OFFSET(0x1B45680)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET UNITYSDK_OFFSET(0x1B456C0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_ISAUTOCLEARFORSCENARIO_OFFSET UNITYSDK_OFFSET(0x1B456E0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B45730)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B45790)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B457D0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B457F0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B45850)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B45890)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B458B0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B45910)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B45950)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEGUIDEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B45970)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTGUIDEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B46040)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B45D20)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B45CF0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B45F60)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1B45FC0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDTABNUMBER_OFFSET UNITYSDK_OFFSET(0x1B45CC0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDPREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B45F30)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B46060)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B460F0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B45F00)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1B45ED0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B45EA0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1B45E70)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1B46130)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1B461C0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B45E40)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B45C90)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B45E10)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1B46200)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1B46290)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1B45DE0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1B462D0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1B46360)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDISAUTOCLEARFORSCENARIO_OFFSET UNITYSDK_OFFSET(0x1B45F90)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B45DB0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B463A0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B46430)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B45D80)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B46470)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B46500)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B45D50)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B46540)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B465D0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ENDGUIDEMISSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B45FF0)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_FINISHGUIDEMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B46610)
#define MX_DATA_EXCEL_GUIDEMISSIONEXCEL_FINISHSIZEPREFIXEDGUIDEMISSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B46630)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GuideMissionExcel_TypeDefinitionIndex = 18142;

	class GuideMissionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GuideMissionExcel* GetRootAsGuideMissionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GuideMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETROOTASGUIDEMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GuideMissionExcel* GetRootAsGuideMissionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GuideMissionExcel* arg)
		{
			return (return (::MX::Data::Excel::GuideMissionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GuideMissionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETROOTASGUIDEMISSIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GuideMissionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GuideMissionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_Category()
		{
			return (return (::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int64 get_TabNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_TABNUMBER_OFFSET))(nullptr);
		}

		::System::Int64 PreMissionId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_PREMISSIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PreMissionIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_PREMISSIONIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPreMissionIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETPREMISSIONIDBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Description()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::MissionToastDisplayConditionType* get_ToastDisplayType()
		{
			return (return (::FlatData::MissionToastDisplayConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_TOASTDISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ToastImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_TOASTIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetToastImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETTOASTIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* ShortcutUI(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_SHORTCUTUI_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShortcutUILength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_SHORTCUTUILENGTH_OFFSET))(nullptr);
		}

		::FlatData::MissionCompleteConditionType* get_CompleteConditionType()
		{
			return (return (::FlatData::MissionCompleteConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_COMPLETECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CompleteConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_COMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 CompleteConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_COMPLETECONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* CompleteConditionParameterTag(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_COMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteConditionParameterTagLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_COMPLETECONDITIONPARAMETERTAGLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteConditionParameterTagBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETCOMPLETECONDITIONPARAMETERTAGBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAutoClearForScenario()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_ISAUTOCLEARFORSCENARIO_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* MissionRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_MISSIONREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_MISSIONREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETMISSIONREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MissionRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_MISSIONREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_MISSIONREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETMISSIONREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 MissionRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_MISSIONREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MissionRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GET_MISSIONREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_GETMISSIONREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGuideMissionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::MissionCategory* arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::FlatData::MissionToastDisplayConditionType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::MissionCompleteConditionType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::MissionCategory*, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::FlatData::MissionToastDisplayConditionType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::MissionCompleteConditionType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEGUIDEMISSIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGuideMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTGUIDEMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTabNumber(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDTABNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDPREMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPreMissionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTPREMISSIONIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastDisplayType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionToastDisplayConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionToastDisplayConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDTOASTDISPLAYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDTOASTIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDSHORTCUTUI_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATESHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShortcutUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTSHORTCUTUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MissionCompleteConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCOMPLETECONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCOMPLETECONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteConditionParameterTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDCOMPLETECONDITIONPARAMETERTAG_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATECOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCompleteConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTCOMPLETECONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsAutoClearForScenario(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDISAUTOCLEARFORSCENARIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDMISSIONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTMISSIONREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDMISSIONREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTMISSIONREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ADDMISSIONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_CREATEMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMissionRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_STARTMISSIONREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGuideMissionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_ENDGUIDEMISSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGuideMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_FINISHGUIDEMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGuideMissionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONEXCEL_FINISHSIZEPREFIXEDGUIDEMISSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

