#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGRewardItemExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA1470)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GETROOTASMINIGAMECCGREWARDITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA1480)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GETROOTASMINIGAMECCGREWARDITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA14E0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BA1570)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BA1540)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BA1590)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA15E0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_MINPOINT_OFFSET UNITYSDK_OFFSET(0x1BA1630)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BA1680)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BA16D0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BA1720)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BA1770)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_CREATEMINIGAMECCGREWARDITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA17C0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_STARTMINIGAMECCGREWARDITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA1AB0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1BA19A0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDCCGID_OFFSET UNITYSDK_OFFSET(0x1BA1970)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDMINPOINT_OFFSET UNITYSDK_OFFSET(0x1BA1A30)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BA1A00)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BA1940)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BA19D0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BA1910)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ENDMINIGAMECCGREWARDITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA1A60)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_FINISHMINIGAMECCGREWARDITEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA1AD0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGREWARDITEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA1AF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGRewardItemExcel_TypeDefinitionIndex = 18544;

	class MinigameCCGRewardItemExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGRewardItemExcel* GetRootAsMinigameCCGRewardItemExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGRewardItemExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GETROOTASMINIGAMECCGREWARDITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGRewardItemExcel* GetRootAsMinigameCCGRewardItemExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGRewardItemExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGRewardItemExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGRewardItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GETROOTASMINIGAMECCGREWARDITEMEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGRewardItemExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGRewardItemExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_CCGId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_CCGID_OFFSET))(nullptr);
		}

		::System::Int32 get_MinPoint()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_MINPOINT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardParcelAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGRewardItemExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_CREATEMINIGAMECCGREWARDITEMEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGRewardItemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_STARTMINIGAMECCGREWARDITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCCGId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDCCGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDMINPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGRewardItemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_ENDMINIGAMECCGREWARDITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGRewardItemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_FINISHMINIGAMECCGREWARDITEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGRewardItemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGREWARDITEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

