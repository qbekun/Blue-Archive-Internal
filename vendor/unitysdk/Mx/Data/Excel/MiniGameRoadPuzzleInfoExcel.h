#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameRoadPuzzleInfoExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BCAEB0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GETROOTASMINIGAMEROADPUZZLEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCAEC0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GETROOTASMINIGAMEROADPUZZLEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCAF20)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BCAFB0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BCAF80)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCAFD0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_EVENTUSECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1BCB020)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_EVENTUSECOSTID_OFFSET UNITYSDK_OFFSET(0x1BCB070)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1BCB0C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_RAILSETREWARDID_OFFSET UNITYSDK_OFFSET(0x1BCB110)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_INSTANTCLEARROUND_OFFSET UNITYSDK_OFFSET(0x1BCB160)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_CREATEMINIGAMEROADPUZZLEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCB1B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_STARTMINIGAMEROADPUZZLEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCB450)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCB370)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDEVENTUSECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1BCB3D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDEVENTUSECOSTID_OFFSET UNITYSDK_OFFSET(0x1BCB340)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDCOSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1BCB310)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDRAILSETREWARDID_OFFSET UNITYSDK_OFFSET(0x1BCB2E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDINSTANTCLEARROUND_OFFSET UNITYSDK_OFFSET(0x1BCB3A0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ENDMINIGAMEROADPUZZLEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCB400)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_FINISHMINIGAMEROADPUZZLEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BCB470)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BCB490)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRoadPuzzleInfoExcel_TypeDefinitionIndex = 18736;

	class MiniGameRoadPuzzleInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel* GetRootAsMiniGameRoadPuzzleInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GETROOTASMINIGAMEROADPUZZLEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel* GetRootAsMiniGameRoadPuzzleInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GETROOTASMINIGAMEROADPUZZLEINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_EventUseCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_EVENTUSECOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventUseCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_EVENTUSECOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_COSTGOODSID_OFFSET))(nullptr);
		}

		::System::Int64 get_RailSetRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_RAILSETREWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_InstantClearRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_GET_INSTANTCLEARROUND_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameRoadPuzzleInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_CREATEMINIGAMEROADPUZZLEINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameRoadPuzzleInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_STARTMINIGAMEROADPUZZLEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventUseCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDEVENTUSECOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventUseCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDEVENTUSECOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDCOSTGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRailSetRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDRAILSETREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInstantClearRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ADDINSTANTCLEARROUND_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameRoadPuzzleInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_ENDMINIGAMEROADPUZZLEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameRoadPuzzleInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_FINISHMINIGAMEROADPUZZLEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameRoadPuzzleInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

