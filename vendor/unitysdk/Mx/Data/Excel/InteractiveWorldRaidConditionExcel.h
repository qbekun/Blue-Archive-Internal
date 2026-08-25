#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class InteractiveWorldRaidConditionExcel; }
namespace FlatData { class MultipleConditionCheckType; }
namespace FlatData { class WorldRaidConditionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B5C1E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GETROOTASINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5C1F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GETROOTASINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5C250)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B5C2E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B5C2B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B5C300)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_WORLDRAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B5C350)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_WORLDRAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x1B5C3A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1B5C3F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1B5C440)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_MULTIPLECONDITIONCHECKPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B5C490)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B5C4E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_CONDITIONTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B5C540)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GETCONDITIONTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B5C580)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1B5C5A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_CONDITIONVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1B5C600)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GETCONDITIONVALUEBYTES_OFFSET UNITYSDK_OFFSET(0x1B5C640)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CREATEINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5C660)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_STARTINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5C9B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B5C8A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDWORLDRAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B5C870)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDWORLDRAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x1B5C840)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B5C810)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1B5C930)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDMULTIPLECONDITIONCHECKPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B5C7E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B5C900)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CREATECONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B5C9D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_STARTCONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B5CA60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1B5C8D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CREATECONDITIONVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B5CAA0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_STARTCONDITIONVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B5CB30)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ENDINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5C960)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_FINISHINTERACTIVEWORLDRAIDCONDITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B5CB70)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDCONDITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B5CB90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidConditionExcel_TypeDefinitionIndex = 18239;

	class InteractiveWorldRaidConditionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidConditionExcel* GetRootAsInteractiveWorldRaidConditionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidConditionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GETROOTASINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidConditionExcel* GetRootAsInteractiveWorldRaidConditionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::InteractiveWorldRaidConditionExcel* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidConditionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::InteractiveWorldRaidConditionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GETROOTASINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidConditionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidConditionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_WORLDRAIDSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidPhaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_WORLDRAIDPHASEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Priority()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_PRIORITY_OFFSET))(nullptr);
		}

		::FlatData::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return (return (::FlatData::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_MultipleConditionCheckParameter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_MULTIPLECONDITIONCHECKPARAMETER_OFFSET))(nullptr);
		}

		::FlatData::WorldRaidConditionType* ConditionType(::System::Int32 arg)
		{
			return (return (::FlatData::WorldRaidConditionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_CONDITIONTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GETCONDITIONTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ConditionValue(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CONDITIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GET_CONDITIONVALUELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionValueBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_GETCONDITIONVALUEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInteractiveWorldRaidConditionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::MultipleConditionCheckType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::MultipleConditionCheckType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CREATEINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartInteractiveWorldRaidConditionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_STARTINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDWORLDRAIDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidPhaseId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDWORLDRAIDPHASEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMultipleConditionCheckType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMultipleConditionCheckParameter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDMULTIPLECONDITIONCHECKPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CREATECONDITIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_STARTCONDITIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ADDCONDITIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_CREATECONDITIONVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_STARTCONDITIONVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndInteractiveWorldRaidConditionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_ENDINTERACTIVEWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInteractiveWorldRaidConditionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_FINISHINTERACTIVEWORLDRAIDCONDITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedInteractiveWorldRaidConditionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDCONDITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

