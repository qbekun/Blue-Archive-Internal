#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestErosionUnitExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A57B60)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GETROOTASCONQUESTEROSIONUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A57B70)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GETROOTASCONQUESTEROSIONUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A57BD0)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A57C60)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A57C30)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_TILEPREFABID_OFFSET UNITYSDK_OFFSET(0x1A57C80)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_MASSEROSIONUNITID_OFFSET UNITYSDK_OFFSET(0x1A57CD0)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_MASSEROSIONUNITROTATIONY_OFFSET UNITYSDK_OFFSET(0x1A57D20)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_INDIVIDUALEROSIONUNITID_OFFSET UNITYSDK_OFFSET(0x1A57D70)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_INDIVIDUALEROSIONUNITROTATIONY_OFFSET UNITYSDK_OFFSET(0x1A57DC0)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_CREATECONQUESTEROSIONUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A57E10)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_STARTCONQUESTEROSIONUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A58060)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDTILEPREFABID_OFFSET UNITYSDK_OFFSET(0x1A57F80)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDMASSEROSIONUNITID_OFFSET UNITYSDK_OFFSET(0x1A57F50)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDMASSEROSIONUNITROTATIONY_OFFSET UNITYSDK_OFFSET(0x1A57FE0)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDINDIVIDUALEROSIONUNITID_OFFSET UNITYSDK_OFFSET(0x1A57F20)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDINDIVIDUALEROSIONUNITROTATIONY_OFFSET UNITYSDK_OFFSET(0x1A57FB0)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ENDCONQUESTEROSIONUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A58010)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_FINISHCONQUESTEROSIONUNITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A58080)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_FINISHSIZEPREFIXEDCONQUESTEROSIONUNITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A580A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestErosionUnitExcel_TypeDefinitionIndex = 17216;

	class ConquestErosionUnitExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestErosionUnitExcel* GetRootAsConquestErosionUnitExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestErosionUnitExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GETROOTASCONQUESTEROSIONUNITEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestErosionUnitExcel* GetRootAsConquestErosionUnitExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestErosionUnitExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestErosionUnitExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestErosionUnitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GETROOTASCONQUESTEROSIONUNITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestErosionUnitExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestErosionUnitExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_TilePrefabId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_TILEPREFABID_OFFSET))(nullptr);
		}

		::System::Int64 get_MassErosionUnitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_MASSEROSIONUNITID_OFFSET))(nullptr);
		}

		::System::Single get_MassErosionUnitRotationY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_MASSEROSIONUNITROTATIONY_OFFSET))(nullptr);
		}

		::System::Int64 get_IndividualErosionUnitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_INDIVIDUALEROSIONUNITID_OFFSET))(nullptr);
		}

		::System::Single get_IndividualErosionUnitRotationY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_GET_INDIVIDUALEROSIONUNITROTATIONY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestErosionUnitExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Single arg, ::System::Int64 arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Single, ::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_CREATECONQUESTEROSIONUNITEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestErosionUnitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_STARTCONQUESTEROSIONUNITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddTilePrefabId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDTILEPREFABID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMassErosionUnitId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDMASSEROSIONUNITID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMassErosionUnitRotationY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDMASSEROSIONUNITROTATIONY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIndividualErosionUnitId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDINDIVIDUALEROSIONUNITID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIndividualErosionUnitRotationY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ADDINDIVIDUALEROSIONUNITROTATIONY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestErosionUnitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_ENDCONQUESTEROSIONUNITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestErosionUnitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_FINISHCONQUESTEROSIONUNITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestErosionUnitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCEL_FINISHSIZEPREFIXEDCONQUESTEROSIONUNITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

