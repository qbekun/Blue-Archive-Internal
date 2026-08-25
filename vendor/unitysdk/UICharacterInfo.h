#pragma once
#include "unitysdk.h"

class CharacterObject;
class UITexture;
class UILabel;
class UISprite;
class UISlider;
namespace UnityEngine { class GameObject; }
class UICharacterCard;
class UISkillInfo;
namespace FlatData { class TerrainAdaptationStat; }
namespace FlatData { class ArmorType; }
namespace FlatData { class BulletType; }
class UICharacterEquipmentSlots;
namespace UnityEngine { class Transform; }
class UIWidget;
class CombatStyleChangeButton;
class PortraitSpineCharacter;
namespace UnityEngine { class Color; }
namespace UnityEngine { class Animation; }
class MXButton;
class UIGearCard;
class SpineCharacter;
class BulletArmorDamageInfo;
namespace FlatData { class StageTopography; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UICharacterInfo;
namespace FlatData { class SquadType; }

#define UICHARACTERINFO_GET_CHARACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x2314750)
#define UICHARACTERINFO_SET_CHARACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x2314760)
#define UICHARACTERINFO_SETSHOWREPRESENTCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x2314770)
#define UICHARACTERINFO_GET_SPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x2314780)
#define UICHARACTERINFO_GET_ATTACKVALUE_OFFSET UNITYSDK_OFFSET(0x2314790)
#define UICHARACTERINFO_SET_ATTACKVALUE_OFFSET UNITYSDK_OFFSET(0x23147A0)
#define UICHARACTERINFO_GET_DEFENSEVALUE_OFFSET UNITYSDK_OFFSET(0x23147B0)
#define UICHARACTERINFO_SET_DEFENSEVALUE_OFFSET UNITYSDK_OFFSET(0x23147C0)
#define UICHARACTERINFO_GET_MAXHPVALUE_OFFSET UNITYSDK_OFFSET(0x23147D0)
#define UICHARACTERINFO_SET_MAXHPVALUE_OFFSET UNITYSDK_OFFSET(0x23147E0)
#define UICHARACTERINFO_GET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x23147F0)
#define UICHARACTERINFO_SET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x2314800)
#define UICHARACTERINFO_GET_USEDIORAMASPINE_OFFSET UNITYSDK_OFFSET(0x2314810)
#define UICHARACTERINFO_SET_USEDIORAMASPINE_OFFSET UNITYSDK_OFFSET(0x2314820)
#define UICHARACTERINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2314830)
#define UICHARACTERINFO_OPENBULLETARMORTOOLTIP_OFFSET UNITYSDK_OFFSET(0x23151F0)
#define UICHARACTERINFO_ONCLICKBATTLEADAPTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x2315320)
#define UICHARACTERINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23156A0)
#define UICHARACTERINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2315910)
#define UICHARACTERINFO_HANDLEEQUIPMENTITEMEQUIPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2315C10)
#define UICHARACTERINFO_HANDLEEQUIPMENTGROWTHRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23179C0)
#define UICHARACTERINFO_HANDLECAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2317A40)
#define UICHARACTERINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x2317AC0)
#define UICHARACTERINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2317C00)
#define UICHARACTERINFO_SETNONECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x2317CD0)
#define UICHARACTERINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2315C90)
#define UICHARACTERINFO_SETGROWTHDATA_OFFSET UNITYSDK_OFFSET(0x231A7C0)
#define UICHARACTERINFO_COMPARESTATVALUE_OFFSET UNITYSDK_OFFSET(0x231ACF0)
#define UICHARACTERINFO_SETOBSCURATION_OFFSET UNITYSDK_OFFSET(0x2319DA0)
#define UICHARACTERINFO_SETMAINSTAT_OFFSET UNITYSDK_OFFSET(0x23193E0)
#define UICHARACTERINFO_SETMAINSTAT_OFFSET UNITYSDK_OFFSET(0x2318950)
#define UICHARACTERINFO_SETSTARGRADE_OFFSET UNITYSDK_OFFSET(0x2319110)
#define UICHARACTERINFO_SETSQUADTYPE_OFFSET UNITYSDK_OFFSET(0x23190B0)
#define UICHARACTERINFO_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2319260)
#define UICHARACTERINFO_SETSKILLINFO_OFFSET UNITYSDK_OFFSET(0x2319F00)
#define UICHARACTERINFO_SETPORTRAIT_OFFSET UNITYSDK_OFFSET(0x2318600)
#define UICHARACTERINFO_SETCOSTUME_OFFSET UNITYSDK_OFFSET(0x231B870)
#define UICHARACTERINFO_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x231BAB0)
#define UICHARACTERINFO_ONCLICKFAVORITE_OFFSET UNITYSDK_OFFSET(0x231C080)
#define UICHARACTERINFO_SETFAVORITE_OFFSET UNITYSDK_OFFSET(0x2319170)
#define UICHARACTERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x231C300)
#define UICHARACTERINFO__AWAKE_B__107_0_OFFSET UNITYSDK_OFFSET(0x231C310)
#define UICHARACTERINFO__AWAKE_B__107_1_OFFSET UNITYSDK_OFFSET(0x231C320)
#define UICHARACTERINFO__AWAKE_B__107_2_OFFSET UNITYSDK_OFFSET(0x231C390)
#define UICHARACTERINFO__AWAKE_B__107_3_OFFSET UNITYSDK_OFFSET(0x231C400)
#define UICHARACTERINFO__AWAKE_B__107_4_OFFSET UNITYSDK_OFFSET(0x231C410)
#define UICHARACTERINFO__AWAKE_B__107_5_OFFSET UNITYSDK_OFFSET(0x231C430)

