#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WorldRaidBossGroupExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC8800)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETROOTASWORLDRAIDBOSSGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC8810)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETROOTASWORLDRAIDBOSSGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC8870)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CC8900)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CC88D0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC8920)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC8970)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSNAME_OFFSET UNITYSDK_OFFSET(0x1CC89C0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC8A00)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSPOPUPPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1CC8A20)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSPOPUPPORTRAITBYTES_OFFSET UNITYSDK_OFFSET(0x1CC8A60)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSPOPUPBG_OFFSET UNITYSDK_OFFSET(0x1CC8A80)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSPOPUPBGBYTES_OFFSET UNITYSDK_OFFSET(0x1CC8AC0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSPARCELPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1CC8AE0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSPARCELPORTRAITBYTES_OFFSET UNITYSDK_OFFSET(0x1CC8B20)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSLISTPARCEL_OFFSET UNITYSDK_OFFSET(0x1CC8B40)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSLISTPARCELBYTES_OFFSET UNITYSDK_OFFSET(0x1CC8B80)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHP_OFFSET UNITYSDK_OFFSET(0x1CC8BA0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHPTW_OFFSET UNITYSDK_OFFSET(0x1CC8BF0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHPASIA_OFFSET UNITYSDK_OFFSET(0x1CC8C40)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHPNA_OFFSET UNITYSDK_OFFSET(0x1CC8C90)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHPGLOBAL_OFFSET UNITYSDK_OFFSET(0x1CC8CE0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_UIHIDEBEFORESPAWN_OFFSET UNITYSDK_OFFSET(0x1CC8D30)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_HIDEANOTHERBOSSKILLED_OFFSET UNITYSDK_OFFSET(0x1CC8D80)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSCLEARREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC8DD0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ANOTHERBOSSKILLED_OFFSET UNITYSDK_OFFSET(0x1CC8E20)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_ANOTHERBOSSKILLEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CC8E80)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETANOTHERBOSSKILLEDBYTES_OFFSET UNITYSDK_OFFSET(0x1CC8EC0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_ECHELONCONSTRAINTGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC8EE0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_EXCLUSIVEOPERATORBOSSSPAWN_OFFSET UNITYSDK_OFFSET(0x1CC8F30)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETEXCLUSIVEOPERATORBOSSSPAWNBYTES_OFFSET UNITYSDK_OFFSET(0x1CC8F70)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_EXCLUSIVEOPERATORBOSSKILL_OFFSET UNITYSDK_OFFSET(0x1CC8F90)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETEXCLUSIVEOPERATORBOSSKILLBYTES_OFFSET UNITYSDK_OFFSET(0x1CC8FD0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_EXCLUSIVEOPERATORSCENARIOBATTLE_OFFSET UNITYSDK_OFFSET(0x1CC8FF0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETEXCLUSIVEOPERATORSCENARIOBATTLEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC9030)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_EXCLUSIVEOPERATORBOSSDAMAGED_OFFSET UNITYSDK_OFFSET(0x1CC9050)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETEXCLUSIVEOPERATORBOSSDAMAGEDBYTES_OFFSET UNITYSDK_OFFSET(0x1CC9090)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_BOSSGROUPOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1CC90B0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_CREATEWORLDRAIDBOSSGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC9100)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_STARTWORLDRAIDBOSSGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC9930)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CC9670)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC9640)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSNAME_OFFSET UNITYSDK_OFFSET(0x1CC9850)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSPOPUPPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1CC9820)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSPOPUPBG_OFFSET UNITYSDK_OFFSET(0x1CC97F0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSPARCELPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1CC97C0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSLISTPARCEL_OFFSET UNITYSDK_OFFSET(0x1CC9790)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHP_OFFSET UNITYSDK_OFFSET(0x1CC9610)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHPTW_OFFSET UNITYSDK_OFFSET(0x1CC95E0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHPASIA_OFFSET UNITYSDK_OFFSET(0x1CC95B0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHPNA_OFFSET UNITYSDK_OFFSET(0x1CC9580)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHPGLOBAL_OFFSET UNITYSDK_OFFSET(0x1CC9550)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDUIHIDEBEFORESPAWN_OFFSET UNITYSDK_OFFSET(0x1CC98B0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDHIDEANOTHERBOSSKILLED_OFFSET UNITYSDK_OFFSET(0x1CC9880)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSCLEARREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC9520)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDANOTHERBOSSKILLED_OFFSET UNITYSDK_OFFSET(0x1CC9760)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_CREATEANOTHERBOSSKILLEDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC9950)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_STARTANOTHERBOSSKILLEDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CC99E0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDECHELONCONSTRAINTGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC94F0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDEXCLUSIVEOPERATORBOSSSPAWN_OFFSET UNITYSDK_OFFSET(0x1CC9730)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDEXCLUSIVEOPERATORBOSSKILL_OFFSET UNITYSDK_OFFSET(0x1CC9700)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDEXCLUSIVEOPERATORSCENARIOBATTLE_OFFSET UNITYSDK_OFFSET(0x1CC96D0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDEXCLUSIVEOPERATORBOSSDAMAGED_OFFSET UNITYSDK_OFFSET(0x1CC96A0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDBOSSGROUPOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1CC94C0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ENDWORLDRAIDBOSSGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC98E0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_FINISHWORLDRAIDBOSSGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC9A20)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_FINISHSIZEPREFIXEDWORLDRAIDBOSSGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC9A40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidBossGroupExcel_TypeDefinitionIndex = 19795;

	class WorldRaidBossGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WorldRaidBossGroupExcel* GetRootAsWorldRaidBossGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidBossGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETROOTASWORLDRAIDBOSSGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidBossGroupExcel* GetRootAsWorldRaidBossGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WorldRaidBossGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidBossGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WorldRaidBossGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETROOTASWORLDRAIDBOSSGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidBossGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidBossGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidBossGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDRAIDBOSSGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_WorldBossName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldBossNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_WorldBossPopupPortrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSPOPUPPORTRAIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldBossPopupPortraitBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSPOPUPPORTRAITBYTES_OFFSET))(nullptr);
		}

		::System::String* get_WorldBossPopupBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSPOPUPBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldBossPopupBGBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSPOPUPBGBYTES_OFFSET))(nullptr);
		}

		::System::String* get_WorldBossParcelPortrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSPARCELPORTRAIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldBossParcelPortraitBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSPARCELPORTRAITBYTES_OFFSET))(nullptr);
		}

		::System::String* get_WorldBossListParcel()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSLISTPARCEL_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldBossListParcelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETWORLDBOSSLISTPARCELBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldBossHP()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHP_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldBossHPTw()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHPTW_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldBossHPAsia()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHPASIA_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldBossHPNa()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHPNA_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldBossHPGlobal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSHPGLOBAL_OFFSET))(nullptr);
		}

		::System::Boolean get_UIHideBeforeSpawn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_UIHIDEBEFORESPAWN_OFFSET))(nullptr);
		}

		::System::Boolean get_HideAnotherBossKilled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_HIDEANOTHERBOSSKILLED_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldBossClearRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_WORLDBOSSCLEARREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 AnotherBossKilled(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ANOTHERBOSSKILLED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AnotherBossKilledLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_ANOTHERBOSSKILLEDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnotherBossKilledBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETANOTHERBOSSKILLEDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonConstraintGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_ECHELONCONSTRAINTGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_ExclusiveOperatorBossSpawn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_EXCLUSIVEOPERATORBOSSSPAWN_OFFSET))(nullptr);
		}

		Il2CppObject* GetExclusiveOperatorBossSpawnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETEXCLUSIVEOPERATORBOSSSPAWNBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ExclusiveOperatorBossKill()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_EXCLUSIVEOPERATORBOSSKILL_OFFSET))(nullptr);
		}

		Il2CppObject* GetExclusiveOperatorBossKillBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETEXCLUSIVEOPERATORBOSSKILLBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ExclusiveOperatorScenarioBattle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_EXCLUSIVEOPERATORSCENARIOBATTLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetExclusiveOperatorScenarioBattleBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETEXCLUSIVEOPERATORSCENARIOBATTLEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ExclusiveOperatorBossDamaged()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_EXCLUSIVEOPERATORBOSSDAMAGED_OFFSET))(nullptr);
		}

		Il2CppObject* GetExclusiveOperatorBossDamagedBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GETEXCLUSIVEOPERATORBOSSDAMAGEDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_BossGroupOpenCondition()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_GET_BOSSGROUPOPENCONDITION_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWorldRaidBossGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_CREATEWORLDRAIDBOSSGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWorldRaidBossGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_STARTWORLDRAIDBOSSGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidBossGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossPopupPortrait(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSPOPUPPORTRAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossPopupBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSPOPUPBG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossParcelPortrait(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSPARCELPORTRAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossListParcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSLISTPARCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossHP(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossHPTw(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHPTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossHPAsia(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHPASIA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossHPNa(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHPNA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossHPGlobal(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSHPGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIHideBeforeSpawn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDUIHIDEBEFORESPAWN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideAnotherBossKilled(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDHIDEANOTHERBOSSKILLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldBossClearRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDWORLDBOSSCLEARREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnotherBossKilled(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDANOTHERBOSSKILLED_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAnotherBossKilledVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_CREATEANOTHERBOSSKILLEDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAnotherBossKilledVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_STARTANOTHERBOSSKILLEDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonConstraintGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDECHELONCONSTRAINTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExclusiveOperatorBossSpawn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDEXCLUSIVEOPERATORBOSSSPAWN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExclusiveOperatorBossKill(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDEXCLUSIVEOPERATORBOSSKILL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExclusiveOperatorScenarioBattle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDEXCLUSIVEOPERATORSCENARIOBATTLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExclusiveOperatorBossDamaged(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDEXCLUSIVEOPERATORBOSSDAMAGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBossGroupOpenCondition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ADDBOSSGROUPOPENCONDITION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWorldRaidBossGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_ENDWORLDRAIDBOSSGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWorldRaidBossGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_FINISHWORLDRAIDBOSSGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWorldRaidBossGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCEL_FINISHSIZEPREFIXEDWORLDRAIDBOSSGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

