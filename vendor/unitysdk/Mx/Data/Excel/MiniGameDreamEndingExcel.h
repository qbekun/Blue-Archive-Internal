#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamEndingExcel; }
namespace FlatData { class DreamMakerEndingType; }
namespace FlatData { class DreamMakerEndingCondition; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAF280)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GETROOTASMINIGAMEDREAMENDINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAF290)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GETROOTASMINIGAMEDREAMENDINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAF2F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BAF380)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BAF350)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAF3A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BAF3F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_DREAMMAKERENDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BAF440)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1BAF490)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BAF4E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ENDINGCONDITION_OFFSET UNITYSDK_OFFSET(0x1BAF530)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_ENDINGCONDITIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1BAF590)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GETENDINGCONDITIONBYTES_OFFSET UNITYSDK_OFFSET(0x1BAF5D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ENDINGCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1BAF5F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_ENDINGCONDITIONVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1BAF650)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GETENDINGCONDITIONVALUEBYTES_OFFSET UNITYSDK_OFFSET(0x1BAF690)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_CREATEMINIGAMEDREAMENDINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAF6B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_STARTMINIGAMEDREAMENDINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAF9A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAF860)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDENDINGID_OFFSET UNITYSDK_OFFSET(0x1BAF830)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDDREAMMAKERENDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BAF920)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0x1BAF8F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BAF800)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDENDINGCONDITION_OFFSET UNITYSDK_OFFSET(0x1BAF8C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_CREATEENDINGCONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAF9C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_STARTENDINGCONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAFA50)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDENDINGCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1BAF890)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_CREATEENDINGCONDITIONVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAFA90)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_STARTENDINGCONDITIONVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAFB20)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ENDMINIGAMEDREAMENDINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAF950)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_FINISHMINIGAMEDREAMENDINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAFB60)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMENDINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAFB80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamEndingExcel_TypeDefinitionIndex = 18617;

	class MiniGameDreamEndingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamEndingExcel* GetRootAsMiniGameDreamEndingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamEndingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GETROOTASMINIGAMEDREAMENDINGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamEndingExcel* GetRootAsMiniGameDreamEndingExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamEndingExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamEndingExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamEndingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GETROOTASMINIGAMEDREAMENDINGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamEndingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamEndingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EndingId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_ENDINGID_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerEndingType* get_DreamMakerEndingType()
		{
			return (return (::FlatData::DreamMakerEndingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_DREAMMAKERENDINGTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerEndingCondition* EndingCondition(::System::Int32 arg)
		{
			return (return (::FlatData::DreamMakerEndingCondition*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ENDINGCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EndingConditionLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_ENDINGCONDITIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndingConditionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GETENDINGCONDITIONBYTES_OFFSET))(nullptr);
		}

		::System::Int64 EndingConditionValue(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ENDINGCONDITIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EndingConditionValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GET_ENDINGCONDITIONVALUELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndingConditionValueBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_GETENDINGCONDITIONVALUEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamEndingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::DreamMakerEndingType* arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::DreamMakerEndingType*, ::System::Int32, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_CREATEMINIGAMEDREAMENDINGEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamEndingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_STARTMINIGAMEDREAMENDINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndingId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDENDINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerEndingType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DreamMakerEndingType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DreamMakerEndingType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDDREAMMAKERENDINGTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndingCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDENDINGCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEndingConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_CREATEENDINGCONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEndingConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_STARTENDINGCONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndingConditionValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ADDENDINGCONDITIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEndingConditionValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_CREATEENDINGCONDITIONVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEndingConditionValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_STARTENDINGCONDITIONVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamEndingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_ENDMINIGAMEDREAMENDINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamEndingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_FINISHMINIGAMEDREAMENDINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamEndingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMENDINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

