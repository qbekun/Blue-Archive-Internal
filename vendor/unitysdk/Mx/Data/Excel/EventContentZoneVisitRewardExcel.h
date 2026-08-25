#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentZoneVisitRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B163B0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETROOTASEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B163C0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETROOTASEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B16420)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B164B0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B16480)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B164D0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_EVENTCONTENTLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B16520)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x1B16570)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B165B0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B165D0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_CHARACTERDEVNAME_OFFSET UNITYSDK_OFFSET(0x1B16620)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETCHARACTERDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B16660)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_VISITREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B16680)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_VISITREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B166E0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETVISITREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B16720)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_VISITREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B16740)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_VISITREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B167A0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETVISITREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B167E0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_VISITREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B16800)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_VISITREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B16860)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETVISITREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B168A0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_VISITREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1B168C0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_VISITREWARDPROBLENGTH_OFFSET UNITYSDK_OFFSET(0x1B16920)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETVISITREWARDPROBBYTES_OFFSET UNITYSDK_OFFSET(0x1B16960)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B16980)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B16D20)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B16B80)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDEVENTCONTENTLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B16B50)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0x1B16CA0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B16B20)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDCHARACTERDEVNAME_OFFSET UNITYSDK_OFFSET(0x1B16C70)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDVISITREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B16C40)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEVISITREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B16D40)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTVISITREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B16DD0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDVISITREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B16C10)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEVISITREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B16E10)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTVISITREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B16EA0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDVISITREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B16BE0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEVISITREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B16EE0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTVISITREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B16F70)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDVISITREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1B16BB0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEVISITREWARDPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x1B16FB0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTVISITREWARDPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x1B17040)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ENDEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B16CD0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_FINISHEVENTCONTENTZONEVISITREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B17080)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTZONEVISITREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B170A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentZoneVisitRewardExcel_TypeDefinitionIndex = 17933;

	class EventContentZoneVisitRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentZoneVisitRewardExcel* GetRootAsEventContentZoneVisitRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentZoneVisitRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETROOTASEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentZoneVisitRewardExcel* GetRootAsEventContentZoneVisitRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentZoneVisitRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentZoneVisitRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentZoneVisitRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETROOTASEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentZoneVisitRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentZoneVisitRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentLocationId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_EVENTCONTENTLOCATIONID_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::String* get_CharacterDevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_CHARACTERDEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacterDevNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETCHARACTERDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* VisitRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_VISITREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VisitRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_VISITREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVisitRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETVISITREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 VisitRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_VISITREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VisitRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_VISITREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVisitRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETVISITREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 VisitRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_VISITREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VisitRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_VISITREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVisitRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETVISITREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 VisitRewardProb(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_VISITREWARDPROB_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VisitRewardProbLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GET_VISITREWARDPROBLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVisitRewardProbBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_GETVISITREWARDPROBBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentZoneVisitRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentZoneVisitRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentLocationId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDEVENTCONTENTLOCATIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDDEVNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDCHARACTERDEVNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVisitRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDVISITREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVisitRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEVISITREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVisitRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTVISITREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVisitRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDVISITREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVisitRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEVISITREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVisitRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTVISITREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVisitRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDVISITREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVisitRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEVISITREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVisitRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTVISITREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVisitRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ADDVISITREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVisitRewardProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_CREATEVISITREWARDPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVisitRewardProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_STARTVISITREWARDPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentZoneVisitRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_ENDEVENTCONTENTZONEVISITREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentZoneVisitRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_FINISHEVENTCONTENTZONEVISITREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentZoneVisitRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTZONEVISITREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

