#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamTimelineExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BBD1A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GETROOTASMINIGAMEDREAMTIMELINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBD1B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GETROOTASMINIGAMEDREAMTIMELINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBD210)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BBD2A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BBD270)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BBD2C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBD310)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BBD360)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_DREAMMAKERDAYS_OFFSET UNITYSDK_OFFSET(0x1BBD3B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_DREAMMAKERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1BBD400)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BBD450)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_BGM_OFFSET UNITYSDK_OFFSET(0x1BBD4A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_ARTLEVELPATH_OFFSET UNITYSDK_OFFSET(0x1BBD4F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GETARTLEVELPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1BBD530)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_DESIGNLEVELPATH_OFFSET UNITYSDK_OFFSET(0x1BBD550)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GETDESIGNLEVELPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1BBD590)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_CREATEMINIGAMEDREAMTIMELINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBD5B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_STARTMINIGAMEDREAMTIMELINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBD960)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1BBD880)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBD850)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1BBD820)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDDREAMMAKERDAYS_OFFSET UNITYSDK_OFFSET(0x1BBD7F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDDREAMMAKERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1BBD7C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BBD790)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDBGM_OFFSET UNITYSDK_OFFSET(0x1BBD760)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDARTLEVELPATH_OFFSET UNITYSDK_OFFSET(0x1BBD8E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDDESIGNLEVELPATH_OFFSET UNITYSDK_OFFSET(0x1BBD8B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ENDMINIGAMEDREAMTIMELINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBD910)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_FINISHMINIGAMEDREAMTIMELINEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BBD980)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMTIMELINEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BBD9A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamTimelineExcel_TypeDefinitionIndex = 18678;

	class MiniGameDreamTimelineExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamTimelineExcel* GetRootAsMiniGameDreamTimelineExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamTimelineExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GETROOTASMINIGAMEDREAMTIMELINEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamTimelineExcel* GetRootAsMiniGameDreamTimelineExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamTimelineExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamTimelineExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamTimelineExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GETROOTASMINIGAMEDREAMTIMELINEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamTimelineExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamTimelineExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerDays()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_DREAMMAKERDAYS_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerActionPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_DREAMMAKERACTIONPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_EnterScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_ENTERSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Bgm()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_BGM_OFFSET))(nullptr);
		}

		::System::String* get_ArtLevelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_ARTLEVELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetArtLevelPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GETARTLEVELPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DesignLevelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GET_DESIGNLEVELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDesignLevelPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_GETDESIGNLEVELPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamTimelineExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_CREATEMINIGAMEDREAMTIMELINEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamTimelineExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_STARTMINIGAMEDREAMTIMELINEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerDays(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDDREAMMAKERDAYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerActionPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDDREAMMAKERACTIONPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgm(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDBGM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddArtLevelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDARTLEVELPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDesignLevelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ADDDESIGNLEVELPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamTimelineExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_ENDMINIGAMEDREAMTIMELINEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamTimelineExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_FINISHMINIGAMEDREAMTIMELINEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamTimelineExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMTIMELINEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

