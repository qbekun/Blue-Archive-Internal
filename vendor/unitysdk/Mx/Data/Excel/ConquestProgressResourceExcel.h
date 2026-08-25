#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestProgressResourceExcel; }
namespace FlatData { class ConquestProgressType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A64660)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETROOTASCONQUESTPROGRESSRESOURCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A64670)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETROOTASCONQUESTPROGRESSRESOURCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A646D0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A64760)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A64730)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A64780)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A647D0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x1A64820)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_PROGRESSRESOURCE_OFFSET UNITYSDK_OFFSET(0x1A64870)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETPROGRESSRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1A648B0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_VOICEID_OFFSET UNITYSDK_OFFSET(0x1A648D0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_VOICEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A64930)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETVOICEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A64970)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_PROGRESSLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1A64990)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETPROGRESSLOCALIZECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1A649D0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_CREATECONQUESTPROGRESSRESOURCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A649F0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_STARTCONQUESTPROGRESSRESOURCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A64C90)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A64B50)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A64B20)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDGROUP_OFFSET UNITYSDK_OFFSET(0x1A64C10)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDPROGRESSRESOURCE_OFFSET UNITYSDK_OFFSET(0x1A64BE0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1A64BB0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_CREATEVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A64CB0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_STARTVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A64D40)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDPROGRESSLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1A64B80)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ENDCONQUESTPROGRESSRESOURCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A64C40)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_FINISHCONQUESTPROGRESSRESOURCEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A64D80)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_FINISHSIZEPREFIXEDCONQUESTPROGRESSRESOURCEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A64DA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestProgressResourceExcel_TypeDefinitionIndex = 17271;

	class ConquestProgressResourceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestProgressResourceExcel* GetRootAsConquestProgressResourceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestProgressResourceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETROOTASCONQUESTPROGRESSRESOURCEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestProgressResourceExcel* GetRootAsConquestProgressResourceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestProgressResourceExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestProgressResourceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestProgressResourceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETROOTASCONQUESTPROGRESSRESOURCEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestProgressResourceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestProgressResourceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ConquestProgressType* get_Group()
		{
			return (return (::FlatData::ConquestProgressType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_GROUP_OFFSET))(nullptr);
		}

		::System::String* get_ProgressResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_PROGRESSRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetProgressResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETPROGRESSRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceId(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_VOICEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_VOICEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETVOICEIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ProgressLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GET_PROGRESSLOCALIZECODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetProgressLocalizeCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_GETPROGRESSLOCALIZECODEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestProgressResourceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ConquestProgressType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ConquestProgressType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_CREATECONQUESTPROGRESSRESOURCEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestProgressResourceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_STARTCONQUESTPROGRESSRESOURCEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConquestProgressType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConquestProgressType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProgressResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDPROGRESSRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_CREATEVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_STARTVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProgressLocalizeCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ADDPROGRESSLOCALIZECODE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestProgressResourceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_ENDCONQUESTPROGRESSRESOURCEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestProgressResourceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_FINISHCONQUESTPROGRESSRESOURCEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestProgressResourceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCEL_FINISHSIZEPREFIXEDCONQUESTPROGRESSRESOURCEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

