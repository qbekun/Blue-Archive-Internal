#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WorldRaidFavorBuffExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CCCD20)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GETROOTASWORLDRAIDFAVORBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCCD30)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GETROOTASWORLDRAIDFAVORBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCCD90)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CCCE20)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CCCDF0)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GET_WORLDRAIDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1CCCE40)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GET_WORLDRAIDFAVORRANKBONUS_OFFSET UNITYSDK_OFFSET(0x1CCCE90)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_CREATEWORLDRAIDFAVORBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCCEE0)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_STARTWORLDRAIDFAVORBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCD020)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_ADDWORLDRAIDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1CCCFA0)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_ADDWORLDRAIDFAVORRANKBONUS_OFFSET UNITYSDK_OFFSET(0x1CCCF70)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_ENDWORLDRAIDFAVORBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCCFD0)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_FINISHWORLDRAIDFAVORBUFFEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CCD040)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_FINISHSIZEPREFIXEDWORLDRAIDFAVORBUFFEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CCD060)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidFavorBuffExcel_TypeDefinitionIndex = 19812;

	class WorldRaidFavorBuffExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WorldRaidFavorBuffExcel* GetRootAsWorldRaidFavorBuffExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidFavorBuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GETROOTASWORLDRAIDFAVORBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidFavorBuffExcel* GetRootAsWorldRaidFavorBuffExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WorldRaidFavorBuffExcel* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidFavorBuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WorldRaidFavorBuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GETROOTASWORLDRAIDFAVORBUFFEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidFavorBuffExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidFavorBuffExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_WorldRaidFavorRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GET_WORLDRAIDFAVORRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidFavorRankBonus()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_GET_WORLDRAIDFAVORRANKBONUS_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWorldRaidFavorBuffExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_CREATEWORLDRAIDFAVORBUFFEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartWorldRaidFavorBuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_STARTWORLDRAIDFAVORBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddWorldRaidFavorRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_ADDWORLDRAIDFAVORRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidFavorRankBonus(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_ADDWORLDRAIDFAVORRANKBONUS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWorldRaidFavorBuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_ENDWORLDRAIDFAVORBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWorldRaidFavorBuffExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_FINISHWORLDRAIDFAVORBUFFEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWorldRaidFavorBuffExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCEL_FINISHSIZEPREFIXEDWORLDRAIDFAVORBUFFEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

