#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameRoadPuzzleRoadRoundExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BF37E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GETROOTASMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF37F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GETROOTASMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF3850)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BF38E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BF38B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BF3900)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BF3950)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1BF39A0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1BF39F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BF3A40)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ENDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BF3A90)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_MAPGROUPID_OFFSET UNITYSDK_OFFSET(0x1BF3AE0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ROUNDREWARD_OFFSET UNITYSDK_OFFSET(0x1BF3B30)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDITIONALREWARDID_OFFSET UNITYSDK_OFFSET(0x1BF3B80)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ADDITIONALREWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BF3BE0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GETADDITIONALREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BF3C20)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDITIONALREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BF3C40)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ADDITIONALREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BF3CA0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GETADDITIONALREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BF3CE0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_CREATEMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF3D00)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_STARTMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF4100)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BF3FC0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BF3F90)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDROUND_OFFSET UNITYSDK_OFFSET(0x1BF4050)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDISLOOP_OFFSET UNITYSDK_OFFSET(0x1BF4080)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BF3F60)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDENDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BF3F30)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDMAPGROUPID_OFFSET UNITYSDK_OFFSET(0x1BF3F00)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDROUNDREWARD_OFFSET UNITYSDK_OFFSET(0x1BF3ED0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDADDITIONALREWARDID_OFFSET UNITYSDK_OFFSET(0x1BF4020)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_CREATEADDITIONALREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BF4120)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_STARTADDITIONALREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BF41B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDADDITIONALREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BF3FF0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_CREATEADDITIONALREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BF41F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_STARTADDITIONALREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BF4280)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ENDMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF40B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_FINISHMINIGAMEROADPUZZLEROADROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BF42C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEROADROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BF42E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleRoadRoundExcel_TypeDefinitionIndex = 18802;

	class MinigameRoadPuzzleRoadRoundExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel* GetRootAsMinigameRoadPuzzleRoadRoundExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GETROOTASMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel* GetRootAsMinigameRoadPuzzleRoadRoundExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GETROOTASMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int32 get_Round()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ISLOOP_OFFSET))(nullptr);
		}

		::System::Int64 get_EnterScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ENTERSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_EndScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ENDSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_MapGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_MAPGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_RoundReward()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ROUNDREWARD_OFFSET))(nullptr);
		}

		::System::Int64 AdditionalRewardID(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDITIONALREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AdditionalRewardIDLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ADDITIONALREWARDIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAdditionalRewardIDBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GETADDITIONALREWARDIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 AdditionalRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDITIONALREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AdditionalRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GET_ADDITIONALREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAdditionalRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_GETADDITIONALREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameRoadPuzzleRoadRoundExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_CREATEMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameRoadPuzzleRoadRoundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_STARTMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLoop(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDISLOOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDENTERSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDENDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDMAPGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRoundReward(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDROUNDREWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalRewardID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDADDITIONALREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAdditionalRewardIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_CREATEADDITIONALREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAdditionalRewardIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_STARTADDITIONALREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ADDADDITIONALREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAdditionalRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_CREATEADDITIONALREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAdditionalRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_STARTADDITIONALREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameRoadPuzzleRoadRoundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_ENDMINIGAMEROADPUZZLEROADROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameRoadPuzzleRoadRoundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_FINISHMINIGAMEROADPUZZLEROADROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameRoadPuzzleRoadRoundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEROADROUNDEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEROADROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

