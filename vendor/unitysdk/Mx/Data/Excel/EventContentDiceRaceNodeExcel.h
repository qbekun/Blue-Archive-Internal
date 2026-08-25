#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentDiceRaceNodeExcel; }
namespace FlatData { class EventContentDiceRaceNodeType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABFB70)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETROOTASEVENTCONTENTDICERACENODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABFB80)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETROOTASEVENTCONTENTDICERACENODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABFBE0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1ABFC70)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1ABFC40)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABFC90)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1ABFCE0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_EVENTCONTENTDICERACENODETYPE_OFFSET UNITYSDK_OFFSET(0x1ABFD30)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_MOVEFORWARDTYPEARG_OFFSET UNITYSDK_OFFSET(0x1ABFD80)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1ABFDD0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1ABFE30)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1ABFE70)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1ABFE90)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1ABFEF0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1ABFF30)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1ABFF50)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1ABFFB0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1ABFFF0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_CREATEEVENTCONTENTDICERACENODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC0010)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_STARTEVENTCONTENTDICERACENODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC0300)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AC0190)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDNODEID_OFFSET UNITYSDK_OFFSET(0x1AC0160)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDEVENTCONTENTDICERACENODETYPE_OFFSET UNITYSDK_OFFSET(0x1AC0280)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDMOVEFORWARDTYPEARG_OFFSET UNITYSDK_OFFSET(0x1AC0250)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AC0220)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC0320)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC03B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AC01F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC03F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC0480)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AC01C0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC04C0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AC0550)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ENDEVENTCONTENTDICERACENODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC02B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_FINISHEVENTCONTENTDICERACENODEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AC0590)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACENODEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AC05B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDiceRaceNodeExcel_TypeDefinitionIndex = 17678;

	class EventContentDiceRaceNodeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceNodeExcel* GetRootAsEventContentDiceRaceNodeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceNodeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETROOTASEVENTCONTENTDICERACENODEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceNodeExcel* GetRootAsEventContentDiceRaceNodeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentDiceRaceNodeExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceNodeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentDiceRaceNodeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETROOTASEVENTCONTENTDICERACENODEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceNodeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceNodeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_NODEID_OFFSET))(nullptr);
		}

		::FlatData::EventContentDiceRaceNodeType* get_EventContentDiceRaceNodeType()
		{
			return (return (::FlatData::EventContentDiceRaceNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_EVENTCONTENTDICERACENODETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_MoveForwardTypeArg()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_MOVEFORWARDTYPEARG_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_GETREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentDiceRaceNodeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::EventContentDiceRaceNodeType* arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::EventContentDiceRaceNodeType*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_CREATEEVENTCONTENTDICERACENODEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentDiceRaceNodeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_STARTEVENTCONTENTDICERACENODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDNODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentDiceRaceNodeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentDiceRaceNodeType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentDiceRaceNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDEVENTCONTENTDICERACENODETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMoveForwardTypeArg(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDMOVEFORWARDTYPEARG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentDiceRaceNodeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_ENDEVENTCONTENTDICERACENODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentDiceRaceNodeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_FINISHEVENTCONTENTDICERACENODEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentDiceRaceNodeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACENODEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACENODEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

