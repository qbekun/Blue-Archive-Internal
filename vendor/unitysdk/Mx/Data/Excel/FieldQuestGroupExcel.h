#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FieldQuestGroupExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1BD50)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GETROOTASFIELDQUESTGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1BD60)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GETROOTASFIELDQUESTGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1BDC0)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B1BE50)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B1BE20)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B1BE70)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_SKIPFROMINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1B1BEC0)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_SKIPTOINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1B1BF10)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_NEXTSCENEID_OFFSET UNITYSDK_OFFSET(0x1B1BF60)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_SKIPRESULTUI_OFFSET UNITYSDK_OFFSET(0x1B1BFB0)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_CREATEFIELDQUESTGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1C000)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_STARTFIELDQUESTGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1C250)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B1C1A0)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDSKIPFROMINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1B1C170)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDSKIPTOINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1B1C140)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDNEXTSCENEID_OFFSET UNITYSDK_OFFSET(0x1B1C110)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDSKIPRESULTUI_OFFSET UNITYSDK_OFFSET(0x1B1C1D0)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ENDFIELDQUESTGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1C200)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_FINISHFIELDQUESTGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1C270)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_FINISHSIZEPREFIXEDFIELDQUESTGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1C290)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldQuestGroupExcel_TypeDefinitionIndex = 17961;

	class FieldQuestGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FieldQuestGroupExcel* GetRootAsFieldQuestGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FieldQuestGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GETROOTASFIELDQUESTGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FieldQuestGroupExcel* GetRootAsFieldQuestGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FieldQuestGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::FieldQuestGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FieldQuestGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GETROOTASFIELDQUESTGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FieldQuestGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FieldQuestGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_SkipFromInteractionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_SKIPFROMINTERACTIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SkipToInteractionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_SKIPTOINTERACTIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_NextSceneId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_NEXTSCENEID_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipResultUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_GET_SKIPRESULTUI_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldQuestGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_CREATEFIELDQUESTGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFieldQuestGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_STARTFIELDQUESTGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkipFromInteractionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDSKIPFROMINTERACTIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkipToInteractionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDSKIPTOINTERACTIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNextSceneId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDNEXTSCENEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkipResultUI(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ADDSKIPRESULTUI_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFieldQuestGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_ENDFIELDQUESTGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldQuestGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_FINISHFIELDQUESTGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFieldQuestGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCEL_FINISHSIZEPREFIXEDFIELDQUESTGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

