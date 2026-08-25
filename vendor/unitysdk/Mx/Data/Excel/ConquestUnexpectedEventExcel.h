#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestUnexpectedEventExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A69EF0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GETROOTASCONQUESTUNEXPECTEDEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A69F00)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GETROOTASCONQUESTUNEXPECTEDEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A69F60)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A69FF0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A69FC0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A6A010)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A6A060)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTCONDITIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A6A0B0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTCONDITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6A100)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTOCCURDAILYLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6A150)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNITCOUNTPERSTEP_OFFSET UNITYSDK_OFFSET(0x1A6A1A0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_UNEXPECTEDEVENTPREFAB_OFFSET UNITYSDK_OFFSET(0x1A6A1F0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTPREFABLENGTH_OFFSET UNITYSDK_OFFSET(0x1A6A240)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_UNEXPECTEDEVENTUNITID_OFFSET UNITYSDK_OFFSET(0x1A6A280)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTUNITIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A6A2E0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GETUNEXPECTEDEVENTUNITIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A6A320)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_CREATECONQUESTUNEXPECTEDEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6A340)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_STARTCONQUESTUNEXPECTEDEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6A690)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A6A520)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A6A610)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTCONDITIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A6A4F0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTCONDITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6A4C0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTOCCURDAILYLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6A5E0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNITCOUNTPERSTEP_OFFSET UNITYSDK_OFFSET(0x1A6A5B0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTPREFAB_OFFSET UNITYSDK_OFFSET(0x1A6A580)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_CREATEUNEXPECTEDEVENTPREFABVECTOR_OFFSET UNITYSDK_OFFSET(0x1A6A6B0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_STARTUNEXPECTEDEVENTPREFABVECTOR_OFFSET UNITYSDK_OFFSET(0x1A6A740)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTUNITID_OFFSET UNITYSDK_OFFSET(0x1A6A550)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_CREATEUNEXPECTEDEVENTUNITIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A6A780)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_STARTUNEXPECTEDEVENTUNITIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A6A810)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ENDCONQUESTUNEXPECTEDEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6A640)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_FINISHCONQUESTUNEXPECTEDEVENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6A850)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_FINISHSIZEPREFIXEDCONQUESTUNEXPECTEDEVENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6A870)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestUnexpectedEventExcel_TypeDefinitionIndex = 17295;

	class ConquestUnexpectedEventExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestUnexpectedEventExcel* GetRootAsConquestUnexpectedEventExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestUnexpectedEventExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GETROOTASCONQUESTUNEXPECTEDEVENTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestUnexpectedEventExcel* GetRootAsConquestUnexpectedEventExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestUnexpectedEventExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestUnexpectedEventExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestUnexpectedEventExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GETROOTASCONQUESTUNEXPECTEDEVENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestUnexpectedEventExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestUnexpectedEventExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_UnexpectedEventConditionType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnexpectedEventConditionUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTCONDITIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UnexpectedEventConditionAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTCONDITIONAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_UnexpectedEventOccurDailyLimitCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTOCCURDAILYLIMITCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_UnitCountPerStep()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNITCOUNTPERSTEP_OFFSET))(nullptr);
		}

		::System::String* UnexpectedEventPrefab(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_UNEXPECTEDEVENTPREFAB_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UnexpectedEventPrefabLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTPREFABLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 UnexpectedEventUnitId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_UNEXPECTEDEVENTUNITID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UnexpectedEventUnitIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GET_UNEXPECTEDEVENTUNITIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetUnexpectedEventUnitIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_GETUNEXPECTEDEVENTUNITIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestUnexpectedEventExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_CREATECONQUESTUNEXPECTEDEVENTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestUnexpectedEventExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_STARTCONQUESTUNEXPECTEDEVENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnexpectedEventConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnexpectedEventConditionUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTCONDITIONUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnexpectedEventConditionAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTCONDITIONAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnexpectedEventOccurDailyLimitCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTOCCURDAILYLIMITCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnitCountPerStep(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNITCOUNTPERSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnexpectedEventPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateUnexpectedEventPrefabVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_CREATEUNEXPECTEDEVENTPREFABVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartUnexpectedEventPrefabVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_STARTUNEXPECTEDEVENTPREFABVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnexpectedEventUnitId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ADDUNEXPECTEDEVENTUNITID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateUnexpectedEventUnitIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_CREATEUNEXPECTEDEVENTUNITIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartUnexpectedEventUnitIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_STARTUNEXPECTEDEVENTUNITIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestUnexpectedEventExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_ENDCONQUESTUNEXPECTEDEVENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestUnexpectedEventExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_FINISHCONQUESTUNEXPECTEDEVENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestUnexpectedEventExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCEL_FINISHSIZEPREFIXEDCONQUESTUNEXPECTEDEVENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

