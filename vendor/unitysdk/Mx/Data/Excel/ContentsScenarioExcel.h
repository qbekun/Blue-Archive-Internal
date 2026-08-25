#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ContentsScenarioExcel; }
namespace FlatData { class ScenarioContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A715D0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GETROOTASCONTENTSSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1A715E0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GETROOTASCONTENTSSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1A71640)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A716D0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A716A0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A716F0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_LOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1A71740)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A71790)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_SCENARIOCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A717E0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A71830)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_SCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A71890)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GETSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A718D0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_CREATECONTENTSSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1A718F0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_STARTCONTENTSSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1A71B30)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A71AB0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1A71A80)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A71A50)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDSCENARIOCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A71A20)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A719F0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_CREATESCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A71B50)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_STARTSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A71BE0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ENDCONTENTSSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1A71AE0)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_FINISHCONTENTSSCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A71C20)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_FINISHSIZEPREFIXEDCONTENTSSCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A71C40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentsScenarioExcel_TypeDefinitionIndex = 17330;

	class ContentsScenarioExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ContentsScenarioExcel* GetRootAsContentsScenarioExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentsScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GETROOTASCONTENTSSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ContentsScenarioExcel* GetRootAsContentsScenarioExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ContentsScenarioExcel* arg)
		{
			return (return (::MX::Data::Excel::ContentsScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ContentsScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GETROOTASCONTENTSSCENARIOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ContentsScenarioExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentsScenarioExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_LOCALIZEID_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::ScenarioContentType* get_ScenarioContentType()
		{
			return (return (::FlatData::ScenarioContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_SCENARIOCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 ScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_SCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GET_SCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_GETSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateContentsScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg, ::FlatData::ScenarioContentType* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::System::UInt32, ::System::Int32, ::FlatData::ScenarioContentType*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_CREATECONTENTSSCENARIOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartContentsScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_STARTCONTENTSSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDLOCALIZEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDSCENARIOCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_CREATESCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_STARTSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndContentsScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_ENDCONTENTSSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishContentsScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_FINISHCONTENTSSCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedContentsScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCEL_FINISHSIZEPREFIXEDCONTENTSSCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

