#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EliminateRaidStageExcel; }
namespace FlatData { class ParcelType; }
namespace FlatData { class Difficulty; }
namespace FlatData { class RaidBossGroupType; }
namespace FlatData { class TacticEnvironment; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A83330)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETROOTASELIMINATERAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A83340)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETROOTASELIMINATERAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A833A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A83430)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A83400)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A83450)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_USEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1A834A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_USEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1A834F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1A83540)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETRAIDBOSSGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1A83580)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A835A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A835F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A83640)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BOSSSPINEPATH_OFFSET UNITYSDK_OFFSET(0x1A83690)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBOSSSPINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A836D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1A836F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETPORTRAITPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A83730)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1A83750)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A83790)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A837B0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_BOSSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A83800)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BOSSCHARACTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A83860)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBOSSCHARACTERIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A838A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1A838C0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1A83910)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_MAXPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A83960)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDROOMLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A839B0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1A83A00)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1A83A50)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDBOSSGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A83AA0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ENTERTIMELINE_OFFSET UNITYSDK_OFFSET(0x1A83AF0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETENTERTIMELINEBYTES_OFFSET UNITYSDK_OFFSET(0x1A83B30)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_TACTICENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1A83B50)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_DEFAULTCLEARSCORE_OFFSET UNITYSDK_OFFSET(0x1A83BA0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_MAXIMUMSCORE_OFFSET UNITYSDK_OFFSET(0x1A83BF0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_PERSECONDMINUSSCORE_OFFSET UNITYSDK_OFFSET(0x1A83C40)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_HPPERCENTSCORE_OFFSET UNITYSDK_OFFSET(0x1A83C90)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_MINIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x1A83CE0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_MAXIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x1A83D30)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A83D80)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_BATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1A83DD0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1A83E20)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1A83E60)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASESTARTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A83EC0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASESTARTBYTES_OFFSET UNITYSDK_OFFSET(0x1A83F00)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1A83F20)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASEENDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A83F80)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASEENDBYTES_OFFSET UNITYSDK_OFFSET(0x1A83FC0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_VICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1A83FE0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETVICTORYTIMELINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A84020)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_PHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1A84040)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETPHASECHANGETIMELINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A84080)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_TIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1A840A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1A840F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_CLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1A84140)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_SHOWSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1A84190)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BOSSBGINFOKEY_OFFSET UNITYSDK_OFFSET(0x1A841E0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A84230)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEELIMINATERAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A84280)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTELIMINATERAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A850D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A84BA0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDUSEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1A85050)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDUSEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1A85020)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1A84F90)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A84F60)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A84B70)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A84F30)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBOSSSPINEPATH_OFFSET UNITYSDK_OFFSET(0x1A84F00)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1A84ED0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBGPATH_OFFSET UNITYSDK_OFFSET(0x1A84EA0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A84B40)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBOSSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A84E70)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEBOSSCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A850F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTBOSSCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A85180)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1A84E40)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDISOPEN_OFFSET UNITYSDK_OFFSET(0x1A84FF0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDMAXPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A84B10)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDROOMLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A84E10)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1A84AE0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1A84AB0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDBOSSGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A84DE0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDENTERTIMELINE_OFFSET UNITYSDK_OFFSET(0x1A84DB0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDTACTICENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1A84D80)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDDEFAULTCLEARSCORE_OFFSET UNITYSDK_OFFSET(0x1A84A80)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDMAXIMUMSCORE_OFFSET UNITYSDK_OFFSET(0x1A84A50)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDPERSECONDMINUSSCORE_OFFSET UNITYSDK_OFFSET(0x1A84A20)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDHPPERCENTSCORE_OFFSET UNITYSDK_OFFSET(0x1A849F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDMINIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x1A849C0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDMAXIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x1A84990)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A84960)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1A84D50)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1A851C0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1A85250)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1A84D20)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A85290)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A85320)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1A84CF0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A85360)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A853F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDVICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1A84CC0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDPHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1A84C90)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDTIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1A84930)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1A84C60)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDCLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1A84C30)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDSHOWSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1A84FC0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBOSSBGINFOKEY_OFFSET UNITYSDK_OFFSET(0x1A84C00)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A84BD0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ENDELIMINATERAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A85080)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_FINISHELIMINATERAIDSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A85430)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A85450)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageExcel_TypeDefinitionIndex = 17399;

	class EliminateRaidStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageExcel* GetRootAsEliminateRaidStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETROOTASELIMINATERAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageExcel* GetRootAsEliminateRaidStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EliminateRaidStageExcel* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EliminateRaidStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETROOTASELIMINATERAIDSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBossIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_USEBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBossAIPhaseSync()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_USEBOSSAIPHASESYNC_OFFSET))(nullptr);
		}

		::System::String* get_RaidBossGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDBOSSGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetRaidBossGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETRAIDBOSSGROUPBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RaidEnterCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidEnterCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_RaidEnterCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::String* get_BossSpinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BOSSSPINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBossSpinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBOSSSPINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PortraitPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_PORTRAITPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPortraitPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETPORTRAITPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBGPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBGPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 BossCharacterId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_BOSSCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BossCharacterIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BOSSCHARACTERIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBossCharacterIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBOSSCHARACTERIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::Difficulty* get_Difficulty()
		{
			return (return (::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxPlayerCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_MAXPLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_RaidRoomLifeTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDROOMLIFETIME_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::FlatData::RaidBossGroupType* get_RaidBossGroupType()
		{
			return (return (::FlatData::RaidBossGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDBOSSGROUPTYPE_OFFSET))(nullptr);
		}

		::System::String* get_EnterTimeLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ENTERTIMELINE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnterTimeLineBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETENTERTIMELINEBYTES_OFFSET))(nullptr);
		}

		::FlatData::TacticEnvironment* get_TacticEnvironment()
		{
			return (return (::FlatData::TacticEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_TACTICENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultClearScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_DEFAULTCLEARSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaximumScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_MAXIMUMSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_PerSecondMinusScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_PERSECONDMINUSSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_HPPercentScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_HPPERCENTSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_MinimumAcquisitionScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_MINIMUMACQUISITIONSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaximumAcquisitionScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_MAXIMUMACQUISITIONSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_RAIDREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::String* BattleReadyTimelinePath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_BATTLEREADYTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPATHLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 BattleReadyTimelinePhaseStart(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePhaseStartLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASESTARTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleReadyTimelinePhaseStartBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASESTARTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 BattleReadyTimelinePhaseEnd(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePhaseEndLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASEENDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleReadyTimelinePhaseEndBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASEENDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_VICTORYTIMELINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryTimelinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETVICTORYTIMELINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PhaseChangeTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_PHASECHANGETIMELINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPhaseChangeTimelinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GETPHASECHANGETIMELINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeLinePhase()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_TIMELINEPHASE_OFFSET))(nullptr);
		}

		::System::UInt32 get_EnterScenarioKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ENTERSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_ClearScenarioKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_CLEARSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowSkillCard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_SHOWSKILLCARD_OFFSET))(nullptr);
		}

		::System::UInt32 get_BossBGInfoKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_BOSSBGINFOKEY_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEliminateRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::Difficulty* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::RaidBossGroupType* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::TacticEnvironment* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::UInt32 arg, ::FlatData::EchelonExtensionType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatData::Difficulty*, ::System::Boolean, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatData::RaidBossGroupType*, ::FlatBuffers::StringOffset*, ::FlatData::TacticEnvironment*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEELIMINATERAIDSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEliminateRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTELIMINATERAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseBossIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDUSEBOSSINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseBossAIPhaseSync(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDUSEBOSSAIPHASESYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidBossGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDBOSSGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDENTERCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDENTERCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDENTERCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossSpinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBOSSSPINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPortraitPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDPORTRAITPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBOSSCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBossCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEBOSSCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBossCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTBOSSCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsOpen(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDISOPEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxPlayerCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDMAXPLAYERCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidRoomLifeTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDROOMLIFETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidBossGroupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RaidBossGroupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDBOSSGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterTimeLine(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDENTERTIMELINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticEnvironment(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticEnvironment* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDTACTICENVIRONMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultClearScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDDEFAULTCLEARSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaximumScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDMAXIMUMSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPerSecondMinusScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDPERSECONDMINUSSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHPPercentScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDHPPERCENTSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinimumAcquisitionScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDMINIMUMACQUISITIONSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaximumAcquisitionScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDMAXIMUMACQUISITIONSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDRAIDREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePhaseStart(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePhaseStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePhaseStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePhaseEnd(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePhaseEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePhaseEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDVICTORYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseChangeTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDPHASECHANGETIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTimeLinePhase(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDTIMELINEPHASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDENTERSCENARIOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearScenarioKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDCLEARSCENARIOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowSkillCard(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDSHOWSKILLCARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossBGInfoKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDBOSSBGINFOKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEliminateRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_ENDELIMINATERAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEliminateRaidStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_FINISHELIMINATERAIDSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEliminateRaidStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

