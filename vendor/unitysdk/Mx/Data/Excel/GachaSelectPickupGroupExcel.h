#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GachaSelectPickupGroupExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B39E00)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GETROOTASGACHASELECTPICKUPGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B39E10)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GETROOTASGACHASELECTPICKUPGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B39E70)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B39F00)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B39ED0)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B39F20)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B39F70)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B39FC0)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_CREATEGACHASELECTPICKUPGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3A010)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_STARTGACHASELECTPICKUPGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3A1B0)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B3A130)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_ADDGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B3A100)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B3A0D0)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_ENDGACHASELECTPICKUPGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3A160)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_FINISHGACHASELECTPICKUPGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3A1D0)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_FINISHSIZEPREFIXEDGACHASELECTPICKUPGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3A1F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaSelectPickupGroupExcel_TypeDefinitionIndex = 18100;

	class GachaSelectPickupGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GachaSelectPickupGroupExcel* GetRootAsGachaSelectPickupGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaSelectPickupGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GETROOTASGACHASELECTPICKUPGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GachaSelectPickupGroupExcel* GetRootAsGachaSelectPickupGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GachaSelectPickupGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::GachaSelectPickupGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GachaSelectPickupGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GETROOTASGACHASELECTPICKUPGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GachaSelectPickupGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaSelectPickupGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GachaGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GET_GACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGachaSelectPickupGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_CREATEGACHASELECTPICKUPGROUPEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGachaSelectPickupGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_STARTGACHASELECTPICKUPGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_ADDGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGachaSelectPickupGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_ENDGACHASELECTPICKUPGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGachaSelectPickupGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_FINISHGACHASELECTPICKUPGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGachaSelectPickupGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCEL_FINISHSIZEPREFIXEDGACHASELECTPICKUPGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

