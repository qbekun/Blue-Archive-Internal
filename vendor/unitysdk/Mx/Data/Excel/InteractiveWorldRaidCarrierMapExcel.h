#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class InteractiveWorldRaidCarrierMapExcel; }
namespace FlatData { class WorldRaidMapType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B58230)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B58240)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B582A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B58330)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B58300)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B58350)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x1B583A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_WORLDRAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B583F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_WORLDRAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x1B58440)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_REPLAYSEASONGROUPID_OFFSET UNITYSDK_OFFSET(0x1B58490)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_REPLAYSEASONORIGINALPHASEID_OFFSET UNITYSDK_OFFSET(0x1B584E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_RECENTCLEARBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1B58530)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_RECENTCLEAREVENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B58580)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_CHANGETARGET_OFFSET UNITYSDK_OFFSET(0x1B585D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1B58620)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_ARTLEVELPATH_OFFSET UNITYSDK_OFFSET(0x1B58670)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GETARTLEVELPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B586B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_DESIGNLEVELPATH_OFFSET UNITYSDK_OFFSET(0x1B586D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GETDESIGNLEVELPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B58710)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_BRIDGEBGM_OFFSET UNITYSDK_OFFSET(0x1B58730)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_HANGARBGM_OFFSET UNITYSDK_OFFSET(0x1B58780)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_LOBBYBGM_OFFSET UNITYSDK_OFFSET(0x1B587D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_WORLDMAPBGM_OFFSET UNITYSDK_OFFSET(0x1B58820)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDWORLDMAP_OFFSET UNITYSDK_OFFSET(0x1B58870)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDUCPOPUP_OFFSET UNITYSDK_OFFSET(0x1B588C0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B58910)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDHANGAR_OFFSET UNITYSDK_OFFSET(0x1B58960)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDLOBBY_OFFSET UNITYSDK_OFFSET(0x1B589B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_CREATEINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B58A00)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_STARTINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B59200)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B590F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1B590C0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDWORLDRAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B59090)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDWORLDRAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x1B59060)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDREPLAYSEASONGROUPID_OFFSET UNITYSDK_OFFSET(0x1B59030)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDREPLAYSEASONORIGINALPHASEID_OFFSET UNITYSDK_OFFSET(0x1B59000)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDRECENTCLEARBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1B58FD0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDRECENTCLEAREVENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B58FA0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDCHANGETARGET_OFFSET UNITYSDK_OFFSET(0x1B59180)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B58F70)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDARTLEVELPATH_OFFSET UNITYSDK_OFFSET(0x1B59150)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDDESIGNLEVELPATH_OFFSET UNITYSDK_OFFSET(0x1B59120)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDBRIDGEBGM_OFFSET UNITYSDK_OFFSET(0x1B58F40)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDHANGARBGM_OFFSET UNITYSDK_OFFSET(0x1B58F10)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDLOBBYBGM_OFFSET UNITYSDK_OFFSET(0x1B58EE0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDWORLDMAPBGM_OFFSET UNITYSDK_OFFSET(0x1B58EB0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDWORLDMAP_OFFSET UNITYSDK_OFFSET(0x1B58E80)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDUCPOPUP_OFFSET UNITYSDK_OFFSET(0x1B58E50)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B58E20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDHANGAR_OFFSET UNITYSDK_OFFSET(0x1B58DF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDLOBBY_OFFSET UNITYSDK_OFFSET(0x1B58DC0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ENDINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B591B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_FINISHINTERACTIVEWORLDRAIDCARRIERMAPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B59220)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDCARRIERMAPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B59240)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidCarrierMapExcel_TypeDefinitionIndex = 18222;

	class InteractiveWorldRaidCarrierMapExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierMapExcel* GetRootAsInteractiveWorldRaidCarrierMapExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierMapExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierMapExcel* GetRootAsInteractiveWorldRaidCarrierMapExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::InteractiveWorldRaidCarrierMapExcel* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierMapExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::InteractiveWorldRaidCarrierMapExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierMapExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierMapExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_CONDITIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_WORLDRAIDSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidPhaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_WORLDRAIDPHASEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ReplaySeasonGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_REPLAYSEASONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ReplaySeasonOriginalPhaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_REPLAYSEASONORIGINALPHASEID_OFFSET))(nullptr);
		}

		::System::Int64 get_RecentClearBossGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_RECENTCLEARBOSSGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_RecentClearEventStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_RECENTCLEAREVENTSTAGEID_OFFSET))(nullptr);
		}

		::FlatData::WorldRaidMapType* get_ChangeTarget()
		{
			return (return (::FlatData::WorldRaidMapType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_CHANGETARGET_OFFSET))(nullptr);
		}

		::System::Int64 get_Priority()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::String* get_ArtLevelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_ARTLEVELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetArtLevelPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GETARTLEVELPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DesignLevelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_DESIGNLEVELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDesignLevelPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GETDESIGNLEVELPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_BridgeBGM()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_BRIDGEBGM_OFFSET))(nullptr);
		}

		::System::Int64 get_HangarBGM()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_HANGARBGM_OFFSET))(nullptr);
		}

		::System::Int64 get_LobbyBGM()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_LOBBYBGM_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldMapBGM()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_WORLDMAPBGM_OFFSET))(nullptr);
		}

		::System::Int64 get_InformationGroupIdWorldMap()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDWORLDMAP_OFFSET))(nullptr);
		}

		::System::Int64 get_InformationGroupIdUCPopup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDUCPOPUP_OFFSET))(nullptr);
		}

		::System::Int64 get_InformationGroupIdBridge()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDBRIDGE_OFFSET))(nullptr);
		}

		::System::Int64 get_InformationGroupIdHangar()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDHANGAR_OFFSET))(nullptr);
		}

		::System::Int64 get_InformationGroupIdLobby()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_GET_INFORMATIONGROUPIDLOBBY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInteractiveWorldRaidCarrierMapExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::WorldRaidMapType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::WorldRaidMapType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_CREATEINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartInteractiveWorldRaidCarrierMapExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_STARTINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDCONDITIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDWORLDRAIDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidPhaseId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDWORLDRAIDPHASEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplaySeasonGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDREPLAYSEASONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplaySeasonOriginalPhaseId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDREPLAYSEASONORIGINALPHASEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecentClearBossGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDRECENTCLEARBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecentClearEventStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDRECENTCLEAREVENTSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeTarget(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WorldRaidMapType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WorldRaidMapType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDCHANGETARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddArtLevelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDARTLEVELPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDesignLevelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDDESIGNLEVELPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBridgeBGM(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDBRIDGEBGM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHangarBGM(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDHANGARBGM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyBGM(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDLOBBYBGM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldMapBGM(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDWORLDMAPBGM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInformationGroupIdWorldMap(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDWORLDMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInformationGroupIdUCPopup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDUCPOPUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInformationGroupIdBridge(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDBRIDGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInformationGroupIdHangar(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDHANGAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInformationGroupIdLobby(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ADDINFORMATIONGROUPIDLOBBY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndInteractiveWorldRaidCarrierMapExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_ENDINTERACTIVEWORLDRAIDCARRIERMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInteractiveWorldRaidCarrierMapExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_FINISHINTERACTIVEWORLDRAIDCARRIERMAPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedInteractiveWorldRaidCarrierMapExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERMAPEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDCARRIERMAPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

