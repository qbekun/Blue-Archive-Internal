#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::GameLogic::DBModel { class AssistRelation; }
namespace FlatData { class EchelonSlot; }
namespace FlatData { class FormationLine; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
namespace MX::Logic::Data { class CostumeSetting; }
namespace MX::Logic::Data { class SubPartDummySetting; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace FlatData { class GrowthFactor; }
namespace MX::Logic::Data { class HeroSetting; }

#define MX_LOGIC_DATA_HEROSETTING_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x11DC200)
#define MX_LOGIC_DATA_HEROSETTING_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x11DC210)
#define MX_LOGIC_DATA_HEROSETTING_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x11DC220)
#define MX_LOGIC_DATA_HEROSETTING_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x11DC230)
#define MX_LOGIC_DATA_HEROSETTING_GET_OWNERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x11DC240)
#define MX_LOGIC_DATA_HEROSETTING_SET_OWNERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x11DC250)
#define MX_LOGIC_DATA_HEROSETTING_GET_ASSISTRELATION_OFFSET UNITYSDK_OFFSET(0x11DC260)
#define MX_LOGIC_DATA_HEROSETTING_SET_ASSISTRELATION_OFFSET UNITYSDK_OFFSET(0x11DC270)
#define MX_LOGIC_DATA_HEROSETTING_GET_HEROID_OFFSET UNITYSDK_OFFSET(0x11DC280)
#define MX_LOGIC_DATA_HEROSETTING_SET_HEROID_OFFSET UNITYSDK_OFFSET(0x11DC290)
#define MX_LOGIC_DATA_HEROSETTING_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x11DC2A0)
#define MX_LOGIC_DATA_HEROSETTING_GET_GRADE_OFFSET UNITYSDK_OFFSET(0x11DC340)
#define MX_LOGIC_DATA_HEROSETTING_SET_GRADE_OFFSET UNITYSDK_OFFSET(0x11DC350)
#define MX_LOGIC_DATA_HEROSETTING_GET_FAVORRANKINFO_OFFSET UNITYSDK_OFFSET(0x11DC360)
#define MX_LOGIC_DATA_HEROSETTING_SET_FAVORRANKINFO_OFFSET UNITYSDK_OFFSET(0x11DC370)
#define MX_LOGIC_DATA_HEROSETTING_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x11DC380)
#define MX_LOGIC_DATA_HEROSETTING_SET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x11DC390)
#define MX_LOGIC_DATA_HEROSETTING_GET_POTENTIALSTATLEVELDICT_OFFSET UNITYSDK_OFFSET(0x11DC3A0)
#define MX_LOGIC_DATA_HEROSETTING_SET_POTENTIALSTATLEVELDICT_OFFSET UNITYSDK_OFFSET(0x11DC3B0)
#define MX_LOGIC_DATA_HEROSETTING_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11DC3C0)
#define MX_LOGIC_DATA_HEROSETTING_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11DC3D0)
#define MX_LOGIC_DATA_HEROSETTING_GET_AIID_OFFSET UNITYSDK_OFFSET(0x11DC3E0)
#define MX_LOGIC_DATA_HEROSETTING_SET_AIID_OFFSET UNITYSDK_OFFSET(0x11DC3F0)
#define MX_LOGIC_DATA_HEROSETTING_GET_ECHELONSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x11DC400)
#define MX_LOGIC_DATA_HEROSETTING_SET_ECHELONSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x11DC410)
#define MX_LOGIC_DATA_HEROSETTING_GET_ECHELONSLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x11DC420)
#define MX_LOGIC_DATA_HEROSETTING_SET_ECHELONSLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x11DC430)
#define MX_LOGIC_DATA_HEROSETTING_GET_LINE_OFFSET UNITYSDK_OFFSET(0x11DC440)
#define MX_LOGIC_DATA_HEROSETTING_SET_LINE_OFFSET UNITYSDK_OFFSET(0x11DC450)
#define MX_LOGIC_DATA_HEROSETTING_GET_LINEINDEX_OFFSET UNITYSDK_OFFSET(0x11DC460)
#define MX_LOGIC_DATA_HEROSETTING_SET_LINEINDEX_OFFSET UNITYSDK_OFFSET(0x11DC470)
#define MX_LOGIC_DATA_HEROSETTING_GET_INITIALHPRATE_OFFSET UNITYSDK_OFFSET(0x11DC480)
#define MX_LOGIC_DATA_HEROSETTING_SET_INITIALHPRATE_OFFSET UNITYSDK_OFFSET(0x11DC490)
#define MX_LOGIC_DATA_HEROSETTING_SETINITIALHPRATE_OFFSET UNITYSDK_OFFSET(0x11DC4A0)
#define MX_LOGIC_DATA_HEROSETTING_GET_PERMANENTSTATUS_OFFSET UNITYSDK_OFFSET(0x11DC4B0)
#define MX_LOGIC_DATA_HEROSETTING_SET_PERMANENTSTATUS_OFFSET UNITYSDK_OFFSET(0x11DC4C0)
#define MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZEPERMANENTSTATUS_OFFSET UNITYSDK_OFFSET(0x11DC4D0)
#define MX_LOGIC_DATA_HEROSETTING_GET_SKILLLEVELTABLE_OFFSET UNITYSDK_OFFSET(0x11DC570)
#define MX_LOGIC_DATA_HEROSETTING_SET_SKILLLEVELTABLE_OFFSET UNITYSDK_OFFSET(0x11DC580)
#define MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZESKILLLEVELTABLE_OFFSET UNITYSDK_OFFSET(0x11DC5A0)
#define MX_LOGIC_DATA_HEROSETTING_GETSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x11DC640)
#define MX_LOGIC_DATA_HEROSETTING_GET_EQUIPMENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x11DC700)
#define MX_LOGIC_DATA_HEROSETTING_SET_EQUIPMENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x11DC710)
#define MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZEEQUIPMENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x11DC730)
#define MX_LOGIC_DATA_HEROSETTING_GET_ISCHARACTERWEAPONEQUIPPED_OFFSET UNITYSDK_OFFSET(0x11DC7D0)
#define MX_LOGIC_DATA_HEROSETTING_GET_WEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x11DC800)
#define MX_LOGIC_DATA_HEROSETTING_SET_WEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x11DC810)
#define MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZEWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x11DC820)
#define MX_LOGIC_DATA_HEROSETTING_GET_GEARSETTING_OFFSET UNITYSDK_OFFSET(0x11DC840)
#define MX_LOGIC_DATA_HEROSETTING_SET_GEARSETTING_OFFSET UNITYSDK_OFFSET(0x11DC850)
#define MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZEGEARSETTING_OFFSET UNITYSDK_OFFSET(0x11DC860)
#define MX_LOGIC_DATA_HEROSETTING_GET_COSTUMESETTING_OFFSET UNITYSDK_OFFSET(0x11DC890)
#define MX_LOGIC_DATA_HEROSETTING_SET_COSTUMESETTING_OFFSET UNITYSDK_OFFSET(0x11DC8A0)
#define MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZECOSTUMESETTING_OFFSET UNITYSDK_OFFSET(0x11DC8B0)
#define MX_LOGIC_DATA_HEROSETTING_GET_SUBPARTDUMMYSETTING_OFFSET UNITYSDK_OFFSET(0x11DC8E0)
#define MX_LOGIC_DATA_HEROSETTING_SET_SUBPARTDUMMYSETTING_OFFSET UNITYSDK_OFFSET(0x11DC8F0)
#define MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZESUBPARTDUMMYSETTING_OFFSET UNITYSDK_OFFSET(0x11DC910)
#define MX_LOGIC_DATA_HEROSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DC920)
#define MX_LOGIC_DATA_HEROSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DC940)
#define MX_LOGIC_DATA_HEROSETTING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11DCB80)
#define MX_LOGIC_DATA_HEROSETTING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11DCC80)
#define MX_LOGIC_DATA_HEROSETTING_GETGROWTHSTATE_OFFSET UNITYSDK_OFFSET(0x11DCF30)
#define MX_LOGIC_DATA_HEROSETTING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11DD530)
#define MX_LOGIC_DATA_HEROSETTING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11DD650)
#define MX_LOGIC_DATA_HEROSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DD6F0)
#define MX_LOGIC_DATA_HEROSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DD5C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HeroSetting_TypeDefinitionIndex = 13433;

