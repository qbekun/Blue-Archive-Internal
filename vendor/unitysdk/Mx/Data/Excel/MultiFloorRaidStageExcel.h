#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MultiFloorRaidStageExcel; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C181C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETROOTASMULTIFLOORRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C181D0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETROOTASMULTIFLOORRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C18230)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C182C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C18290)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C182E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C18330)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1C18380)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETBOSSGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C183C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_ASSISTSLOT_OFFSET UNITYSDK_OFFSET(0x1C183E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_STAGEOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1C18430)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORLISTSECTION_OFFSET UNITYSDK_OFFSET(0x1C18480)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORLISTSECTIONOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1C184D0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORLISTSECTIONLABEL_OFFSET UNITYSDK_OFFSET(0x1C18520)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C18570)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_USEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1C185C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_USEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1C18610)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORLISTIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C18660)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETFLOORLISTIMGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C186A0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C186C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETFLOORIMGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C18700)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_RAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C18720)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_BOSSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C18770)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BOSSCHARACTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C187D0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETBOSSCHARACTERIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C18810)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STATCHANGEID_OFFSET UNITYSDK_OFFSET(0x1C18830)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_STATCHANGEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C18890)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETSTATCHANGEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C188D0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C188F0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1C18940)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C18990)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C189E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C18A30)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1C18A80)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1C18AC0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASESTARTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C18B20)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASESTARTBYTES_OFFSET UNITYSDK_OFFSET(0x1C18B60)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1C18B80)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASEENDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C18BE0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASEENDBYTES_OFFSET UNITYSDK_OFFSET(0x1C18C20)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_VICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C18C40)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETVICTORYTIMELINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C18C80)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_SHOWSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1C18CA0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEMULTIFLOORRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C18CF0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTMULTIFLOORRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C19630)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C19280)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C194F0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1C194C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDASSISTSLOT_OFFSET UNITYSDK_OFFSET(0x1C19490)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDSTAGEOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1C19250)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORLISTSECTION_OFFSET UNITYSDK_OFFSET(0x1C195B0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORLISTSECTIONOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1C19220)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORLISTSECTIONLABEL_OFFSET UNITYSDK_OFFSET(0x1C19460)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C19430)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDUSEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1C19580)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDUSEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1C19550)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORLISTIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C19400)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C193D0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDRAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C191F0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBOSSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C193A0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEBOSSCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C19650)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTBOSSCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C196E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDSTATCHANGEID_OFFSET UNITYSDK_OFFSET(0x1C19370)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATESTATCHANGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C19720)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTSTATCHANGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C197B0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C191C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1C19190)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDRECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C19160)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C19130)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C19340)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1C197F0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1C19880)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1C19310)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C198C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C19950)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1C192E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C19990)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C19A20)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDVICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1C192B0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDSHOWSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1C19520)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ENDMULTIFLOORRAIDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C195E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_FINISHMULTIFLOORRAIDSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C19A60)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_FINISHSIZEPREFIXEDMULTIFLOORRAIDSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C19A80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidStageExcel_TypeDefinitionIndex = 18964;

	class MultiFloorRaidStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidStageExcel* GetRootAsMultiFloorRaidStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETROOTASMULTIFLOORRAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidStageExcel* GetRootAsMultiFloorRaidStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MultiFloorRaidStageExcel* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MultiFloorRaidStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETROOTASMULTIFLOORRAIDSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::String* get_BossGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BOSSGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetBossGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETBOSSGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_AssistSlot()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_ASSISTSLOT_OFFSET))(nullptr);
		}

		::System::Int64 get_StageOpenCondition()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_STAGEOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_FloorListSection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORLISTSECTION_OFFSET))(nullptr);
		}

		::System::Int64 get_FloorListSectionOpenCondition()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORLISTSECTIONOPENCONDITION_OFFSET))(nullptr);
		}

		::System::UInt32 get_FloorListSectionLabel()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORLISTSECTIONLABEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Difficulty()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBossIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_USEBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBossAIPhaseSync()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_USEBOSSAIPHASESYNC_OFFSET))(nullptr);
		}

		::System::String* get_FloorListImgPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORLISTIMGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFloorListImgPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETFLOORLISTIMGPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_FloorImgPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_FLOORIMGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFloorImgPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETFLOORIMGPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_RAIDCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 BossCharacterId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_BOSSCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BossCharacterIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BOSSCHARACTERIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBossCharacterIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETBOSSCHARACTERIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StatChangeId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STATCHANGEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatChangeIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_STATCHANGEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatChangeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETSTATCHANGEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_RecommendLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_RECOMMENDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_REWARDGROUPID_OFFSET))(nullptr);
		}

		::System::String* BattleReadyTimelinePath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPATHLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 BattleReadyTimelinePhaseStart(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePhaseStartLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASESTARTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleReadyTimelinePhaseStartBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASESTARTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 BattleReadyTimelinePhaseEnd(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_BATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleReadyTimelinePhaseEndLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_BATTLEREADYTIMELINEPHASEENDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleReadyTimelinePhaseEndBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETBATTLEREADYTIMELINEPHASEENDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VictoryTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_VICTORYTIMELINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryTimelinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GETVICTORYTIMELINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowSkillCard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_GET_SHOWSKILLCARD_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMultiFloorRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EchelonExtensionType* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EchelonExtensionType*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::UInt32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEMULTIFLOORRAIDSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMultiFloorRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTMULTIFLOORRAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAssistSlot(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDASSISTSLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageOpenCondition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDSTAGEOPENCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloorListSection(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORLISTSECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloorListSectionOpenCondition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORLISTSECTIONOPENCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloorListSectionLabel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORLISTSECTIONLABEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseBossIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDUSEBOSSINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseBossAIPhaseSync(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDUSEBOSSAIPHASESYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloorListImgPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORLISTIMGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloorImgPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDFLOORIMGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDRAIDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBOSSCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBossCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEBOSSCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBossCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTBOSSCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatChangeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDSTATCHANGEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatChangeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATESTATCHANGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatChangeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTSTATCHANGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommendLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDRECOMMENDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePhaseStart(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePhaseStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePhaseStartVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASESTARTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePhaseEnd(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDBATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBattleReadyTimelinePhaseEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_CREATEBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBattleReadyTimelinePhaseEndVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_STARTBATTLEREADYTIMELINEPHASEENDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVictoryTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDVICTORYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowSkillCard(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ADDSHOWSKILLCARD_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMultiFloorRaidStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_ENDMULTIFLOORRAIDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMultiFloorRaidStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_FINISHMULTIFLOORRAIDSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMultiFloorRaidStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCEL_FINISHSIZEPREFIXEDMULTIFLOORRAIDSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

