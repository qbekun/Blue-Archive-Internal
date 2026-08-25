#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentTreasureRoundExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B13160)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETROOTASEVENTCONTENTTREASUREROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B13170)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETROOTASEVENTCONTENTTREASUREROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B131D0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B13260)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B13230)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B13280)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_TREASUREROUND_OFFSET UNITYSDK_OFFSET(0x1B132D0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_TREASUREROUNDSIZE_OFFSET UNITYSDK_OFFSET(0x1B13320)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_TREASUREROUNDSIZELENGTH_OFFSET UNITYSDK_OFFSET(0x1B13380)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETTREASUREROUNDSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1B133C0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_CELLVISUALSORTUNSTRUCTED_OFFSET UNITYSDK_OFFSET(0x1B133E0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_CELLCHECKGOODSID_OFFSET UNITYSDK_OFFSET(0x1B13430)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_CELLREWARDID_OFFSET UNITYSDK_OFFSET(0x1B13480)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_REWARDID_OFFSET UNITYSDK_OFFSET(0x1B134D0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_REWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B13530)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B13570)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B13590)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B135F0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B13630)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_TREASURECELLIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B13650)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETTREASURECELLIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B13690)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_CREATEEVENTCONTENTTREASUREROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B136B0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_STARTEVENTCONTENTTREASUREROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B13A60)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B138C0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDTREASUREROUND_OFFSET UNITYSDK_OFFSET(0x1B139B0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDTREASUREROUNDSIZE_OFFSET UNITYSDK_OFFSET(0x1B13980)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_CREATETREASUREROUNDSIZEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B13A80)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_STARTTREASUREROUNDSIZEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B13B10)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDCELLVISUALSORTUNSTRUCTED_OFFSET UNITYSDK_OFFSET(0x1B139E0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDCELLCHECKGOODSID_OFFSET UNITYSDK_OFFSET(0x1B13890)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDCELLREWARDID_OFFSET UNITYSDK_OFFSET(0x1B13860)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1B13950)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_CREATEREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B13B50)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_STARTREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B13BE0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B13920)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B13C20)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B13CB0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDTREASURECELLIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B138F0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ENDEVENTCONTENTTREASUREROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B13A10)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_FINISHEVENTCONTENTTREASUREROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B13CF0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTTREASUREROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B13D10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentTreasureRoundExcel_TypeDefinitionIndex = 17919;

	class EventContentTreasureRoundExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentTreasureRoundExcel* GetRootAsEventContentTreasureRoundExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureRoundExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETROOTASEVENTCONTENTTREASUREROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentTreasureRoundExcel* GetRootAsEventContentTreasureRoundExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentTreasureRoundExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureRoundExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentTreasureRoundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETROOTASEVENTCONTENTTREASUREROUNDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentTreasureRoundExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureRoundExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_TreasureRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_TREASUREROUND_OFFSET))(nullptr);
		}

		::System::Int32 TreasureRoundSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_TREASUREROUNDSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TreasureRoundSizeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_TREASUREROUNDSIZELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTreasureRoundSizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETTREASUREROUNDSIZEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_CellVisualSortUnstructed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_CELLVISUALSORTUNSTRUCTED_OFFSET))(nullptr);
		}

		::System::Int64 get_CellCheckGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_CELLCHECKGOODSID_OFFSET))(nullptr);
		}

		::System::Int64 get_CellRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_CELLREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 RewardID(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardIDLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_REWARDIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardIDBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETREWARDIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 RewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TreasureCellImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GET_TREASURECELLIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTreasureCellImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_GETTREASURECELLIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentTreasureRoundExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_CREATEEVENTCONTENTTREASUREROUNDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentTreasureRoundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_STARTEVENTCONTENTTREASUREROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTreasureRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDTREASUREROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTreasureRoundSize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDTREASUREROUNDSIZE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTreasureRoundSizeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_CREATETREASUREROUNDSIZEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTreasureRoundSizeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_STARTTREASUREROUNDSIZEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCellVisualSortUnstructed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDCELLVISUALSORTUNSTRUCTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCellCheckGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDCELLCHECKGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCellRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDCELLREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_CREATEREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_STARTREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTreasureCellImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ADDTREASURECELLIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentTreasureRoundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_ENDEVENTCONTENTTREASUREROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentTreasureRoundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_FINISHEVENTCONTENTTREASUREROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentTreasureRoundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREROUNDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTTREASUREROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

