#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamReplayScenarioExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB7C30)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GETROOTASMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB7C40)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GETROOTASMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB7CA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BB7D30)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BB7D00)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB7D50)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BB7DA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1BB7DF0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_REPLAYSUMMARYTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7E40)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_REPLAYSUMMARYLOCALIZESCENARIOID_OFFSET UNITYSDK_OFFSET(0x1BB7E90)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_REPLAYSCENARIORESOURCE_OFFSET UNITYSDK_OFFSET(0x1BB7EE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GETREPLAYSCENARIORESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1BB7F20)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_ISREPLAYSCENARIOHORIZON_OFFSET UNITYSDK_OFFSET(0x1BB7F40)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_CREATEMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB7F90)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_STARTMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB8280)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB8140)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BB8110)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0x1BB80E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDREPLAYSUMMARYTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1BB81D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDREPLAYSUMMARYLOCALIZESCENARIOID_OFFSET UNITYSDK_OFFSET(0x1BB81A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDREPLAYSCENARIORESOURCE_OFFSET UNITYSDK_OFFSET(0x1BB8170)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDISREPLAYSCENARIOHORIZON_OFFSET UNITYSDK_OFFSET(0x1BB8200)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ENDMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB8230)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_FINISHMINIGAMEDREAMREPLAYSCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB82A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMREPLAYSCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB82C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamReplayScenarioExcel_TypeDefinitionIndex = 18654;

	class MiniGameDreamReplayScenarioExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamReplayScenarioExcel* GetRootAsMiniGameDreamReplayScenarioExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamReplayScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GETROOTASMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamReplayScenarioExcel* GetRootAsMiniGameDreamReplayScenarioExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamReplayScenarioExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamReplayScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamReplayScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GETROOTASMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamReplayScenarioExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamReplayScenarioExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Order()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::UInt32 get_ReplaySummaryTitleLocalize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_REPLAYSUMMARYTITLELOCALIZE_OFFSET))(nullptr);
		}

		::System::UInt32 get_ReplaySummaryLocalizeScenarioId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_REPLAYSUMMARYLOCALIZESCENARIOID_OFFSET))(nullptr);
		}

		::System::String* get_ReplayScenarioResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_REPLAYSCENARIORESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetReplayScenarioResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GETREPLAYSCENARIORESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReplayScenarioHorizon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_GET_ISREPLAYSCENARIOHORIZON_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamReplayScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_CREATEMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamReplayScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_STARTMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplaySummaryTitleLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDREPLAYSUMMARYTITLELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplaySummaryLocalizeScenarioId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDREPLAYSUMMARYLOCALIZESCENARIOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplayScenarioResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDREPLAYSCENARIORESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsReplayScenarioHorizon(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ADDISREPLAYSCENARIOHORIZON_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamReplayScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_ENDMINIGAMEDREAMREPLAYSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamReplayScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_FINISHMINIGAMEDREAMREPLAYSCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamReplayScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMREPLAYSCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

