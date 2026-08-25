#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentDiceRaceProbExcel; }
namespace FlatData { class EventContentDiceRaceResultType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AC12E0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GETROOTASEVENTCONTENTDICERACEPROBEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC12F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GETROOTASEVENTCONTENTDICERACEPROBEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC1350)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AC13E0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AC13B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AC1400)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_EVENTCONTENTDICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1AC1450)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_COSTITEMID_OFFSET UNITYSDK_OFFSET(0x1AC14A0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_COSTITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AC14F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_DICERESULT_OFFSET UNITYSDK_OFFSET(0x1AC1540)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1AC1590)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_CREATEEVENTCONTENTDICERACEPROBEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC15E0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_STARTEVENTCONTENTDICERACEPROBEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC1880)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AC1740)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDEVENTCONTENTDICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1AC1800)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDCOSTITEMID_OFFSET UNITYSDK_OFFSET(0x1AC1710)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDCOSTITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AC17D0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDDICERESULT_OFFSET UNITYSDK_OFFSET(0x1AC17A0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1AC1770)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ENDEVENTCONTENTDICERACEPROBEXCEL_OFFSET UNITYSDK_OFFSET(0x1AC1830)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_FINISHEVENTCONTENTDICERACEPROBEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AC18A0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACEPROBEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AC18C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDiceRaceProbExcel_TypeDefinitionIndex = 17685;

	class EventContentDiceRaceProbExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceProbExcel* GetRootAsEventContentDiceRaceProbExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceProbExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GETROOTASEVENTCONTENTDICERACEPROBEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceProbExcel* GetRootAsEventContentDiceRaceProbExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentDiceRaceProbExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceProbExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentDiceRaceProbExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GETROOTASEVENTCONTENTDICERACEPROBEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceProbExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceProbExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentDiceRaceResultType* get_EventContentDiceRaceResultType()
		{
			return (return (::FlatData::EventContentDiceRaceResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_EVENTCONTENTDICERACERESULTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CostItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_COSTITEMID_OFFSET))(nullptr);
		}

		::System::Int32 get_CostItemAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_COSTITEMAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_DiceResult()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_DICERESULT_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentDiceRaceProbExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EventContentDiceRaceResultType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EventContentDiceRaceResultType*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_CREATEEVENTCONTENTDICERACEPROBEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentDiceRaceProbExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_STARTEVENTCONTENTDICERACEPROBEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentDiceRaceResultType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentDiceRaceResultType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentDiceRaceResultType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDEVENTCONTENTDICERACERESULTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostItemId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDCOSTITEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostItemAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDCOSTITEMAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDiceResult(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDDICERESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentDiceRaceProbExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_ENDEVENTCONTENTDICERACEPROBEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentDiceRaceProbExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_FINISHEVENTCONTENTDICERACEPROBEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentDiceRaceProbExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACEPROBEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