	class HeroSetting : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::System::Int64 _ServerId_k__BackingField; // 0x18
		::System::Int64 _OwnerAccountId_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::AssistRelation* _AssistRelation_k__BackingField; // 0x28
		::System::Int64 _HeroId_k__BackingField; // 0x30
		::System::Int32 _Grade_k__BackingField; // 0x38
		Il2CppObject* _FavorRankInfo_k__BackingField; // 0x40
		::System::Int32 _FavorRank_k__BackingField; // 0x48
		Il2CppObject* _PotentialStatLevelDict_k__BackingField; // 0x50
		::System::Int32 _Level_k__BackingField; // 0x58
		::System::Int64 _AIId_k__BackingField; // 0x60
		::FlatData::EchelonSlot* _EchelonSlotType_k__BackingField; // 0x68
		::System::Int32 _EchelonSlotNumber_k__BackingField; // 0x6C
		::FlatData::FormationLine* _Line_k__BackingField; // 0x70
		::System::Int32 _LineIndex_k__BackingField; // 0x74
		::MX::Core::Math::BasisPoint* _InitialHPRate_k__BackingField; // 0x78
		Il2CppObject* _PermanentStatus_k__BackingField; // 0x80
		Il2CppObject* _SkillLevelTable_k__BackingField; // 0x88
		Il2CppObject* _EquipmentSettings_k__BackingField; // 0x90
		::MX::Logic::Data::WeaponSetting* _WeaponSetting_k__BackingField; // 0x98
		::MX::Logic::Data::GearSetting* _GearSetting_k__BackingField; // 0xA8
		::MX::Logic::Data::CostumeSetting* _CostumeSetting_k__BackingField; // 0xB8
		::MX::Logic::Data::SubPartDummySetting* _SubPartDummySetting_k__BackingField; // 0xC0

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OwnerAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_OWNERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_OwnerAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_OWNERACCOUNTID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AssistRelation* get_AssistRelation()
		{
			return ((::MX::GameLogic::DBModel::AssistRelation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_ASSISTRELATION_OFFSET))(nullptr);
		}

