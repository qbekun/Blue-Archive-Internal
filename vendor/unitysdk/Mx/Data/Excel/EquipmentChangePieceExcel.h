#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EquipmentChangePieceExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A8BFE0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GETROOTASEQUIPMENTCHANGEPIECEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8BFF0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GETROOTASEQUIPMENTCHANGEPIECEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8C050)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A8C0E0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A8C0B0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8C100)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GET_CHANGEEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8C150)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GET_CHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A8C1A0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_CREATEEQUIPMENTCHANGEPIECEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8C1F0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_STARTEQUIPMENTCHANGEPIECEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8C390)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_ADDEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8C310)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_ADDCHANGEEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8C2E0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_ADDCHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A8C2B0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_ENDEQUIPMENTCHANGEPIECEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A8C340)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_FINISHEQUIPMENTCHANGEPIECEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A8C3B0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_FINISHSIZEPREFIXEDEQUIPMENTCHANGEPIECEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A8C3D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentChangePieceExcel_TypeDefinitionIndex = 17434;

	class EquipmentChangePieceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EquipmentChangePieceExcel* GetRootAsEquipmentChangePieceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EquipmentChangePieceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GETROOTASEQUIPMENTCHANGEPIECEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EquipmentChangePieceExcel* GetRootAsEquipmentChangePieceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EquipmentChangePieceExcel* arg)
		{
			return (return (::MX::Data::Excel::EquipmentChangePieceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EquipmentChangePieceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GETROOTASEQUIPMENTCHANGEPIECEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EquipmentChangePieceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EquipmentChangePieceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EquipmentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GET_EQUIPMENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChangeEquipmentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GET_CHANGEEQUIPMENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChangeAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_GET_CHANGEAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEquipmentChangePieceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_CREATEEQUIPMENTCHANGEPIECEEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEquipmentChangePieceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_STARTEQUIPMENTCHANGEPIECEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEquipmentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_ADDEQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeEquipmentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_ADDCHANGEEQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_ADDCHANGEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEquipmentChangePieceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_ENDEQUIPMENTCHANGEPIECEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEquipmentChangePieceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_FINISHEQUIPMENTCHANGEPIECEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEquipmentChangePieceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCEL_FINISHSIZEPREFIXEDEQUIPMENTCHANGEPIECEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

