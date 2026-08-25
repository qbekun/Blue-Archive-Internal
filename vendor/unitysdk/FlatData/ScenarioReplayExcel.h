#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ScenarioReplayExcel; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_SCENARIOREPLAYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD59990)
#define FLATDATA_SCENARIOREPLAYEXCEL_GETROOTASSCENARIOREPLAYEXCEL_OFFSET UNITYSDK_OFFSET(0xD599A0)
#define FLATDATA_SCENARIOREPLAYEXCEL_GETROOTASSCENARIOREPLAYEXCEL_OFFSET UNITYSDK_OFFSET(0xD59A00)
#define FLATDATA_SCENARIOREPLAYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD59A60)
#define FLATDATA_SCENARIOREPLAYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD596B0)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_MODEID_OFFSET UNITYSDK_OFFSET(0xD59A80)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_MODEID_OFFSET UNITYSDK_OFFSET(0xD59AD0)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0xD59B50)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0xD59BA0)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD59C20)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD59C70)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xD59CF0)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xD59D40)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_EPISODEID_OFFSET UNITYSDK_OFFSET(0xD59DC0)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_EPISODEID_OFFSET UNITYSDK_OFFSET(0xD59E10)
#define FLATDATA_SCENARIOREPLAYEXCEL_FRONTSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD59E90)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_FRONTSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD59EF0)
#define FLATDATA_SCENARIOREPLAYEXCEL_FRONTSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD59F30)
#define FLATDATA_SCENARIOREPLAYEXCEL_GETFRONTSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0xD59FC0)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD59FE0)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD5A030)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD5A0B0)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD5A100)
#define FLATDATA_SCENARIOREPLAYEXCEL_BACKSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD5A180)
#define FLATDATA_SCENARIOREPLAYEXCEL_GET_BACKSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD5A1E0)
#define FLATDATA_SCENARIOREPLAYEXCEL_BACKSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD5A220)
#define FLATDATA_SCENARIOREPLAYEXCEL_GETBACKSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0xD5A2B0)
#define FLATDATA_SCENARIOREPLAYEXCEL_CREATESCENARIOREPLAYEXCEL_OFFSET UNITYSDK_OFFSET(0xD5A2D0)
#define FLATDATA_SCENARIOREPLAYEXCEL_STARTSCENARIOREPLAYEXCEL_OFFSET UNITYSDK_OFFSET(0xD5A670)
#define FLATDATA_SCENARIOREPLAYEXCEL_ADDMODEID_OFFSET UNITYSDK_OFFSET(0xD5A560)
#define FLATDATA_SCENARIOREPLAYEXCEL_ADDVOLUMEID_OFFSET UNITYSDK_OFFSET(0xD5A530)
#define FLATDATA_SCENARIOREPLAYEXCEL_ADDREPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD5A5F0)
#define FLATDATA_SCENARIOREPLAYEXCEL_ADDCHAPTERID_OFFSET UNITYSDK_OFFSET(0xD5A500)
#define FLATDATA_SCENARIOREPLAYEXCEL_ADDEPISODEID_OFFSET UNITYSDK_OFFSET(0xD5A4D0)
#define FLATDATA_SCENARIOREPLAYEXCEL_ADDFRONTSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD5A5C0)
#define FLATDATA_SCENARIOREPLAYEXCEL_CREATEFRONTSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD5A690)
#define FLATDATA_SCENARIOREPLAYEXCEL_STARTFRONTSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD5A720)
#define FLATDATA_SCENARIOREPLAYEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0xD5A4A0)
#define FLATDATA_SCENARIOREPLAYEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD5A470)
#define FLATDATA_SCENARIOREPLAYEXCEL_ADDBACKSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD5A590)
#define FLATDATA_SCENARIOREPLAYEXCEL_CREATEBACKSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD5A760)
#define FLATDATA_SCENARIOREPLAYEXCEL_STARTBACKSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD5A7F0)
#define FLATDATA_SCENARIOREPLAYEXCEL_ENDSCENARIOREPLAYEXCEL_OFFSET UNITYSDK_OFFSET(0xD5A620)

namespace FlatData
{
	inline static constexpr unsigned int ScenarioReplayExcel_TypeDefinitionIndex = 9329;

	class ScenarioReplayExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ScenarioReplayExcel* GetRootAsScenarioReplayExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ScenarioReplayExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GETROOTASSCENARIOREPLAYEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioReplayExcel* GetRootAsScenarioReplayExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ScenarioReplayExcel* arg2)
		{
			return ((::FlatData::ScenarioReplayExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ScenarioReplayExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GETROOTASSCENARIOREPLAYEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ScenarioReplayExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ScenarioReplayExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_modeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_MODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ModeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_MODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_volumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_replayType()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_REPLAYTYPE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_ReplayType()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_REPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_chapterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_episodeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_EPISODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EpisodeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_EPISODEID_OFFSET))(nullptr);
		}

		::System::Int64 frontScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_FRONTSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FrontScenarioGroupIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_FRONTSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 FrontScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_FRONTSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFrontScenarioGroupIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GETFRONTSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_groundId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_battleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 backScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_BACKSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BackScenarioGroupIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GET_BACKSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 BackScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_BACKSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBackScenarioGroupIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_GETBACKSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioReplayExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatData::ScenarioModeReplayTypes* arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::FlatBuffers::VectorOffset* arg7, ::System::Int64 arg8, ::System::Int64 arg9, ::FlatBuffers::VectorOffset* arg10)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_CREATESCENARIOREPLAYEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void StartScenarioReplayExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_STARTSCENARIOREPLAYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ADDMODEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddVolumeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ADDVOLUMEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddReplayType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeReplayTypes* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ADDREPLAYTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddChapterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ADDCHAPTERID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEpisodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ADDEPISODEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFrontScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ADDFRONTSCENARIOGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFrontScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_CREATEFRONTSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFrontScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_STARTFRONTSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ADDGROUNDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBackScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ADDBACKSCENARIOGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBackScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_CREATEBACKSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartBackScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_STARTBACKSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndScenarioReplayExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCEL_ENDSCENARIOREPLAYEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

