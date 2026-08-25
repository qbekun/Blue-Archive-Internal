#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameRoadPuzzleAdditionalRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC9070)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GETROOTASMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC9080)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GETROOTASMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC90E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BC9170)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BC9140)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC9190)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BC91E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BC9230)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BC9280)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BC92D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_CREATEMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC9320)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_STARTMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC9570)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC94C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BC9490)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BC94F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BC9460)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BC9430)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ENDMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC9520)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_FINISHMINIGAMEROADPUZZLEADDITIONALREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC9590)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEADDITIONALREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC95B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRoadPuzzleAdditionalRewardExcel_TypeDefinitionIndex = 18726;

	class MiniGameRoadPuzzleAdditionalRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleAdditionalRewardExcel* GetRootAsMiniGameRoadPuzzleAdditionalRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleAdditionalRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GETROOTASMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleAdditionalRewardExcel* GetRootAsMiniGameRoadPuzzleAdditionalRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameRoadPuzzleAdditionalRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleAdditionalRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameRoadPuzzleAdditionalRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GETROOTASMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleAdditionalRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleAdditionalRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameRoadPuzzleAdditionalRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_CREATEMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameRoadPuzzleAdditionalRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_STARTMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameRoadPuzzleAdditionalRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_ENDMINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameRoadPuzzleAdditionalRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_FINISHMINIGAMEROADPUZZLEADDITIONALREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameRoadPuzzleAdditionalRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEADDITIONALREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEADDITIONALREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

