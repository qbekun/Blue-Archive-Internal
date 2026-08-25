#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstArenaExcel; }
namespace FlatData { class ParcelType; }
namespace FlatData { class StatType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTARENAEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE9C00)
#define FLATDATA_CONSTARENAEXCEL_GETROOTASCONSTARENAEXCEL_OFFSET UNITYSDK_OFFSET(0xCE9C10)
#define FLATDATA_CONSTARENAEXCEL_GETROOTASCONSTARENAEXCEL_OFFSET UNITYSDK_OFFSET(0xCE9C70)
#define FLATDATA_CONSTARENAEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCE9CD0)
#define FLATDATA_CONSTARENAEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE9920)
#define FLATDATA_CONSTARENAEXCEL_GET_ATTACKCOOLTIME_OFFSET UNITYSDK_OFFSET(0xCE9CF0)
#define FLATDATA_CONSTARENAEXCEL_GET_ATTACKCOOLTIME_OFFSET UNITYSDK_OFFSET(0xCE9D40)
#define FLATDATA_CONSTARENAEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xCE9DC0)
#define FLATDATA_CONSTARENAEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xCE9E10)
#define FLATDATA_CONSTARENAEXCEL_GET_DEFENSECOOLTIME_OFFSET UNITYSDK_OFFSET(0xCE9E90)
#define FLATDATA_CONSTARENAEXCEL_GET_DEFENSECOOLTIME_OFFSET UNITYSDK_OFFSET(0xCE9EE0)
#define FLATDATA_CONSTARENAEXCEL_GET_TSSSTARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0xCE9F60)
#define FLATDATA_CONSTARENAEXCEL_GET_TSSSTARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0xCE9FB0)
#define FLATDATA_CONSTARENAEXCEL_GET_ENDALARM_OFFSET UNITYSDK_OFFSET(0xCEA030)
#define FLATDATA_CONSTARENAEXCEL_GET_ENDALARM_OFFSET UNITYSDK_OFFSET(0xCEA080)
#define FLATDATA_CONSTARENAEXCEL_GET_TIMEREWARDMAXAMOUNT_OFFSET UNITYSDK_OFFSET(0xCEA100)
#define FLATDATA_CONSTARENAEXCEL_GET_TIMEREWARDMAXAMOUNT_OFFSET UNITYSDK_OFFSET(0xCEA150)
#define FLATDATA_CONSTARENAEXCEL_GET_ENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xCEA1D0)
#define FLATDATA_CONSTARENAEXCEL_GET_ENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xCEA220)
#define FLATDATA_CONSTARENAEXCEL_GET_ENTERCOSTID_OFFSET UNITYSDK_OFFSET(0xCEA2A0)
#define FLATDATA_CONSTARENAEXCEL_GET_ENTERCOSTID_OFFSET UNITYSDK_OFFSET(0xCEA2F0)
#define FLATDATA_CONSTARENAEXCEL_GET_TICKETCOST_OFFSET UNITYSDK_OFFSET(0xCEA370)
#define FLATDATA_CONSTARENAEXCEL_GET_TICKETCOST_OFFSET UNITYSDK_OFFSET(0xCEA3C0)
#define FLATDATA_CONSTARENAEXCEL_GET_DAILYREWARDRESETTIME_OFFSET UNITYSDK_OFFSET(0xCEA440)
#define FLATDATA_CONSTARENAEXCEL_GET_DAILYREWARDRESETTIME_OFFSET UNITYSDK_OFFSET(0xCEA480)
#define FLATDATA_CONSTARENAEXCEL_GETDAILYREWARDRESETTIMEBYTES_OFFSET UNITYSDK_OFFSET(0xCEA4F0)
#define FLATDATA_CONSTARENAEXCEL_GET_OPENSCENARIOID_OFFSET UNITYSDK_OFFSET(0xCEA510)
#define FLATDATA_CONSTARENAEXCEL_GET_OPENSCENARIOID_OFFSET UNITYSDK_OFFSET(0xCEA550)
#define FLATDATA_CONSTARENAEXCEL_GETOPENSCENARIOIDBYTES_OFFSET UNITYSDK_OFFSET(0xCEA5C0)
#define FLATDATA_CONSTARENAEXCEL_CHARACTERSLOTHIDERANK_OFFSET UNITYSDK_OFFSET(0xCEA5E0)
#define FLATDATA_CONSTARENAEXCEL_GET_CHARACTERSLOTHIDERANKLENGTH_OFFSET UNITYSDK_OFFSET(0xCEA640)
#define FLATDATA_CONSTARENAEXCEL_CHARACTERSLOTHIDERANK_OFFSET UNITYSDK_OFFSET(0xCEA680)
#define FLATDATA_CONSTARENAEXCEL_GETCHARACTERSLOTHIDERANKBYTES_OFFSET UNITYSDK_OFFSET(0xCEA710)
#define FLATDATA_CONSTARENAEXCEL_GET_MAPSLOTHIDERANK_OFFSET UNITYSDK_OFFSET(0xCEA730)
#define FLATDATA_CONSTARENAEXCEL_GET_MAPSLOTHIDERANK_OFFSET UNITYSDK_OFFSET(0xCEA780)
#define FLATDATA_CONSTARENAEXCEL_RELATIVEOPPONENTRANKSTART_OFFSET UNITYSDK_OFFSET(0xCEA800)
#define FLATDATA_CONSTARENAEXCEL_GET_RELATIVEOPPONENTRANKSTARTLENGTH_OFFSET UNITYSDK_OFFSET(0xCEA860)
#define FLATDATA_CONSTARENAEXCEL_RELATIVEOPPONENTRANKSTART_OFFSET UNITYSDK_OFFSET(0xCEA8A0)
#define FLATDATA_CONSTARENAEXCEL_GETRELATIVEOPPONENTRANKSTARTBYTES_OFFSET UNITYSDK_OFFSET(0xCEA930)
#define FLATDATA_CONSTARENAEXCEL_RELATIVEOPPONENTRANKEND_OFFSET UNITYSDK_OFFSET(0xCEA950)
#define FLATDATA_CONSTARENAEXCEL_GET_RELATIVEOPPONENTRANKENDLENGTH_OFFSET UNITYSDK_OFFSET(0xCEA9B0)
#define FLATDATA_CONSTARENAEXCEL_RELATIVEOPPONENTRANKEND_OFFSET UNITYSDK_OFFSET(0xCEA9F0)
#define FLATDATA_CONSTARENAEXCEL_GETRELATIVEOPPONENTRANKENDBYTES_OFFSET UNITYSDK_OFFSET(0xCEAA80)
#define FLATDATA_CONSTARENAEXCEL_MODIFIEDSTATTYPE_OFFSET UNITYSDK_OFFSET(0xCEAAA0)
#define FLATDATA_CONSTARENAEXCEL_GET_MODIFIEDSTATTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xCEAB00)
#define FLATDATA_CONSTARENAEXCEL_MODIFIEDSTATTYPE_OFFSET UNITYSDK_OFFSET(0xCEAB40)
#define FLATDATA_CONSTARENAEXCEL_GETMODIFIEDSTATTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xCEABD0)
#define FLATDATA_CONSTARENAEXCEL_STATMULFACTOR_OFFSET UNITYSDK_OFFSET(0xCEABF0)
#define FLATDATA_CONSTARENAEXCEL_GET_STATMULFACTORLENGTH_OFFSET UNITYSDK_OFFSET(0xCEAC50)
#define FLATDATA_CONSTARENAEXCEL_STATMULFACTOR_OFFSET UNITYSDK_OFFSET(0xCEAC90)
#define FLATDATA_CONSTARENAEXCEL_GETSTATMULFACTORBYTES_OFFSET UNITYSDK_OFFSET(0xCEAD20)
#define FLATDATA_CONSTARENAEXCEL_STATSUMFACTOR_OFFSET UNITYSDK_OFFSET(0xCEAD40)
#define FLATDATA_CONSTARENAEXCEL_GET_STATSUMFACTORLENGTH_OFFSET UNITYSDK_OFFSET(0xCEADA0)
#define FLATDATA_CONSTARENAEXCEL_STATSUMFACTOR_OFFSET UNITYSDK_OFFSET(0xCEADE0)
#define FLATDATA_CONSTARENAEXCEL_GETSTATSUMFACTORBYTES_OFFSET UNITYSDK_OFFSET(0xCEAE70)
#define FLATDATA_CONSTARENAEXCEL_NPCNAME_OFFSET UNITYSDK_OFFSET(0xCEAE90)
#define FLATDATA_CONSTARENAEXCEL_GET_NPCNAMELENGTH_OFFSET UNITYSDK_OFFSET(0xCEAEE0)
#define FLATDATA_CONSTARENAEXCEL_NPCNAME_OFFSET UNITYSDK_OFFSET(0xCEAF20)
#define FLATDATA_CONSTARENAEXCEL_GET_NPCMAINCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCEAFA0)
#define FLATDATA_CONSTARENAEXCEL_GET_NPCMAINCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCEAFF0)
#define FLATDATA_CONSTARENAEXCEL_GET_NPCSUPPORTCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCEB070)
#define FLATDATA_CONSTARENAEXCEL_GET_NPCSUPPORTCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCEB0C0)
#define FLATDATA_CONSTARENAEXCEL_GET_NPCCHARACTERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xCEB140)
#define FLATDATA_CONSTARENAEXCEL_GET_NPCCHARACTERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xCEB190)
#define FLATDATA_CONSTARENAEXCEL_GET_TIMESPANINDAYSFORBATTLEHISTORY_OFFSET UNITYSDK_OFFSET(0xCEB210)
#define FLATDATA_CONSTARENAEXCEL_GET_TIMESPANINDAYSFORBATTLEHISTORY_OFFSET UNITYSDK_OFFSET(0xCEB260)
#define FLATDATA_CONSTARENAEXCEL_GET_HIDDENCHARACTERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCEB2E0)
#define FLATDATA_CONSTARENAEXCEL_GET_HIDDENCHARACTERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCEB320)
#define FLATDATA_CONSTARENAEXCEL_GETHIDDENCHARACTERIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xCEB390)
#define FLATDATA_CONSTARENAEXCEL_GET_DEFENSEVICTORYREWARDMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xCEB3B0)
#define FLATDATA_CONSTARENAEXCEL_GET_DEFENSEVICTORYREWARDMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xCEB400)
#define FLATDATA_CONSTARENAEXCEL_GET_TOPRANKERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xCEB480)
#define FLATDATA_CONSTARENAEXCEL_GET_TOPRANKERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xCEB4D0)
#define FLATDATA_CONSTARENAEXCEL_GET_AUTOREFRESHINTERVALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xCEB550)
#define FLATDATA_CONSTARENAEXCEL_GET_AUTOREFRESHINTERVALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xCEB5A0)
#define FLATDATA_CONSTARENAEXCEL_GET_ECHELONSETTINGINTERVALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xCEB620)
#define FLATDATA_CONSTARENAEXCEL_GET_ECHELONSETTINGINTERVALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xCEB670)
#define FLATDATA_CONSTARENAEXCEL_GET_SKIPALLOWEDTIMEMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xCEB6F0)
#define FLATDATA_CONSTARENAEXCEL_GET_SKIPALLOWEDTIMEMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xCEB740)
#define FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONCHANGEINFOSTARTTIME_OFFSET UNITYSDK_OFFSET(0xCEB7C0)
#define FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONCHANGEINFOSTARTTIME_OFFSET UNITYSDK_OFFSET(0xCEB800)
#define FLATDATA_CONSTARENAEXCEL_GETSHOWSEASONCHANGEINFOSTARTTIMEBYTES_OFFSET UNITYSDK_OFFSET(0xCEB870)
#define FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONCHANGEINFOENDTIME_OFFSET UNITYSDK_OFFSET(0xCEB890)
#define FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONCHANGEINFOENDTIME_OFFSET UNITYSDK_OFFSET(0xCEB8D0)
#define FLATDATA_CONSTARENAEXCEL_GETSHOWSEASONCHANGEINFOENDTIMEBYTES_OFFSET UNITYSDK_OFFSET(0xCEB940)
#define FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONID_OFFSET UNITYSDK_OFFSET(0xCEB960)
#define FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONID_OFFSET UNITYSDK_OFFSET(0xCEB9B0)
#define FLATDATA_CONSTARENAEXCEL_GET_ARENAHISTORYQUERYLIMITDAYS_OFFSET UNITYSDK_OFFSET(0xCEBA30)
#define FLATDATA_CONSTARENAEXCEL_GET_ARENAHISTORYQUERYLIMITDAYS_OFFSET UNITYSDK_OFFSET(0xCEBA80)
#define FLATDATA_CONSTARENAEXCEL_CREATECONSTARENAEXCEL_OFFSET UNITYSDK_OFFSET(0xCEBB00)
#define FLATDATA_CONSTARENAEXCEL_STARTCONSTARENAEXCEL_OFFSET UNITYSDK_OFFSET(0xCEC750)
#define FLATDATA_CONSTARENAEXCEL_ADDATTACKCOOLTIME_OFFSET UNITYSDK_OFFSET(0xCEC430)
#define FLATDATA_CONSTARENAEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xCEC400)
#define FLATDATA_CONSTARENAEXCEL_ADDDEFENSECOOLTIME_OFFSET UNITYSDK_OFFSET(0xCEC3D0)
#define FLATDATA_CONSTARENAEXCEL_ADDTSSSTARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0xCEC3A0)
#define FLATDATA_CONSTARENAEXCEL_ADDENDALARM_OFFSET UNITYSDK_OFFSET(0xCEC370)
#define FLATDATA_CONSTARENAEXCEL_ADDTIMEREWARDMAXAMOUNT_OFFSET UNITYSDK_OFFSET(0xCEC340)
#define FLATDATA_CONSTARENAEXCEL_ADDENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xCEC6D0)
#define FLATDATA_CONSTARENAEXCEL_ADDENTERCOSTID_OFFSET UNITYSDK_OFFSET(0xCEC310)
#define FLATDATA_CONSTARENAEXCEL_ADDTICKETCOST_OFFSET UNITYSDK_OFFSET(0xCEC2E0)
#define FLATDATA_CONSTARENAEXCEL_ADDDAILYREWARDRESETTIME_OFFSET UNITYSDK_OFFSET(0xCEC6A0)
#define FLATDATA_CONSTARENAEXCEL_ADDOPENSCENARIOID_OFFSET UNITYSDK_OFFSET(0xCEC670)
#define FLATDATA_CONSTARENAEXCEL_ADDCHARACTERSLOTHIDERANK_OFFSET UNITYSDK_OFFSET(0xCEC640)
#define FLATDATA_CONSTARENAEXCEL_CREATECHARACTERSLOTHIDERANKVECTOR_OFFSET UNITYSDK_OFFSET(0xCEC770)
#define FLATDATA_CONSTARENAEXCEL_STARTCHARACTERSLOTHIDERANKVECTOR_OFFSET UNITYSDK_OFFSET(0xCEC800)
#define FLATDATA_CONSTARENAEXCEL_ADDMAPSLOTHIDERANK_OFFSET UNITYSDK_OFFSET(0xCEC2B0)
#define FLATDATA_CONSTARENAEXCEL_ADDRELATIVEOPPONENTRANKSTART_OFFSET UNITYSDK_OFFSET(0xCEC610)
#define FLATDATA_CONSTARENAEXCEL_CREATERELATIVEOPPONENTRANKSTARTVECTOR_OFFSET UNITYSDK_OFFSET(0xCEC840)
#define FLATDATA_CONSTARENAEXCEL_STARTRELATIVEOPPONENTRANKSTARTVECTOR_OFFSET UNITYSDK_OFFSET(0xCEC8D0)
#define FLATDATA_CONSTARENAEXCEL_ADDRELATIVEOPPONENTRANKEND_OFFSET UNITYSDK_OFFSET(0xCEC5E0)
#define FLATDATA_CONSTARENAEXCEL_CREATERELATIVEOPPONENTRANKENDVECTOR_OFFSET UNITYSDK_OFFSET(0xCEC910)
#define FLATDATA_CONSTARENAEXCEL_STARTRELATIVEOPPONENTRANKENDVECTOR_OFFSET UNITYSDK_OFFSET(0xCEC9A0)
#define FLATDATA_CONSTARENAEXCEL_ADDMODIFIEDSTATTYPE_OFFSET UNITYSDK_OFFSET(0xCEC5B0)
#define FLATDATA_CONSTARENAEXCEL_CREATEMODIFIEDSTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xCEC9E0)
#define FLATDATA_CONSTARENAEXCEL_STARTMODIFIEDSTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xCECA70)
#define FLATDATA_CONSTARENAEXCEL_ADDSTATMULFACTOR_OFFSET UNITYSDK_OFFSET(0xCEC580)
#define FLATDATA_CONSTARENAEXCEL_CREATESTATMULFACTORVECTOR_OFFSET UNITYSDK_OFFSET(0xCECAB0)
#define FLATDATA_CONSTARENAEXCEL_STARTSTATMULFACTORVECTOR_OFFSET UNITYSDK_OFFSET(0xCECB40)
#define FLATDATA_CONSTARENAEXCEL_ADDSTATSUMFACTOR_OFFSET UNITYSDK_OFFSET(0xCEC550)
#define FLATDATA_CONSTARENAEXCEL_CREATESTATSUMFACTORVECTOR_OFFSET UNITYSDK_OFFSET(0xCECB80)
#define FLATDATA_CONSTARENAEXCEL_STARTSTATSUMFACTORVECTOR_OFFSET UNITYSDK_OFFSET(0xCECC10)
#define FLATDATA_CONSTARENAEXCEL_ADDNPCNAME_OFFSET UNITYSDK_OFFSET(0xCEC520)
#define FLATDATA_CONSTARENAEXCEL_CREATENPCNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0xCECC50)
#define FLATDATA_CONSTARENAEXCEL_STARTNPCNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0xCECCE0)
#define FLATDATA_CONSTARENAEXCEL_ADDNPCMAINCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCEC280)
#define FLATDATA_CONSTARENAEXCEL_ADDNPCSUPPORTCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCEC250)
#define FLATDATA_CONSTARENAEXCEL_ADDNPCCHARACTERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xCEC220)
#define FLATDATA_CONSTARENAEXCEL_ADDTIMESPANINDAYSFORBATTLEHISTORY_OFFSET UNITYSDK_OFFSET(0xCEC1F0)
#define FLATDATA_CONSTARENAEXCEL_ADDHIDDENCHARACTERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCEC4F0)
#define FLATDATA_CONSTARENAEXCEL_ADDDEFENSEVICTORYREWARDMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xCEC1C0)
#define FLATDATA_CONSTARENAEXCEL_ADDTOPRANKERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xCEC190)
#define FLATDATA_CONSTARENAEXCEL_ADDAUTOREFRESHINTERVALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xCEC160)
#define FLATDATA_CONSTARENAEXCEL_ADDECHELONSETTINGINTERVALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xCEC130)
#define FLATDATA_CONSTARENAEXCEL_ADDSKIPALLOWEDTIMEMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xCEC100)
#define FLATDATA_CONSTARENAEXCEL_ADDSHOWSEASONCHANGEINFOSTARTTIME_OFFSET UNITYSDK_OFFSET(0xCEC4C0)
#define FLATDATA_CONSTARENAEXCEL_ADDSHOWSEASONCHANGEINFOENDTIME_OFFSET UNITYSDK_OFFSET(0xCEC490)
#define FLATDATA_CONSTARENAEXCEL_ADDSHOWSEASONID_OFFSET UNITYSDK_OFFSET(0xCEC0D0)
#define FLATDATA_CONSTARENAEXCEL_ADDARENAHISTORYQUERYLIMITDAYS_OFFSET UNITYSDK_OFFSET(0xCEC460)
#define FLATDATA_CONSTARENAEXCEL_ENDCONSTARENAEXCEL_OFFSET UNITYSDK_OFFSET(0xCEC700)

