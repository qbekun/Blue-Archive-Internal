#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AssistSlotExcel; }
namespace FlatData { class EchelonType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19DB0F0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GETROOTASASSISTSLOTEXCEL_OFFSET UNITYSDK_OFFSET(0x19DB100)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GETROOTASASSISTSLOTEXCEL_OFFSET UNITYSDK_OFFSET(0x19DB160)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19DB1F0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19DB1C0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x19DB210)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x19DB260)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x19DB2B0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTTERMREWARDPERIODFROMSEC_OFFSET UNITYSDK_OFFSET(0x19DB300)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTREWARDLIMIT_OFFSET UNITYSDK_OFFSET(0x19DB350)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTRENTREWARDDAILYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x19DB3A0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTRENTALFEEAMOUNT_OFFSET UNITYSDK_OFFSET(0x19DB3F0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTRENTALFEEAMOUNTSTRANGER_OFFSET UNITYSDK_OFFSET(0x19DB440)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_CREATEASSISTSLOTEXCEL_OFFSET UNITYSDK_OFFSET(0x19DB490)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_STARTASSISTSLOTEXCEL_OFFSET UNITYSDK_OFFSET(0x19DB7E0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDSLOTID_OFFSET UNITYSDK_OFFSET(0x19DB730)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x19DB760)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDSLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x19DB700)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTTERMREWARDPERIODFROMSEC_OFFSET UNITYSDK_OFFSET(0x19DB6D0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTREWARDLIMIT_OFFSET UNITYSDK_OFFSET(0x19DB6A0)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTRENTREWARDDAILYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x19DB670)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTRENTALFEEAMOUNT_OFFSET UNITYSDK_OFFSET(0x19DB640)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTRENTALFEEAMOUNTSTRANGER_OFFSET UNITYSDK_OFFSET(0x19DB610)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_ENDASSISTSLOTEXCEL_OFFSET UNITYSDK_OFFSET(0x19DB790)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_FINISHASSISTSLOTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define MX_DATA_EXCEL_ASSISTSLOTEXCEL_FINISHSIZEPREFIXEDASSISTSLOTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19DB820)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AssistSlotExcel_TypeDefinitionIndex = 16699;

	class AssistSlotExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AssistSlotExcel* GetRootAsAssistSlotExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AssistSlotExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GETROOTASASSISTSLOTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AssistSlotExcel* GetRootAsAssistSlotExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AssistSlotExcel* arg)
		{
			return (return (::MX::Data::Excel::AssistSlotExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AssistSlotExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GETROOTASASSISTSLOTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AssistSlotExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AssistSlotExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_SLOTID_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistTermRewardPeriodFromSec()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTTERMREWARDPERIODFROMSEC_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistRewardLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTREWARDLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistRentRewardDailyMaxCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTRENTREWARDDAILYMAXCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistRentalFeeAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTRENTALFEEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistRentalFeeAmountStranger()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_GET_ASSISTRENTALFEEAMOUNTSTRANGER_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAssistSlotExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EchelonType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EchelonType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_CREATEASSISTSLOTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAssistSlotExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_STARTASSISTSLOTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSlotId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDSLOTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDECHELONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSlotNumber(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDSLOTNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAssistTermRewardPeriodFromSec(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTTERMREWARDPERIODFROMSEC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAssistRewardLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTREWARDLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAssistRentRewardDailyMaxCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTRENTREWARDDAILYMAXCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAssistRentalFeeAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTRENTALFEEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAssistRentalFeeAmountStranger(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_ADDASSISTRENTALFEEAMOUNTSTRANGER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAssistSlotExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_ENDASSISTSLOTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAssistSlotExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_FINISHASSISTSLOTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAssistSlotExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTEXCEL_FINISHSIZEPREFIXEDASSISTSLOTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

