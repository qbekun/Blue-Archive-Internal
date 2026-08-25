#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RaidStageExcel; }
namespace FlatData { class Difficulty; }
namespace FlatData { class RaidBossGroupType; }
namespace FlatData { class TacticEnvironment; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C48B60)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETROOTASRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C48B70)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETROOTASRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C48BD0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C48C60)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C48C30)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C48C80)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_USEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1C48CD0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_USEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1C48D20)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C48D70)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETRAIDBOSSGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1C48DB0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1C48DD0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETPORTRAITPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C48E10)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1C48E30)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETBGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C48E70)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C48E90)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_BOSSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C48EE0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BOSSCHARACTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C48F40)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETBOSSCHARACTERIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C48F80)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C48FA0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_DIFFICULTYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1C48FF0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_MAXPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C49040)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDROOMLIFETIME_OFFSET UNITYSDK_OFFSET(0x1C49090)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C490E0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1C49130)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDBOSSGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C49180)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_ENTERTIMELINE_OFFSET UNITYSDK_OFFSET(0x1C491D0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETENTERTIMELINEBYTES_OFFSET UNITYSDK_OFFSET(0x1C49210)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_TACTICENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C49230)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_DEFAULTCLEARSCORE_OFFSET UNITYSDK_OFFSET(0x1C49280)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_MAXIMUMSCORE_OFFSET UNITYSDK_OFFSET(0x1C492D0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_PERSECONDMINUSSCORE_OFFSET UNITYSDK_OFFSET(0x1C49320)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_HPPERCENTSCORE_OFFSET UNITYSDK_OFFSET(0x1C49370)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_MINIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x1C493C0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_MAXIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x1C49410)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C49460)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_BATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C494B0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1C49500)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1C49540)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASESTARTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C495A0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASESTARTBYTES_OFFSET UNITYSDK_OFFSET(0x1C495E0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1C49600)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASEENDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C49660)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASEENDBYTES_OFFSET UNITYSDK_OFFSET(0x1C496A0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_VICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C496C0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETVICTORYTIMELINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C49700)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_PHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C49720)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETPHASECHANGETIMELINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C49760)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_TIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1C49780)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_ENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1C497D0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_CLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1C49820)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_SHOWSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1C49870)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BOSSBGINFOKEY_OFFSET UNITYSDK_OFFSET(0x1C498C0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C49910)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATERAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C49960)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4A640)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C4A1A0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDUSEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1C4A5C0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDUSEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1C4A590)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C4A500)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1C4A4D0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBGPATH_OFFSET UNITYSDK_OFFSET(0x1C4A4A0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C4A170)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBOSSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C4A470)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATEBOSSCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4A660)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTBOSSCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4A6F0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C4A440)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDDIFFICULTYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1C4A560)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDMAXPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C4A140)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDROOMLIFETIME_OFFSET UNITYSDK_OFFSET(0x1C4A410)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C4A110)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1C4A0E0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDBOSSGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C4A3E0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDENTERTIMELINE_OFFSET UNITYSDK_OFFSET(0x1C4A3B0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDTACTICENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C4A380)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDDEFAULTCLEARSCORE_OFFSET UNITYSDK_OFFSET(0x1C4A0B0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDMAXIMUMSCORE_OFFSET UNITYSDK_OFFSET(0x1C4A080)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDPERSECONDMINUSSCORE_OFFSET UNITYSDK_OFFSET(0x1C4A050)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDHPPERCENTSCORE_OFFSET UNITYSDK_OFFSET(0x1C4A020)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDMINIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x1C49FF0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDMAXIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x1C49FC0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C49F90)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C4A350)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4A730)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4A7C0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1C4A320)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4A800)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4A890)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1C4A2F0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4A8D0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4A960)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDVICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C4A2C0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDPHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C4A290)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDTIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1C49F60)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1C4A260)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDCLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1C4A230)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDSHOWSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1C4A530)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBOSSBGINFOKEY_OFFSET UNITYSDK_OFFSET(0x1C4A200)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C4A1D0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_ENDRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4A5F0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_FINISHRAIDSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4A9A0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCEL_FINISHSIZEPREFIXEDRAIDSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4A9C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidStageExcel_TypeDefinitionIndex = 19182;

	class RaidStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RaidStageExcel* GetRootAsRaidStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETROOTASRAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RaidStageExcel* GetRootAsRaidStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RaidStageExcel* arg)
		{
			return (return (::MX::Data::Excel::RaidStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RaidStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETROOTASRAIDSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RaidStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBossIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_USEBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBossAIPhaseSync()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_USEBOSSAIPHASESYNC_OFFSET))(nullptr);
		}

		::System::String* get_RaidBossGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDBOSSGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetRaidBossGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETRAIDBOSSGROUPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PortraitPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_PORTRAITPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPortraitPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETPORTRAITPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBGPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETBGPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 BossCharacterId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_BOSSCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BossCharacterIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BOSSCHARACTERIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBossCharacterIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETBOSSCHARACTERIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::Difficulty* get_Difficulty()
		{
			return (return (::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Boolean get_DifficultyOpenCondition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_DIFFICULTYOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxPlayerCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_MAXPLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_RaidRoomLifeTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDROOMLIFETIME_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::FlatData::RaidBossGroupType* get_RaidBossGroupType()
		{
			return (return (::FlatData::RaidBossGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDBOSSGROUPTYPE_OFFSET))(nullptr);
		}

		::System::String* get_EnterTimeLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_ENTERTIMELINE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnterTimeLineBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETENTERTIMELINEBYTES_OFFSET))(nullptr);
		}

		::FlatData::TacticEnvironment* get_TacticEnvironment()
		{
			return (return (::FlatData::TacticEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_TACTICENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultClearScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_DEFAULTCLEARSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaximumScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_MAXIMUMSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_PerSecondMinusScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_PERSECONDMINUSSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_HPPercentScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_HPPERCENTSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_MinimumAcquisitionScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_MINIMUMACQUISITIONSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaximumAcquisitionScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_MAXIMUMACQUISITIONSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_RAIDREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::String* BattleReadyTimelinePath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_BATTLEREADYTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPATHLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 BattleReadyTimelinePhaseStart(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePhaseStartLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASESTARTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleReadyTimelinePhaseStartBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASESTARTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 BattleReadyTimelinePhaseEnd(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePhaseEndLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASEENDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleReadyTimelinePhaseEndBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASEENDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_VICTORYTIMELINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryTimelinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETVICTORYTIMELINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PhaseChangeTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_PHASECHANGETIMELINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPhaseChangeTimelinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GETPHASECHANGETIMELINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeLinePhase()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_TIMELINEPHASE_OFFSET))(nullptr);
		}

		::System::UInt32 get_EnterScenarioKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_ENTERSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_ClearScenarioKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_CLEARSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowSkillCard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_SHOWSKILLCARD_OFFSET))(nullptr);
		}

		::System::UInt32 get_BossBGInfoKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_BOSSBGINFOKEY_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::Difficulty* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::RaidBossGroupType* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::TacticEnvironment* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::UInt32 arg, ::FlatData::EchelonExtensionType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatData::Difficulty*, ::System::Boolean, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatData::RaidBossGroupType*, ::FlatBuffers::StringOffset*, ::FlatData::TacticEnvironment*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATERAIDSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTRAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseBossIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDUSEBOSSINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseBossAIPhaseSync(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDUSEBOSSAIPHASESYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidBossGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDBOSSGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPortraitPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDPORTRAITPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBOSSCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBossCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATEBOSSCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBossCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTBOSSCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficultyOpenCondition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDDIFFICULTYOPENCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxPlayerCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDMAXPLAYERCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidRoomLifeTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDROOMLIFETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidBossGroupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RaidBossGroupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDBOSSGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterTimeLine(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDENTERTIMELINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticEnvironment(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticEnvironment* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDTACTICENVIRONMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultClearScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDDEFAULTCLEARSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaximumScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDMAXIMUMSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPerSecondMinusScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDPERSECONDMINUSSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHPPercentScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDHPPERCENTSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinimumAcquisitionScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDMINIMUMACQUISITIONSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaximumAcquisitionScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDMAXIMUMACQUISITIONSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDRAIDREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePhaseStart(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePhaseStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePhaseStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePhaseEnd(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePhaseEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePhaseEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDVICTORYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseChangeTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDPHASECHANGETIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTimeLinePhase(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDTIMELINEPHASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDENTERSCENARIOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearScenarioKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDCLEARSCENARIOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowSkillCard(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDSHOWSKILLCARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossBGInfoKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDBOSSBGINFOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_ENDRAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRaidStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_FINISHRAIDSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRaidStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCEL_FINISHSIZEPREFIXEDRAIDSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