namespace FlatData
{
	inline static constexpr unsigned int ConstArenaExcel_TypeDefinitionIndex = 9209;

	class ConstArenaExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstArenaExcel* GetRootAsConstArenaExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstArenaExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETROOTASCONSTARENAEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstArenaExcel* GetRootAsConstArenaExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstArenaExcel* arg2)
		{
			return ((::FlatData::ConstArenaExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstArenaExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETROOTASCONSTARENAEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstArenaExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstArenaExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_attackCoolTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ATTACKCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackCoolTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ATTACKCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_battleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_defenseCoolTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_DEFENSECOOLTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_DefenseCoolTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_DEFENSECOOLTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_tSSStartCoolTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TSSSTARTCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_TSSStartCoolTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TSSSTARTCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_endAlarm()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ENDALARM_OFFSET))(nullptr);
		}

		::System::Int64 get_EndAlarm()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ENDALARM_OFFSET))(nullptr);
		}

		::System::Int64 get_timeRewardMaxAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TIMEREWARDMAXAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeRewardMaxAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TIMEREWARDMAXAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_enterCostType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_EnterCostType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_enterCostId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EnterCostId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ticketCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TICKETCOST_OFFSET))(nullptr);
		}

		::System::Int64 get_TicketCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TICKETCOST_OFFSET))(nullptr);
		}

		::System::String* get_dailyRewardResetTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_DAILYREWARDRESETTIME_OFFSET))(nullptr);
		}

		::System::String* get_DailyRewardResetTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_DAILYREWARDRESETTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDailyRewardResetTimeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETDAILYREWARDRESETTIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_openScenarioId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_OPENSCENARIOID_OFFSET))(nullptr);
		}

		::System::String* get_OpenScenarioId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_OPENSCENARIOID_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenScenarioIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETOPENSCENARIOIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 characterSlotHideRank(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CHARACTERSLOTHIDERANK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CharacterSlotHideRankLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_CHARACTERSLOTHIDERANKLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 CharacterSlotHideRank(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CHARACTERSLOTHIDERANK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCharacterSlotHideRankBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETCHARACTERSLOTHIDERANKBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_mapSlotHideRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_MAPSLOTHIDERANK_OFFSET))(nullptr);
		}

		::System::Int64 get_MapSlotHideRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_MAPSLOTHIDERANK_OFFSET))(nullptr);
		}

		::System::Int64 relativeOpponentRankStart(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_RELATIVEOPPONENTRANKSTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RelativeOpponentRankStartLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_RELATIVEOPPONENTRANKSTARTLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 RelativeOpponentRankStart(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_RELATIVEOPPONENTRANKSTART_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRelativeOpponentRankStartBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETRELATIVEOPPONENTRANKSTARTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 relativeOpponentRankEnd(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_RELATIVEOPPONENTRANKEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RelativeOpponentRankEndLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_RELATIVEOPPONENTRANKENDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 RelativeOpponentRankEnd(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_RELATIVEOPPONENTRANKEND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRelativeOpponentRankEndBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETRELATIVEOPPONENTRANKENDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StatType* modifiedStatType(::System::Int32 arg)
		{
			return ((::FlatData::StatType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_MODIFIEDSTATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ModifiedStatTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_MODIFIEDSTATTYPELENGTH_OFFSET))(nullptr);
		}

		::FlatData::StatType* ModifiedStatType(::System::Int32 arg)
		{
			return ((::FlatData::StatType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_MODIFIEDSTATTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetModifiedStatTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETMODIFIEDSTATTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 statMulFactor(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STATMULFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatMulFactorLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_STATMULFACTORLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 StatMulFactor(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STATMULFACTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStatMulFactorBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETSTATMULFACTORBYTES_OFFSET))(nullptr);
		}

		::System::Int64 statSumFactor(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STATSUMFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatSumFactorLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_STATSUMFACTORLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 StatSumFactor(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STATSUMFACTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStatSumFactorBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETSTATSUMFACTORBYTES_OFFSET))(nullptr);
		}

		::System::String* nPCName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_NPCNAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NPCNameLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_NPCNAMELENGTH_OFFSET))(nullptr);
		}

		::System::String* NPCName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_NPCNAME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_nPCMainCharacterCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_NPCMAINCHARACTERCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_NPCMainCharacterCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_NPCMAINCHARACTERCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_nPCSupportCharacterCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_NPCSUPPORTCHARACTERCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_NPCSupportCharacterCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_NPCSUPPORTCHARACTERCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_nPCCharacterSkillLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_NPCCHARACTERSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_NPCCharacterSkillLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_NPCCHARACTERSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_timeSpanInDaysForBattleHistory()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TIMESPANINDAYSFORBATTLEHISTORY_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeSpanInDaysForBattleHistory()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TIMESPANINDAYSFORBATTLEHISTORY_OFFSET))(nullptr);
		}

		::System::String* get_hiddenCharacterImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_HIDDENCHARACTERIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_HiddenCharacterImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_HIDDENCHARACTERIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetHiddenCharacterImagePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETHIDDENCHARACTERIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_defenseVictoryRewardMaxCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_DEFENSEVICTORYREWARDMAXCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_DefenseVictoryRewardMaxCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_DEFENSEVICTORYREWARDMAXCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_topRankerCountLimit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TOPRANKERCOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_TopRankerCountLimit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_TOPRANKERCOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_autoRefreshIntervalMilliSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_AUTOREFRESHINTERVALMILLISECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_AutoRefreshIntervalMilliSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_AUTOREFRESHINTERVALMILLISECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_echelonSettingIntervalMilliSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ECHELONSETTINGINTERVALMILLISECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonSettingIntervalMilliSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ECHELONSETTINGINTERVALMILLISECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_skipAllowedTimeMilliSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_SKIPALLOWEDTIMEMILLISECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_SkipAllowedTimeMilliSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_SKIPALLOWEDTIMEMILLISECONDS_OFFSET))(nullptr);
		}

		::System::String* get_showSeasonChangeInfoStartTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONCHANGEINFOSTARTTIME_OFFSET))(nullptr);
		}

		::System::String* get_ShowSeasonChangeInfoStartTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONCHANGEINFOSTARTTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetShowSeasonChangeInfoStartTimeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETSHOWSEASONCHANGEINFOSTARTTIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_showSeasonChangeInfoEndTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONCHANGEINFOENDTIME_OFFSET))(nullptr);
		}

		::System::String* get_ShowSeasonChangeInfoEndTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONCHANGEINFOENDTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetShowSeasonChangeInfoEndTimeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GETSHOWSEASONCHANGEINFOENDTIMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_showSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShowSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_SHOWSEASONID_OFFSET))(nullptr);
		}

		::System::Int32 get_arenaHistoryQueryLimitDays()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ARENAHISTORYQUERYLIMITDAYS_OFFSET))(nullptr);
		}

		::System::Int32 get_ArenaHistoryQueryLimitDays()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_GET_ARENAHISTORYQUERYLIMITDAYS_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstArenaExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::System::Int64 arg7, ::FlatData::ParcelType* arg8, ::System::Int64 arg9, ::System::Int64 arg10, ::FlatBuffers::StringOffset* arg11, ::FlatBuffers::StringOffset* arg12, ::FlatBuffers::VectorOffset* arg13, ::System::Int64 arg14, ::FlatBuffers::VectorOffset* arg15, ::FlatBuffers::VectorOffset* arg16, ::FlatBuffers::VectorOffset* arg17, ::FlatBuffers::VectorOffset* arg18, ::FlatBuffers::VectorOffset* arg19, ::FlatBuffers::VectorOffset* arg20, ::System::Int64 arg21, ::System::Int64 arg22, ::System::Int64 arg23, ::System::Int64 arg24, ::FlatBuffers::StringOffset* arg25, ::System::Int64 arg26, ::System::Int64 arg27, ::System::Int64 arg28, ::System::Int64 arg29, ::System::Int64 arg30, ::FlatBuffers::StringOffset* arg31, ::FlatBuffers::StringOffset* arg32, ::System::Int64 arg33, ::System::Int32 arg34)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CREATECONSTARENAEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, nullptr);
		}

		::System::Void StartConstArenaExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STARTCONSTARENAEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttackCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDATTACKCOOLTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDefenseCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDDEFENSECOOLTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTSSStartCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDTSSSTARTCOOLTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndAlarm(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDENDALARM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTimeRewardMaxAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDTIMEREWARDMAXAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDENTERCOSTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDENTERCOSTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTicketCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDTICKETCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDailyRewardResetTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDDAILYREWARDRESETTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpenScenarioId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDOPENSCENARIOID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCharacterSlotHideRank(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDCHARACTERSLOTHIDERANK_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCharacterSlotHideRankVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CREATECHARACTERSLOTHIDERANKVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartCharacterSlotHideRankVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STARTCHARACTERSLOTHIDERANKVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMapSlotHideRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDMAPSLOTHIDERANK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRelativeOpponentRankStart(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDRELATIVEOPPONENTRANKSTART_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRelativeOpponentRankStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CREATERELATIVEOPPONENTRANKSTARTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRelativeOpponentRankStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STARTRELATIVEOPPONENTRANKSTARTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRelativeOpponentRankEnd(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDRELATIVEOPPONENTRANKEND_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRelativeOpponentRankEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CREATERELATIVEOPPONENTRANKENDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRelativeOpponentRankEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STARTRELATIVEOPPONENTRANKENDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddModifiedStatType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDMODIFIEDSTATTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateModifiedStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CREATEMODIFIEDSTATTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartModifiedStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STARTMODIFIEDSTATTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStatMulFactor(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDSTATMULFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatMulFactorVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CREATESTATMULFACTORVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartStatMulFactorVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STARTSTATMULFACTORVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStatSumFactor(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDSTATSUMFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatSumFactorVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CREATESTATSUMFACTORVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartStatSumFactorVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STARTSTATSUMFACTORVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNPCName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDNPCNAME_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNPCNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_CREATENPCNAMEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartNPCNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_STARTNPCNAMEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNPCMainCharacterCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDNPCMAINCHARACTERCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNPCSupportCharacterCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDNPCSUPPORTCHARACTERCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNPCCharacterSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDNPCCHARACTERSKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTimeSpanInDaysForBattleHistory(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDTIMESPANINDAYSFORBATTLEHISTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHiddenCharacterImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDHIDDENCHARACTERIMAGEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDefenseVictoryRewardMaxCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDDEFENSEVICTORYREWARDMAXCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTopRankerCountLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDTOPRANKERCOUNTLIMIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAutoRefreshIntervalMilliSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDAUTOREFRESHINTERVALMILLISECONDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEchelonSettingIntervalMilliSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDECHELONSETTINGINTERVALMILLISECONDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSkipAllowedTimeMilliSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDSKIPALLOWEDTIMEMILLISECONDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddShowSeasonChangeInfoStartTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDSHOWSEASONCHANGEINFOSTARTTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddShowSeasonChangeInfoEndTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDSHOWSEASONCHANGEINFOENDTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddShowSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDSHOWSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddArenaHistoryQueryLimitDays(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ADDARENAHISTORYQUERYLIMITDAYS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstArenaExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCEL_ENDCONSTARENAEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

