#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestCalculateExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A51370)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GETROOTASCONQUESTCALCULATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A51380)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GETROOTASCONQUESTCALCULATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A513E0)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A51470)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A51440)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A51490)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_CALCULATECONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A514E0)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_CALCULATECONDITIONPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A51530)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_CALCULATECONDITIONPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A51580)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_CREATECONQUESTCALCULATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A515D0)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_STARTCONQUESTCALCULATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A517C0)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A51710)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ADDCALCULATECONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A51740)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ADDCALCULATECONDITIONPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A516E0)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ADDCALCULATECONDITIONPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A516B0)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ENDCONQUESTCALCULATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A51770)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_FINISHCONQUESTCALCULATEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A517E0)
#define MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_FINISHSIZEPREFIXEDCONQUESTCALCULATEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A51800)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestCalculateExcel_TypeDefinitionIndex = 17189;

	class ConquestCalculateExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestCalculateExcel* GetRootAsConquestCalculateExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestCalculateExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GETROOTASCONQUESTCALCULATEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestCalculateExcel* GetRootAsConquestCalculateExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestCalculateExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestCalculateExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestCalculateExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GETROOTASCONQUESTCALCULATEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestCalculateExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestCalculateExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_CalculateConditionParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_CALCULATECONDITIONPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CalculateConditionParcelUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_CALCULATECONDITIONPARCELUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CalculateConditionParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_GET_CALCULATECONDITIONPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestCalculateExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_CREATECONQUESTCALCULATEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestCalculateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_STARTCONQUESTCALCULATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCalculateConditionParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ADDCALCULATECONDITIONPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCalculateConditionParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ADDCALCULATECONDITIONPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCalculateConditionParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ADDCALCULATECONDITIONPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestCalculateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_ENDCONQUESTCALCULATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestCalculateExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_FINISHCONQUESTCALCULATEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestCalculateExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEEXCEL_FINISHSIZEPREFIXEDCONQUESTCALCULATEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