	inline static constexpr unsigned int UICharacterInfo_TypeDefinitionIndex = 4905;

	class UICharacterInfo : public Il2CppObject
	{
	public:
		CharacterObject* _CharacterObject_k__BackingField; // 0x18
		UITexture* FormationLineTexture; // 0x20
		UILabel* NameText; // 0x28
		UILabel* SchoolNameText; // 0x30
		UITexture* SchoolIcon; // 0x38
		UISprite* RarityIcon; // 0x40
		::Il2CppArray<::System::Object*>* GradeIconForeGroundList; // 0x48
		UILabel* GradeLabel; // 0x50
		UILabel* LvText; // 0x58
		UISlider* LevelGauge; // 0x60
		UILabel* ExpLabel; // 0x68
		UISprite* LevelGaugeBg; // 0x70
		::UnityEngine::GameObject* MaxLevelIconImage; // 0x78
		UILabel* MainMosLabel; // 0x80
		UILabel* SupportMosLabel; // 0x88
		UILabel* CostRegenLabel; // 0x90
		UILabel* SupportPowerLabel; // 0x98
		UILabel* TacticRoleLabel; // 0xA0
		UISprite* TacticRoleIcon; // 0xA8
		UISprite* TacticRange; // 0xB0
		UITexture* SquadTypeTexture; // 0xB8
		UILabel* AttackPowerLabel; // 0xC0
		UILabel* DefensePowerLabel; // 0xC8
		UILabel* MaxHpLabel; // 0xD0
		UILabel* HealPowerLabel; // 0xD8
		UILabel* FavorLevel; // 0xE0
		UILabel* FavorExp; // 0xE8
		UILabel* FavorBuff; // 0xF0
		::Il2CppArray<::System::Object*>* PotentialLevelTags; // 0xF8
		UICharacterCard* CharacterCard; // 0x100
		::UnityEngine::GameObject* LevelUpRedDot; // 0x108
		::UnityEngine::GameObject* TranscendenceRedDot; // 0x110
		::UnityEngine::GameObject* SkillRedDot; // 0x118
		::UnityEngine::GameObject* PotentialRedDot; // 0x120
		::UnityEngine::GameObject* ObscurationIcon; // 0x128
		UISkillInfo* ExSkillInfo; // 0x130
		UISkillInfo* NormalSkillInfo; // 0x138
		UISkillInfo* PublicSkillInfo; // 0x140
		UISkillInfo* PassiveSkillInfo; // 0x148
		UISkillInfo* ExPassiveSkillInfo; // 0x150
		UISprite* StreetTopographyIcon; // 0x158
		UISprite* OutdoorTopographyIcon; // 0x160
		UISprite* IndoorTopographyIcon; // 0x168
		::FlatData::TerrainAdaptationStat* _streetAdaptationStat; // 0x170
		::FlatData::TerrainAdaptationStat* _outdoorAdaptationStat; // 0x174
		::FlatData::TerrainAdaptationStat* _indoorAdaptationStat; // 0x178
		UILabel* OutDoor; // 0x180
		UILabel* Street; // 0x188
		UILabel* InDoor; // 0x190
		UISprite* ArmorTypeBG; // 0x198
		UILabel* ArmorType; // 0x1A0
		::FlatData::ArmorType* _myArmorType; // 0x1A8
		UISprite* BulletTypeBG; // 0x1B0
		UILabel* BulletType; // 0x1B8
		::FlatData::BulletType* _myBulletType; // 0x1C0
		UICharacterEquipmentSlots* equipSlots; // 0x1C8
		::UnityEngine::Transform* PortraitPos; // 0x1D0
		UIWidget* PortraitOffsetWidget; // 0x1D8
		CombatStyleChangeButton* combatStyleChangeButton; // 0x1E0
		::System::Boolean ShowRepresentCharacterInfo; // 0x1E8
		PortraitSpineCharacter* portraitSpineCharacter; // 0x1F0
		Il2CppObject* characterUniqueId; // 0x1F8
		Il2CppObject* costumeUniqueId; // 0x208
		::UnityEngine::Color* originColor; // 0x218
		::UnityEngine::Color* overGaugeColor; // 0x228
		::System::Int64 _AttackValue_k__BackingField; // 0x238
		::System::Int64 _DefenseValue_k__BackingField; // 0x240
		::System::Int64 _MaxHpValue_k__BackingField; // 0x248
		::System::Int64 _HealValue_k__BackingField; // 0x250
		::System::Boolean _UseDioramaSpine_k__BackingField; // 0x258
		::System::String* weaponMountedClip; // 0x0
		::UnityEngine::Animation* WeaponMountedAnim; // 0x260
		::UnityEngine::GameObject* WeaponMark; // 0x268
		UILabel* WeaponGrade; // 0x270
		::System::Boolean hasWeapon; // 0x278
		MXButton* favoriteOnButton; // 0x280
		MXButton* favoriteOffButton; // 0x288
		::UnityEngine::GameObject* favoriteOnRoot; // 0x290
		::UnityEngine::GameObject* favoriteOffRoot; // 0x298
		UIGearCard* gearCard; // 0x2A0
		MXButton* bulletTypeButton; // 0x2A8
		MXButton* armorTypeButton; // 0x2B0
		MXButton* streetBattleAdaptationButton; // 0x2B8
		MXButton* outdoorBattleAdaptationButton; // 0x2C0
		MXButton* indoorBattleAdaptationButton; // 0x2C8
		::System::Int32 portraitLoadToken; // 0x2D0

