#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestErosionExcel; }
namespace FlatData { class ConquestErosionType; }
namespace FlatData { class ConquestConditionType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A53C10)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GETROOTASCONQUESTEROSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A53C20)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GETROOTASCONQUESTEROSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A53C80)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A53D10)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A53CE0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A53D30)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A53D80)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EROSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A53DD0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1A53E20)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASEALARM_OFFSET UNITYSDK_OFFSET(0x1A53E70)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A53EC0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_PHASESTARTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A53F10)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASESTARTCONDITIONTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A53F70)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GETPHASESTARTCONDITIONTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A53FB0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_PHASESTARTCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A53FD0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASESTARTCONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1A54020)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_PHASEBEFOREEXPOSECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A54060)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASEBEFOREEXPOSECONDITIONTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A540C0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GETPHASEBEFOREEXPOSECONDITIONTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A54100)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_PHASEBEFOREEXPOSECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A54120)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASEBEFOREEXPOSECONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1A54170)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EROSIONBATTLECONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A541B0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EROSIONBATTLECONDITIONPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A54200)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EROSIONBATTLECONDITIONPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A54250)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_CONQUESTREWARDID_OFFSET UNITYSDK_OFFSET(0x1A542A0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATECONQUESTEROSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A542F0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTCONQUESTEROSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A54850)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A54620)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A545F0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEROSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A547A0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASE_OFFSET UNITYSDK_OFFSET(0x1A54770)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASEALARM_OFFSET UNITYSDK_OFFSET(0x1A547D0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A54740)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASESTARTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A54710)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATEPHASESTARTCONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A54870)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTPHASESTARTCONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A54900)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASESTARTCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A546E0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATEPHASESTARTCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1A54940)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTPHASESTARTCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1A549D0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASEBEFOREEXPOSECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A546B0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATEPHASEBEFOREEXPOSECONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A54A10)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTPHASEBEFOREEXPOSECONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A54AA0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASEBEFOREEXPOSECONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A54680)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATEPHASEBEFOREEXPOSECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1A54AE0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTPHASEBEFOREEXPOSECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1A54B70)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEROSIONBATTLECONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A54650)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEROSIONBATTLECONDITIONPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A545C0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEROSIONBATTLECONDITIONPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A54590)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDCONQUESTREWARDID_OFFSET UNITYSDK_OFFSET(0x1A54560)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ENDCONQUESTEROSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A54800)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_FINISHCONQUESTEROSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A54BB0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_FINISHSIZEPREFIXEDCONQUESTEROSIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A54BD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestErosionExcel_TypeDefinitionIndex = 17203;

	class ConquestErosionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestErosionExcel* GetRootAsConquestErosionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestErosionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GETROOTASCONQUESTEROSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestErosionExcel* GetRootAsConquestErosionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestErosionExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestErosionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestErosionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GETROOTASCONQUESTEROSIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestErosionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestErosionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ConquestErosionType* get_ErosionType()
		{
			return (return (::FlatData::ConquestErosionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EROSIONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Phase()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Boolean get_PhaseAlarm()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASEALARM_OFFSET))(nullptr);
		}

		::System::Int32 get_StepIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_STEPINDEX_OFFSET))(nullptr);
		}

		::FlatData::ConquestConditionType* PhaseStartConditionType(::System::Int32 arg)
		{
			return (return (::FlatData::ConquestConditionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_PHASESTARTCONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PhaseStartConditionTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASESTARTCONDITIONTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPhaseStartConditionTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GETPHASESTARTCONDITIONTYPEBYTES_OFFSET))(nullptr);
		}

		::System::String* PhaseStartConditionParameter(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_PHASESTARTCONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PhaseStartConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASESTARTCONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		::FlatData::ConquestConditionType* PhaseBeforeExposeConditionType(::System::Int32 arg)
		{
			return (return (::FlatData::ConquestConditionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_PHASEBEFOREEXPOSECONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PhaseBeforeExposeConditionTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASEBEFOREEXPOSECONDITIONTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPhaseBeforeExposeConditionTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GETPHASEBEFOREEXPOSECONDITIONTYPEBYTES_OFFSET))(nullptr);
		}

		::System::String* PhaseBeforeExposeConditionParameter(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_PHASEBEFOREEXPOSECONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PhaseBeforeExposeConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_PHASEBEFOREEXPOSECONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ErosionBattleConditionParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EROSIONBATTLECONDITIONPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ErosionBattleConditionParcelUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EROSIONBATTLECONDITIONPARCELUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ErosionBattleConditionParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_EROSIONBATTLECONDITIONPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_GET_CONQUESTREWARDID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestErosionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ConquestErosionType* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ConquestErosionType*, ::System::Int32, ::System::Boolean, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATECONQUESTEROSIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestErosionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTCONQUESTEROSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddErosionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConquestErosionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConquestErosionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEROSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhase(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseAlarm(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASEALARM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDSTEPINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseStartConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASESTARTCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePhaseStartConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATEPHASESTARTCONDITIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPhaseStartConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTPHASESTARTCONDITIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseStartConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASESTARTCONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePhaseStartConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATEPHASESTARTCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPhaseStartConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTPHASESTARTCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseBeforeExposeConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASEBEFOREEXPOSECONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePhaseBeforeExposeConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATEPHASEBEFOREEXPOSECONDITIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPhaseBeforeExposeConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTPHASEBEFOREEXPOSECONDITIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseBeforeExposeConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDPHASEBEFOREEXPOSECONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePhaseBeforeExposeConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_CREATEPHASEBEFOREEXPOSECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPhaseBeforeExposeConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_STARTPHASEBEFOREEXPOSECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddErosionBattleConditionParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEROSIONBATTLECONDITIONPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddErosionBattleConditionParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEROSIONBATTLECONDITIONPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddErosionBattleConditionParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDEROSIONBATTLECONDITIONPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ADDCONQUESTREWARDID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestErosionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_ENDCONQUESTEROSIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestErosionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_FINISHCONQUESTEROSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestErosionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCEL_FINISHSIZEPREFIXEDCONQUESTEROSIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

