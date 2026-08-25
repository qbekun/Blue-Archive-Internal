#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameRoadPuzzleRailSetRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BD1D10)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETROOTASMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD1D20)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETROOTASMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD1D80)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BD1E10)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BD1DE0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD1E30)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD1E80)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_LOCALIZEPREFABID_OFFSET UNITYSDK_OFFSET(0x1BD1ED0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETLOCALIZEPREFABIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BD1F10)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BD1F30)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1BD1F90)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1BD1FD0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BD1FF0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BD2050)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BD2090)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BD20B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BD2110)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BD2150)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_CREATEMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD2170)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_STARTMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD2410)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD22D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD22A0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDLOCALIZEPREFABID_OFFSET UNITYSDK_OFFSET(0x1BD2390)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BD2360)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BD2430)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BD24C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BD2330)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BD2500)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BD2590)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BD2300)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BD25D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BD2660)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ENDMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD23C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_FINISHMINIGAMEROADPUZZLERAILSETREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BD26A0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLERAILSETREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BD26C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRoadPuzzleRailSetRewardExcel_TypeDefinitionIndex = 18769;

	class MiniGameRoadPuzzleRailSetRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleRailSetRewardExcel* GetRootAsMiniGameRoadPuzzleRailSetRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleRailSetRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETROOTASMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleRailSetRewardExcel* GetRootAsMiniGameRoadPuzzleRailSetRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameRoadPuzzleRailSetRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleRailSetRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameRoadPuzzleRailSetRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETROOTASMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleRailSetRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleRailSetRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizePrefabID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_LOCALIZEPREFABID_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizePrefabIDBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETLOCALIZEPREFABIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameRoadPuzzleRailSetRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_CREATEMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameRoadPuzzleRailSetRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_STARTMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizePrefabID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDLOCALIZEPREFABID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameRoadPuzzleRailSetRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_ENDMINIGAMEROADPUZZLERAILSETREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameRoadPuzzleRailSetRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_FINISHMINIGAMEROADPUZZLERAILSETREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameRoadPuzzleRailSetRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILSETREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLERAILSETREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

