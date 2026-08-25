#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestMapExcel; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class ConquestConditionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5EF10)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETROOTASCONQUESTMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5EF20)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETROOTASCONQUESTMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5EF80)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A5F010)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A5EFE0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5F030)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x1A5F080)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A5F0C0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_MAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1A5F0E0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A5F130)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_CONQUESTMAP_OFFSET UNITYSDK_OFFSET(0x1A5F180)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETCONQUESTMAPBYTES_OFFSET UNITYSDK_OFFSET(0x1A5F1C0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A5F1E0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_STEPOPENCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A5F230)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPOPENCONDITIONTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A5F290)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETSTEPOPENCONDITIONTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A5F2D0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_STEPOPENCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A5F2F0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPOPENCONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1A5F340)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_MAPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F380)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETMAPGOALLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1A5F3C0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F3E0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETSTEPGOALLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1A5F420)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F440)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETSTEPNAMELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1A5F480)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_CONQUESTMAPBG_OFFSET UNITYSDK_OFFSET(0x1A5F4A0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETCONQUESTMAPBGBYTES_OFFSET UNITYSDK_OFFSET(0x1A5F4E0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_CAMERASETTINGID_OFFSET UNITYSDK_OFFSET(0x1A5F500)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_CREATECONQUESTMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5F550)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_STARTCONQUESTMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5FA50)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5F7F0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0x1A5F9D0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDMAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1A5F9A0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A5F970)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDCONQUESTMAP_OFFSET UNITYSDK_OFFSET(0x1A5F940)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A5F7C0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPOPENCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A5F910)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_CREATESTEPOPENCONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5FA70)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_STARTSTEPOPENCONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5FB00)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPOPENCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A5F8E0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_CREATESTEPOPENCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5FB40)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_STARTSTEPOPENCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5FBD0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDMAPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F8B0)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F880)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F850)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDCONQUESTMAPBG_OFFSET UNITYSDK_OFFSET(0x1A5F820)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDCAMERASETTINGID_OFFSET UNITYSDK_OFFSET(0x1A5F790)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_ENDCONQUESTMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5FA00)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_FINISHCONQUESTMAPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5FC10)
#define MX_DATA_EXCEL_CONQUESTMAPEXCEL_FINISHSIZEPREFIXEDCONQUESTMAPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5FC30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestMapExcel_TypeDefinitionIndex = 17247;

	class ConquestMapExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestMapExcel* GetRootAsConquestMapExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestMapExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETROOTASCONQUESTMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestMapExcel* GetRootAsConquestMapExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestMapExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestMapExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestMapExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETROOTASCONQUESTMAPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestMapExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestMapExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_MapDifficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_MAPDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int32 get_StepIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPINDEX_OFFSET))(nullptr);
		}

		::System::String* get_ConquestMap()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_CONQUESTMAP_OFFSET))(nullptr);
		}

		Il2CppObject* GetConquestMapBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETCONQUESTMAPBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_StepEnterScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPENTERSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::FlatData::ConquestConditionType* StepOpenConditionType(::System::Int32 arg)
		{
			return (return (::FlatData::ConquestConditionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_STEPOPENCONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StepOpenConditionTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPOPENCONDITIONTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStepOpenConditionTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETSTEPOPENCONDITIONTYPEBYTES_OFFSET))(nullptr);
		}

		::System::String* StepOpenConditionParameter(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_STEPOPENCONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StepOpenConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPOPENCONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		::System::String* get_MapGoalLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_MAPGOALLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetMapGoalLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETMAPGOALLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StepGoalLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPGOALLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStepGoalLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETSTEPGOALLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StepNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_STEPNAMELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStepNameLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETSTEPNAMELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ConquestMapBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_CONQUESTMAPBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetConquestMapBGBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GETCONQUESTMAPBGBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CameraSettingId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_GET_CAMERASETTINGID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestMapExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::StageDifficulty* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::StageDifficulty*, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_CREATECONQUESTMAPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestMapExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_STARTCONQUESTMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDDEVNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDMAPDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestMap(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDCONQUESTMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPENTERSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepOpenConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPOPENCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStepOpenConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_CREATESTEPOPENCONDITIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStepOpenConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_STARTSTEPOPENCONDITIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepOpenConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPOPENCONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStepOpenConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_CREATESTEPOPENCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStepOpenConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_STARTSTEPOPENCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapGoalLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDMAPGOALLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepGoalLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPGOALLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepNameLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDSTEPNAMELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestMapBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDCONQUESTMAPBG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCameraSettingId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ADDCAMERASETTINGID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestMapExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_ENDCONQUESTMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestMapExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_FINISHCONQUESTMAPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestMapExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTMAPEXCEL_FINISHSIZEPREFIXEDCONQUESTMAPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