		CharacterObject* get_CharacterObject()
		{
			return ((CharacterObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_GET_CHARACTEROBJECT_OFFSET))(nullptr);
		}

		::System::Void set_CharacterObject(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SET_CHARACTEROBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetShowRepresentCharacterInfo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETSHOWREPRESENTCHARACTERINFO_OFFSET))(arg, nullptr);
		}

		SpineCharacter* get_SpineCharacter()
		{
			return ((SpineCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_GET_SPINECHARACTER_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_GET_ATTACKVALUE_OFFSET))(nullptr);
		}

		::System::Void set_AttackValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SET_ATTACKVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DefenseValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_GET_DEFENSEVALUE_OFFSET))(nullptr);
		}

		::System::Void set_DefenseValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SET_DEFENSEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxHpValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_GET_MAXHPVALUE_OFFSET))(nullptr);
		}

		::System::Void set_MaxHpValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SET_MAXHPVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_HealValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_GET_HEALVALUE_OFFSET))(nullptr);
		}

		::System::Void set_HealValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SET_HEALVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseDioramaSpine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_GET_USEDIORAMASPINE_OFFSET))(nullptr);
		}

		::System::Void set_UseDioramaSpine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SET_USEDIORAMASPINE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OpenBulletArmorTooltip(MXButton* arg, BulletArmorDamageInfo* arg2)
		{
			((::System::Void(*)(MXButton*, BulletArmorDamageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_OPENBULLETARMORTOOLTIP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickBattleAdaptationButton(MXButton* arg, ::FlatData::StageTopography* arg2)
		{
			((::System::Void(*)(MXButton*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_ONCLICKBATTLEADAPTATIONBUTTON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEquipmentItemEquipResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_HANDLEEQUIPMENTITEMEQUIPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEquipmentGrowthResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_HANDLEEQUIPMENTGROWTHRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignWithdrawEchelonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_HANDLECAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetNoneCharacterData(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETNONECHARACTERDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(CharacterObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(CharacterObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetGrowthData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETGROWTHDATA_OFFSET))(arg, nullptr);
		}

		::System::Void CompareStatValue(UICharacterInfo* arg)
		{
			((::System::Void(*)(UICharacterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_COMPARESTATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetObscuration(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETOBSCURATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetMainStat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETMAINSTAT_OFFSET))(nullptr);
		}

		::System::Void SetMainStat(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETMAINSTAT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetStarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETSTARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSquadType(::FlatData::SquadType* arg)
		{
			((::System::Void(*)(::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETSQUADTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void SetSkillInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETSKILLINFO_OFFSET))(nullptr);
		}

		::System::Void SetPortrait(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETPORTRAIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetCostume(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETCOSTUME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void OnClickFavorite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_ONCLICKFAVORITE_OFFSET))(nullptr);
		}

		::System::Void SetFavorite(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_SETFAVORITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__107_0(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO__AWAKE_B__107_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__107_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO__AWAKE_B__107_1_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__107_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO__AWAKE_B__107_2_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__107_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO__AWAKE_B__107_3_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__107_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO__AWAKE_B__107_4_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__107_5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO__AWAKE_B__107_5_OFFSET))(nullptr);
		}

	};

