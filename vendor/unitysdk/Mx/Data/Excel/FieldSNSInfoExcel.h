#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FieldSNSInfoExcel; }
namespace FlatData { class FieldSNSStateType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1CFC0)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GETROOTASFIELDSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1CFD0)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GETROOTASFIELDSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1D030)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B1D0C0)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B1D090)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B1D0E0)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_INTERACTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1B1D130)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_SNSSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1B1D180)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_STATELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1B1D1D0)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_DESCLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1B1D220)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_CREATEFIELDSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1D270)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_STARTFIELDSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1D4B0)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B1D3A0)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDINTERACTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1B1D370)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDSNSSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1B1D430)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDSTATELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1B1D400)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDDESCLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1B1D3D0)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ENDFIELDSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1D460)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_FINISHFIELDSNSINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1D4D0)
#define MX_DATA_EXCEL_FIELDSNSINFOEXCEL_FINISHSIZEPREFIXEDFIELDSNSINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1D4F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldSNSInfoExcel_TypeDefinitionIndex = 17968;

	class FieldSNSInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FieldSNSInfoExcel* GetRootAsFieldSNSInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FieldSNSInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GETROOTASFIELDSNSINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FieldSNSInfoExcel* GetRootAsFieldSNSInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FieldSNSInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::FieldSNSInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FieldSNSInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GETROOTASFIELDSNSINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FieldSNSInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FieldSNSInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_InteractionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_INTERACTIONGROUPID_OFFSET))(nullptr);
		}

		::FlatData::FieldSNSStateType* get_SNSStateType()
		{
			return (return (::FlatData::FieldSNSStateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_SNSSTATETYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_StateLocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_STATELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_DescLocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_GET_DESCLOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldSNSInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::FieldSNSStateType* arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::FieldSNSStateType*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_CREATEFIELDSNSINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFieldSNSInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_STARTFIELDSNSINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInteractionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDINTERACTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSNSStateType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldSNSStateType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldSNSStateType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDSNSSTATETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStateLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDSTATELOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ADDDESCLOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFieldSNSInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_ENDFIELDSNSINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldSNSInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_FINISHFIELDSNSINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFieldSNSInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSINFOEXCEL_FINISHSIZEPREFIXEDFIELDSNSINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

