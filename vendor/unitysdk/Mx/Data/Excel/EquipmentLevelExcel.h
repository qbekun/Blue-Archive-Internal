#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EquipmentLevelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A90A40)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GETROOTASEQUIPMENTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A90A50)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GETROOTASEQUIPMENTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A90AB0)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A90B40)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A90B10)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A90B60)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_TIERLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1A90BB0)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GET_TIERLEVELEXPLENGTH_OFFSET UNITYSDK_OFFSET(0x1A90C10)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GETTIERLEVELEXPBYTES_OFFSET UNITYSDK_OFFSET(0x1A90C50)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_TOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A90C70)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GET_TOTALEXPLENGTH_OFFSET UNITYSDK_OFFSET(0x1A90CD0)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GETTOTALEXPBYTES_OFFSET UNITYSDK_OFFSET(0x1A90D10)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_CREATEEQUIPMENTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A90D30)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_STARTEQUIPMENTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A90EC0)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A90E40)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_ADDTIERLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1A90E10)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_CREATETIERLEVELEXPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A90EE0)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_STARTTIERLEVELEXPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A90F70)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_ADDTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A90DE0)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_CREATETOTALEXPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A90FB0)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_STARTTOTALEXPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A91040)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_ENDEQUIPMENTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A90E70)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_FINISHEQUIPMENTLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A91080)
#define MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_FINISHSIZEPREFIXEDEQUIPMENTLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A910A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentLevelExcel_TypeDefinitionIndex = 17454;

	class EquipmentLevelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EquipmentLevelExcel* GetRootAsEquipmentLevelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EquipmentLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GETROOTASEQUIPMENTLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EquipmentLevelExcel* GetRootAsEquipmentLevelExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EquipmentLevelExcel* arg)
		{
			return (return (::MX::Data::Excel::EquipmentLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EquipmentLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GETROOTASEQUIPMENTLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EquipmentLevelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EquipmentLevelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 TierLevelExp(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_TIERLEVELEXP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TierLevelExpLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GET_TIERLEVELEXPLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTierLevelExpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GETTIERLEVELEXPBYTES_OFFSET))(nullptr);
		}

		::System::Int64 TotalExp(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_TOTALEXP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalExpLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GET_TOTALEXPLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTotalExpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_GETTOTALEXPBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEquipmentLevelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_CREATEEQUIPMENTLEVELEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEquipmentLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_STARTEQUIPMENTLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTierLevelExp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_ADDTIERLEVELEXP_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTierLevelExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_CREATETIERLEVELEXPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTierLevelExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_STARTTIERLEVELEXPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTotalExp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_ADDTOTALEXP_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTotalExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_CREATETOTALEXPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTotalExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_STARTTOTALEXPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEquipmentLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_ENDEQUIPMENTLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEquipmentLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_FINISHEQUIPMENTLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEquipmentLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELEXCEL_FINISHSIZEPREFIXEDEQUIPMENTLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

