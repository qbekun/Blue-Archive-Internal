#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SNSInfoExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_SNSINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8BFD0)
#define MX_DATA_EXCEL_SNSINFOEXCEL_GETROOTASSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8BFE0)
#define MX_DATA_EXCEL_SNSINFOEXCEL_GETROOTASSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8C040)
#define MX_DATA_EXCEL_SNSINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C8C0D0)
#define MX_DATA_EXCEL_SNSINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C8C0A0)
#define MX_DATA_EXCEL_SNSINFOEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C8C0F0)
#define MX_DATA_EXCEL_SNSINFOEXCEL_GET_OPENSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C8C140)
#define MX_DATA_EXCEL_SNSINFOEXCEL_GET_CLOSESCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C8C190)
#define MX_DATA_EXCEL_SNSINFOEXCEL_GET_OPENTITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8C1E0)
#define MX_DATA_EXCEL_SNSINFOEXCEL_GET_CLOSETITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8C230)
#define MX_DATA_EXCEL_SNSINFOEXCEL_GET_OPENDESCLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8C280)
#define MX_DATA_EXCEL_SNSINFOEXCEL_GET_CLOSEDESCLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8C2D0)
#define MX_DATA_EXCEL_SNSINFOEXCEL_CREATESNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8C320)
#define MX_DATA_EXCEL_SNSINFOEXCEL_STARTSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8C610)
#define MX_DATA_EXCEL_SNSINFOEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C8C4D0)
#define MX_DATA_EXCEL_SNSINFOEXCEL_ADDOPENSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C8C4A0)
#define MX_DATA_EXCEL_SNSINFOEXCEL_ADDCLOSESCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C8C470)
#define MX_DATA_EXCEL_SNSINFOEXCEL_ADDOPENTITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8C590)
#define MX_DATA_EXCEL_SNSINFOEXCEL_ADDCLOSETITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8C560)
#define MX_DATA_EXCEL_SNSINFOEXCEL_ADDOPENDESCLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8C530)
#define MX_DATA_EXCEL_SNSINFOEXCEL_ADDCLOSEDESCLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8C500)
#define MX_DATA_EXCEL_SNSINFOEXCEL_ENDSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8C5C0)
#define MX_DATA_EXCEL_SNSINFOEXCEL_FINISHSNSINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8C630)
#define MX_DATA_EXCEL_SNSINFOEXCEL_FINISHSIZEPREFIXEDSNSINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8C650)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SNSInfoExcel_TypeDefinitionIndex = 19488;

	class SNSInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SNSInfoExcel* GetRootAsSNSInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SNSInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GETROOTASSNSINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SNSInfoExcel* GetRootAsSNSInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SNSInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::SNSInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SNSInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GETROOTASSNSINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SNSInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SNSInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GET_OPENSCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CloseScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GET_CLOSESCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_OpenTitleLocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GET_OPENTITLELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_CloseTitleLocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GET_CLOSETITLELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_OpenDescLocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GET_OPENDESCLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_CloseDescLocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_GET_CLOSEDESCLOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSNSInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_CREATESNSINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSNSInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_STARTSNSINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_ADDOPENSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCloseScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_ADDCLOSESCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenTitleLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_ADDOPENTITLELOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCloseTitleLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_ADDCLOSETITLELOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenDescLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_ADDOPENDESCLOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCloseDescLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_ADDCLOSEDESCLOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSNSInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_ENDSNSINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSNSInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_FINISHSNSINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSNSInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCEL_FINISHSIZEPREFIXEDSNSINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

