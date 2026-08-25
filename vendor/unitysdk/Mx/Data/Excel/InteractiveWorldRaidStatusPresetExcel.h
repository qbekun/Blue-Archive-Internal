#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class InteractiveWorldRaidStatusPresetExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B67720)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETROOTASINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B67730)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETROOTASINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B67790)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B67820)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B677F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B67840)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_WORLDRAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B67890)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_WORLDRAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x1B678E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1B67930)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_IAWORLDRAIDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B67980)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_IAWORLDRAIDGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B679E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETIAWORLDRAIDGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B67A20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_EVENTCONTENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B67A40)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_EVENTCONTENTSTAGEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B67AA0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETEVENTCONTENTSTAGEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B67AE0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_EVENTCONTENTSCENARIOID_OFFSET UNITYSDK_OFFSET(0x1B67B00)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_EVENTCONTENTSCENARIOIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B67B60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETEVENTCONTENTSCENARIOIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B67BA0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_CREATEINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B67BC0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_STARTINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B67EB0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B67DA0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDWORLDRAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B67D70)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDWORLDRAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x1B67D40)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1B67D10)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDIAWORLDRAIDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B67E30)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_CREATEIAWORLDRAIDGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B67ED0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_STARTIAWORLDRAIDGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B67F60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDEVENTCONTENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B67E00)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_CREATEEVENTCONTENTSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B67FA0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_STARTEVENTCONTENTSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B68030)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDEVENTCONTENTSCENARIOID_OFFSET UNITYSDK_OFFSET(0x1B67DD0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_CREATEEVENTCONTENTSCENARIOIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B68070)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_STARTEVENTCONTENTSCENARIOIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B68100)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ENDINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B67E60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_FINISHINTERACTIVEWORLDRAIDSTATUSPRESETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B68140)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDSTATUSPRESETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B68160)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidStatusPresetExcel_TypeDefinitionIndex = 18276;

	class InteractiveWorldRaidStatusPresetExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidStatusPresetExcel* GetRootAsInteractiveWorldRaidStatusPresetExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidStatusPresetExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETROOTASINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidStatusPresetExcel* GetRootAsInteractiveWorldRaidStatusPresetExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::InteractiveWorldRaidStatusPresetExcel* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidStatusPresetExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::InteractiveWorldRaidStatusPresetExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETROOTASINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidStatusPresetExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidStatusPresetExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_WORLDRAIDSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidPhaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_WORLDRAIDPHASEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_SCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Int64 IAWorldRaidGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_IAWORLDRAIDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IAWorldRaidGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_IAWORLDRAIDGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIAWorldRaidGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETIAWORLDRAIDGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 EventContentStageId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_EVENTCONTENTSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EventContentStageIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_EVENTCONTENTSTAGEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventContentStageIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETEVENTCONTENTSTAGEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 EventContentScenarioId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_EVENTCONTENTSCENARIOID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EventContentScenarioIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GET_EVENTCONTENTSCENARIOIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventContentScenarioIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_GETEVENTCONTENTSCENARIOIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInteractiveWorldRaidStatusPresetExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_CREATEINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartInteractiveWorldRaidStatusPresetExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_STARTINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDWORLDRAIDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidPhaseId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDWORLDRAIDPHASEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIAWorldRaidGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDIAWORLDRAIDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIAWorldRaidGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_CREATEIAWORLDRAIDGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartIAWorldRaidGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_STARTIAWORLDRAIDGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentStageId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDEVENTCONTENTSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEventContentStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_CREATEEVENTCONTENTSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEventContentStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_STARTEVENTCONTENTSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentScenarioId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ADDEVENTCONTENTSCENARIOID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEventContentScenarioIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_CREATEEVENTCONTENTSCENARIOIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEventContentScenarioIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_STARTEVENTCONTENTSCENARIOIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndInteractiveWorldRaidStatusPresetExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_ENDINTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInteractiveWorldRaidStatusPresetExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_FINISHINTERACTIVEWORLDRAIDSTATUSPRESETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedInteractiveWorldRaidStatusPresetExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTATUSPRESETEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDSTATUSPRESETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