		::System::Void set_AssistRelation(::MX::GameLogic::DBModel::AssistRelation* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistRelation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_ASSISTRELATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_HeroId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_HEROID_OFFSET))(nullptr);
		}

		::System::Void set_HeroId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_HEROID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Int32 get_Grade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_GRADE_OFFSET))(nullptr);
		}

		::System::Void set_Grade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_GRADE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FavorRankInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_FAVORRANKINFO_OFFSET))(nullptr);
		}

		::System::Void set_FavorRankInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_FAVORRANKINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FavorRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Void set_FavorRank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_FAVORRANK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PotentialStatLevelDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_POTENTIALSTATLEVELDICT_OFFSET))(nullptr);
		}

		::System::Void set_PotentialStatLevelDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_POTENTIALSTATLEVELDICT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AIId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_AIID_OFFSET))(nullptr);
		}

		::System::Void set_AIId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_AIID_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonSlot* get_EchelonSlotType()
		{
			return ((::FlatData::EchelonSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_ECHELONSLOTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonSlotType(::FlatData::EchelonSlot* arg)
		{
			((::System::Void(*)(::FlatData::EchelonSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_ECHELONSLOTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonSlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_ECHELONSLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonSlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_ECHELONSLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::FlatData::FormationLine* get_Line()
		{
			return ((::FlatData::FormationLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_LINE_OFFSET))(nullptr);
		}

		::System::Void set_Line(::FlatData::FormationLine* arg)
		{
			((::System::Void(*)(::FlatData::FormationLine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_LINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LineIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_LINEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_LineIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_LINEINDEX_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_InitialHPRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_INITIALHPRATE_OFFSET))(nullptr);
		}

		::System::Void set_InitialHPRate(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_INITIALHPRATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetInitialHPRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SETINITIALHPRATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PermanentStatus()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_PERMANENTSTATUS_OFFSET))(nullptr);
		}

		::System::Void set_PermanentStatus(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_PERMANENTSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializePermanentStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZEPERMANENTSTATUS_OFFSET))(nullptr);
		}

		Il2CppObject* get_SkillLevelTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_SKILLLEVELTABLE_OFFSET))(nullptr);
		}

		::System::Void set_SkillLevelTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_SKILLLEVELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeSkillLevelTable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZESKILLLEVELTABLE_OFFSET))(nullptr);
		}

		::System::Int32 GetSkillLevel(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GETSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EquipmentSettings()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_EQUIPMENTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_EQUIPMENTSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeEquipmentSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZEEQUIPMENTSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCharacterWeaponEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_ISCHARACTERWEAPONEQUIPPED_OFFSET))(nullptr);
		}

		::MX::Logic::Data::WeaponSetting* get_WeaponSetting()
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_WEAPONSETTING_OFFSET))(nullptr);
		}

		::System::Void set_WeaponSetting(::MX::Logic::Data::WeaponSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::WeaponSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_WEAPONSETTING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeWeaponSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZEWEAPONSETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::GearSetting* get_GearSetting()
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_GEARSETTING_OFFSET))(nullptr);
		}

		::System::Void set_GearSetting(::MX::Logic::Data::GearSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_GEARSETTING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeGearSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZEGEARSETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::CostumeSetting* get_CostumeSetting()
		{
			return ((::MX::Logic::Data::CostumeSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_COSTUMESETTING_OFFSET))(nullptr);
		}

		::System::Void set_CostumeSetting(::MX::Logic::Data::CostumeSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_COSTUMESETTING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeCostumeSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZECOSTUMESETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SubPartDummySetting* get_SubPartDummySetting()
		{
			return ((::MX::Logic::Data::SubPartDummySetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GET_SUBPARTDUMMYSETTING_OFFSET))(nullptr);
		}

		::System::Void set_SubPartDummySetting(::MX::Logic::Data::SubPartDummySetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::SubPartDummySetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SET_SUBPARTDUMMYSETTING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeSubPartDummySetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_SHOULDSERIALIZESUBPARTDUMMYSETTING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int64 GetGrowthState(::FlatData::GrowthFactor* arg)
		{
			return ((::System::Int64(*)(::FlatData::GrowthFactor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_GETGROWTHSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::HeroSetting* arg, ::MX::Logic::Data::HeroSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::HeroSetting*, ::MX::Logic::Data::HeroSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::HeroSetting* arg, ::MX::Logic::Data::HeroSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::HeroSetting*, ::MX::Logic::Data::HeroSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::HeroSetting* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::HeroSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

