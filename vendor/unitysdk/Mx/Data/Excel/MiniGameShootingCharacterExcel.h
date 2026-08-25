#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameShootingCharacterExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BF9D90)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETROOTASMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BF9DA0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETROOTASMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BF9E00)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BF9E90)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BF9E60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BF9EB0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_SPINERESOURCENAME_OFFSET UNITYSDK_OFFSET(0x1BF9F00)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETSPINERESOURCENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BF9F40)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_BODYRADIUS_OFFSET UNITYSDK_OFFSET(0x1BF9F60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_MODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1BF9FB0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETMODELPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BF9FF0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_NORMALATTACKSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1BFA010)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETNORMALATTACKSKILLDATABYTES_OFFSET UNITYSDK_OFFSET(0x1BFA050)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_PUBLICSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1BFA070)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_PUBLICSKILLDATALENGTH_OFFSET UNITYSDK_OFFSET(0x1BFA0C0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_DEATHSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1BFA100)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETDEATHSKILLDATABYTES_OFFSET UNITYSDK_OFFSET(0x1BFA140)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1BFA160)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_ATTACKPOWER_OFFSET UNITYSDK_OFFSET(0x1BFA1B0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_DEFENSEPOWER_OFFSET UNITYSDK_OFFSET(0x1BFA200)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_CRITICALRATE_OFFSET UNITYSDK_OFFSET(0x1BFA250)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_CRITICALDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1BFA2A0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x1BFA2F0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x1BFA340)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_SHOTTIME_OFFSET UNITYSDK_OFFSET(0x1BFA390)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_ISBOSS_OFFSET UNITYSDK_OFFSET(0x1BFA3E0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1BFA430)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_IGNOREOBSTACLECHECK_OFFSET UNITYSDK_OFFSET(0x1BFA480)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1BFA4D0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_CREATEMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BFA520)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_STARTMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BFAC60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFAA30)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDSPINERESOURCENAME_OFFSET UNITYSDK_OFFSET(0x1BFAB80)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDBODYRADIUS_OFFSET UNITYSDK_OFFSET(0x1BFAB50)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1BFAB20)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDNORMALATTACKSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1BFAAF0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDPUBLICSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1BFAAC0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_CREATEPUBLICSKILLDATAVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFAC80)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_STARTPUBLICSKILLDATAVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFAD10)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDDEATHSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1BFAA90)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDMAXHP_OFFSET UNITYSDK_OFFSET(0x1BFAA00)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDATTACKPOWER_OFFSET UNITYSDK_OFFSET(0x1BFA9D0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDDEFENSEPOWER_OFFSET UNITYSDK_OFFSET(0x1BFA9A0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDCRITICALRATE_OFFSET UNITYSDK_OFFSET(0x1BFA970)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDCRITICALDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1BFA940)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x1BFA910)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDMOVESPEED_OFFSET UNITYSDK_OFFSET(0x1BFA8E0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDSHOTTIME_OFFSET UNITYSDK_OFFSET(0x1BFA8B0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDISBOSS_OFFSET UNITYSDK_OFFSET(0x1BFABE0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDSCALE_OFFSET UNITYSDK_OFFSET(0x1BFAA60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDIGNOREOBSTACLECHECK_OFFSET UNITYSDK_OFFSET(0x1BFABB0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDCHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1BFA880)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ENDMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BFAC10)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_FINISHMINIGAMESHOOTINGCHARACTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFAD50)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_FINISHSIZEPREFIXEDMINIGAMESHOOTINGCHARACTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFAD70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameShootingCharacterExcel_TypeDefinitionIndex = 18831;

	class MiniGameShootingCharacterExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameShootingCharacterExcel* GetRootAsMiniGameShootingCharacterExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingCharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETROOTASMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingCharacterExcel* GetRootAsMiniGameShootingCharacterExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameShootingCharacterExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingCharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameShootingCharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETROOTASMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingCharacterExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingCharacterExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_SpineResourceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_SPINERESOURCENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpineResourceNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETSPINERESOURCENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Single get_BodyRadius()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_BODYRADIUS_OFFSET))(nullptr);
		}

		::System::String* get_ModelPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_MODELPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetModelPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETMODELPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NormalAttackSkillData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_NORMALATTACKSKILLDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetNormalAttackSkillDataBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETNORMALATTACKSKILLDATABYTES_OFFSET))(nullptr);
		}

		::System::String* PublicSkillData(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_PUBLICSKILLDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PublicSkillDataLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_PUBLICSKILLDATALENGTH_OFFSET))(nullptr);
		}

		::System::String* get_DeathSkillData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_DEATHSKILLDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetDeathSkillDataBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GETDEATHSKILLDATABYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHP()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_MAXHP_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackPower()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_ATTACKPOWER_OFFSET))(nullptr);
		}

		::System::Int64 get_DefensePower()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_DEFENSEPOWER_OFFSET))(nullptr);
		}

		::System::Int64 get_CriticalRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_CRITICALRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_CriticalDamageRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_CRITICALDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackRange()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_ATTACKRANGE_OFFSET))(nullptr);
		}

		::System::Int64 get_MoveSpeed()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_MOVESPEED_OFFSET))(nullptr);
		}

		::System::Int64 get_ShotTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_SHOTTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBoss()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_ISBOSS_OFFSET))(nullptr);
		}

		::System::Single get_Scale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreObstacleCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_IGNOREOBSTACLECHECK_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterVoiceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_GET_CHARACTERVOICEGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameShootingCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Single arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Single arg, ::System::Boolean arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Single, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_CREATEMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameShootingCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_STARTMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineResourceName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDSPINERESOURCENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBodyRadius(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDBODYRADIUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddModelPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDMODELPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNormalAttackSkillData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDNORMALATTACKSKILLDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPublicSkillData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDPUBLICSKILLDATA_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePublicSkillDataVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_CREATEPUBLICSKILLDATAVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPublicSkillDataVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_STARTPUBLICSKILLDATAVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDeathSkillData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDDEATHSKILLDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxHP(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDMAXHP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAttackPower(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDATTACKPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefensePower(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDDEFENSEPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCriticalRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDCRITICALRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCriticalDamageRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDCRITICALDAMAGERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAttackRange(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDATTACKRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMoveSpeed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDMOVESPEED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShotTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDSHOTTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsBoss(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDISBOSS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreObstacleCheck(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDIGNOREOBSTACLECHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterVoiceGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ADDCHARACTERVOICEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameShootingCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_ENDMINIGAMESHOOTINGCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameShootingCharacterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_FINISHMINIGAMESHOOTINGCHARACTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameShootingCharacterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCEL_FINISHSIZEPREFIXEDMINIGAMESHOOTINGCHARACTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

