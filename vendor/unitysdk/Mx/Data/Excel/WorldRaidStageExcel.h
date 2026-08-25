#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WorldRaidStageExcel; }
namespace FlatData { class WorldRaidDifficulty; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD0210)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETROOTASWORLDRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD0220)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETROOTASWORLDRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD0280)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CD0310)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CD02E0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CD0330)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_USEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1CD0380)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_USEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1CD03D0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD0420)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1CD0470)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETPORTRAITPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1CD04B0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1CD04D0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETBGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1CD0510)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_RAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1CD0530)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_BOSSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1CD0580)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BOSSCHARACTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CD05E0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETBOSSCHARACTERIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CD0620)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ASSISTCHARACTERLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x1CD0640)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_WORLDRAIDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CD0690)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_DIFFICULTYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1CD06E0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_RAIDENTERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CD0730)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_REENTERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CD0780)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1CD07D0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1CD0820)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_RAIDBATTLEENDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD0870)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_RAIDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD08C0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1CD0910)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1CD0960)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1CD09A0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASESTARTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CD0A00)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASESTARTBYTES_OFFSET UNITYSDK_OFFSET(0x1CD0A40)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1CD0A60)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASEENDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CD0AC0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASEENDBYTES_OFFSET UNITYSDK_OFFSET(0x1CD0B00)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_VICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1CD0B20)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETVICTORYTIMELINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1CD0B60)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_PHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1CD0B80)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETPHASECHANGETIMELINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1CD0BC0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_TIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1CD0BE0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1CD0C30)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_CLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1CD0C80)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_USEFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x1CD0CD0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1CD0D20)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ISRAIDSCENARIOBATTLE_OFFSET UNITYSDK_OFFSET(0x1CD0D70)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_SHOWSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1CD0DC0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BOSSBGINFOKEY_OFFSET UNITYSDK_OFFSET(0x1CD0E10)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_DAMAGETOWORLDBOSS_OFFSET UNITYSDK_OFFSET(0x1CD0E60)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ALLYPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1CD0EB0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ALLYPASSIVESKILLLENGTH_OFFSET UNITYSDK_OFFSET(0x1CD0F00)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ALLYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1CD0F40)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ALLYPASSIVESKILLLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1CD0FA0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETALLYPASSIVESKILLLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1CD0FE0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_SAVECURRENTLOCALBOSSHP_OFFSET UNITYSDK_OFFSET(0x1CD1000)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CD1050)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEWORLDRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD10A0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTWORLDRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD1D90)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CD1950)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDUSEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1CD1D10)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDUSEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1CD1CE0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDWORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD1920)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1CD1BC0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBGPATH_OFFSET UNITYSDK_OFFSET(0x1CD1B90)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDRAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1CD18F0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBOSSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1CD1B60)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEBOSSCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD1DB0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTBOSSCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD1E40)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDASSISTCHARACTERLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x1CD18C0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDWORLDRAIDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CD1B30)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDDIFFICULTYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1CD1CB0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDRAIDENTERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CD1890)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDREENTERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CD1860)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1CD1830)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1CD1800)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDRAIDBATTLEENDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD17D0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDRAIDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD17A0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1CD1B00)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD1E80)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD1F10)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1CD1AD0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD1F50)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD1FE0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1CD1AA0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD2020)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD20B0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDVICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1CD1A70)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDPHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1CD1A40)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDTIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1CD1770)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1CD1740)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDCLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1CD1710)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDUSEFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x1CD1C80)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1CD16E0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDISRAIDSCENARIOBATTLE_OFFSET UNITYSDK_OFFSET(0x1CD1C50)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDSHOWSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1CD1C20)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBOSSBGINFOKEY_OFFSET UNITYSDK_OFFSET(0x1CD1A10)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDDAMAGETOWORLDBOSS_OFFSET UNITYSDK_OFFSET(0x1CD16B0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDALLYPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1CD19E0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEALLYPASSIVESKILLVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD20F0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTALLYPASSIVESKILLVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD2180)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDALLYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1CD19B0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEALLYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD21C0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTALLYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1CD2250)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDSAVECURRENTLOCALBOSSHP_OFFSET UNITYSDK_OFFSET(0x1CD1BF0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CD1980)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ENDWORLDRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD1D40)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_FINISHWORLDRAIDSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD2290)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_FINISHSIZEPREFIXEDWORLDRAIDSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD22B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidStageExcel_TypeDefinitionIndex = 19826;

	class WorldRaidStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WorldRaidStageExcel* GetRootAsWorldRaidStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETROOTASWORLDRAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidStageExcel* GetRootAsWorldRaidStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WorldRaidStageExcel* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WorldRaidStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETROOTASWORLDRAIDSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBossIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_USEBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBossAIPhaseSync()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_USEBOSSAIPHASESYNC_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidBossGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_WORLDRAIDBOSSGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_PortraitPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_PORTRAITPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPortraitPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETPORTRAITPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBGPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETBGPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_RAIDCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 BossCharacterId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_BOSSCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BossCharacterIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BOSSCHARACTERIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBossCharacterIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETBOSSCHARACTERIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistCharacterLimitCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ASSISTCHARACTERLIMITCOUNT_OFFSET))(nullptr);
		}

		::FlatData::WorldRaidDifficulty* get_WorldRaidDifficulty()
		{
			return (return (::FlatData::WorldRaidDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_WORLDRAIDDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Boolean get_DifficultyOpenCondition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_DIFFICULTYOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidEnterAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_RAIDENTERAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ReEnterAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_REENTERAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidBattleEndRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_RAIDBATTLEENDREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_RAIDREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::String* BattleReadyTimelinePath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPATHLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 BattleReadyTimelinePhaseStart(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePhaseStartLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASESTARTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleReadyTimelinePhaseStartBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASESTARTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 BattleReadyTimelinePhaseEnd(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePhaseEndLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASEENDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleReadyTimelinePhaseEndBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASEENDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_VICTORYTIMELINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryTimelinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETVICTORYTIMELINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PhaseChangeTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_PHASECHANGETIMELINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPhaseChangeTimelinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETPHASECHANGETIMELINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeLinePhase()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_TIMELINEPHASE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnterScenarioKey()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ENTERSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearScenarioKey()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_CLEARSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_UseFixedEchelon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_USEFIXEDECHELON_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRaidScenarioBattle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ISRAIDSCENARIOBATTLE_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowSkillCard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_SHOWSKILLCARD_OFFSET))(nullptr);
		}

		::System::UInt32 get_BossBGInfoKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_BOSSBGINFOKEY_OFFSET))(nullptr);
		}

		::System::Int64 get_DamageToWorldBoss()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_DAMAGETOWORLDBOSS_OFFSET))(nullptr);
		}

		::System::String* AllyPassiveSkill(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ALLYPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AllyPassiveSkillLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ALLYPASSIVESKILLLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 AllyPassiveSkillLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ALLYPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AllyPassiveSkillLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ALLYPASSIVESKILLLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllyPassiveSkillLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GETALLYPASSIVESKILLLEVELBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_SaveCurrentLocalBossHP()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_SAVECURRENTLOCALBOSSHP_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWorldRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatData::WorldRaidDifficulty* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::UInt32 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::FlatData::EchelonExtensionType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatData::WorldRaidDifficulty*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEWORLDRAIDSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWorldRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTWORLDRAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseBossIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDUSEBOSSINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseBossAIPhaseSync(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDUSEBOSSAIPHASESYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidBossGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDWORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPortraitPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDPORTRAITPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDRAIDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBOSSCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBossCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEBOSSCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBossCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTBOSSCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAssistCharacterLimitCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDASSISTCHARACTERLIMITCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WorldRaidDifficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WorldRaidDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDWORLDRAIDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficultyOpenCondition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDDIFFICULTYOPENCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidEnterAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDRAIDENTERAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReEnterAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDREENTERAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidBattleEndRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDRAIDBATTLEENDREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDRAIDREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePhaseStart(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePhaseStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePhaseStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePhaseEnd(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePhaseEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePhaseEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDVICTORYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseChangeTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDPHASECHANGETIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTimeLinePhase(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDTIMELINEPHASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDENTERSCENARIOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearScenarioKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDCLEARSCENARIOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseFixedEchelon(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDUSEFIXEDECHELON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsRaidScenarioBattle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDISRAIDSCENARIOBATTLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowSkillCard(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDSHOWSKILLCARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossBGInfoKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDBOSSBGINFOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDamageToWorldBoss(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDDAMAGETOWORLDBOSS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAllyPassiveSkill(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDALLYPASSIVESKILL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAllyPassiveSkillVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEALLYPASSIVESKILLVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAllyPassiveSkillVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTALLYPASSIVESKILLVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAllyPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDALLYPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAllyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_CREATEALLYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAllyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_STARTALLYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSaveCurrentLocalBossHP(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDSAVECURRENTLOCALBOSSHP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWorldRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_ENDWORLDRAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWorldRaidStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_FINISHWORLDRAIDSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWorldRaidStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCEL_FINISHSIZEPREFIXEDWORLDRAIDSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

