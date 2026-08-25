#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameRoadPuzzleVoiceExcel; }
namespace FlatData { class RoadPuzzleVoiceCondition; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BF7390)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GETROOTASMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF73A0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GETROOTASMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF7400)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BF7490)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BF7460)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BF74B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BF7500)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1BF7550)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_VOICECLIP_OFFSET UNITYSDK_OFFSET(0x1BF75A0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_CREATEMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF75F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_STARTMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF77E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BF7700)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BF76D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ADDVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1BF7760)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ADDVOICECLIP_OFFSET UNITYSDK_OFFSET(0x1BF7730)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ENDMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BF7790)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_FINISHMINIGAMEROADPUZZLEVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BF7800)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BF7820)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRoadPuzzleVoiceExcel_TypeDefinitionIndex = 18818;

	class MiniGameRoadPuzzleVoiceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleVoiceExcel* GetRootAsMiniGameRoadPuzzleVoiceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GETROOTASMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleVoiceExcel* GetRootAsMiniGameRoadPuzzleVoiceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameRoadPuzzleVoiceExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameRoadPuzzleVoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GETROOTASMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleVoiceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRoadPuzzleVoiceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::RoadPuzzleVoiceCondition* get_VoiceCondition()
		{
			return (return (::FlatData::RoadPuzzleVoiceCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_VOICECONDITION_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceClip()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_GET_VOICECLIP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameRoadPuzzleVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::RoadPuzzleVoiceCondition* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::RoadPuzzleVoiceCondition*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_CREATEMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameRoadPuzzleVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_STARTMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RoadPuzzleVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RoadPuzzleVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ADDVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceClip(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ADDVOICECLIP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameRoadPuzzleVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_ENDMINIGAMEROADPUZZLEVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameRoadPuzzleVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_FINISHMINIGAMEROADPUZZLEVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameRoadPuzzleVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

