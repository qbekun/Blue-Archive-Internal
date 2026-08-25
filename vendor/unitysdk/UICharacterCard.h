#pragma once
#include "unitysdk.h"

class UISprite;
class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Animation; }
class CharacterObject;
class FormationModel;
namespace FlatData { class SquadType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class RewardTag; }
namespace UnityEngine { class BoxCollider; }
namespace MX::GameLogic::DBModel { class RaidCharacterDB; }
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }
namespace FlatData { class ParcelType; }
namespace MX::GameLogic::DBModel { class ArenaCharacterDB; }

#define UICHARACTERCARD_GET_LINKANI_OFFSET UNITYSDK_OFFSET(0x22F27F0)
#define UICHARACTERCARD_GET_SHOWREPRESENTATIVE_OFFSET UNITYSDK_OFFSET(0x22F28C0)
#define UICHARACTERCARD_SET_SHOWREPRESENTATIVE_OFFSET UNITYSDK_OFFSET(0x22F28D0)
#define UICHARACTERCARD_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x22F28E0)
#define UICHARACTERCARD_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x22F28F0)
#define UICHARACTERCARD_GET_ISUSINGMARKACTIVE_OFFSET UNITYSDK_OFFSET(0x22F2970)
#define UICHARACTERCARD_GET_ISREADYMARKACTIVE_OFFSET UNITYSDK_OFFSET(0x22F29A0)
#define UICHARACTERCARD_GET_ISBLACKLISTMARKACTIVE_OFFSET UNITYSDK_OFFSET(0x22F29D0)
#define UICHARACTERCARD_GET_CHARACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x22F2A00)
#define UICHARACTERCARD_SET_CHARACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x22F2A10)
#define UICHARACTERCARD_GET_ISMYASSET_OFFSET UNITYSDK_OFFSET(0x22F2A30)
#define UICHARACTERCARD_SET_ISMYASSET_OFFSET UNITYSDK_OFFSET(0x22F2A40)
#define UICHARACTERCARD_GET_FROMPRESET_OFFSET UNITYSDK_OFFSET(0x22F2A50)
#define UICHARACTERCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x22F2B30)
#define UICHARACTERCARD_INITMULLIGANINDEXPARENT_OFFSET UNITYSDK_OFFSET(0x22F2CB0)
#define UICHARACTERCARD_HANDLECHARACTERCARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x22F2DF0)
#define UICHARACTERCARD_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x22F2EF0)
#define UICHARACTERCARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22F3210)
#define UICHARACTERCARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22F3310)
#define UICHARACTERCARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x22F3490)
#define UICHARACTERCARD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x22F34F0)
#define UICHARACTERCARD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x22F3500)
#define UICHARACTERCARD_GET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0x22F3510)
#define UICHARACTERCARD_SET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0x22F3520)
#define UICHARACTERCARD_INIT_OFFSET UNITYSDK_OFFSET(0x22F3530)
#define UICHARACTERCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x22F3720)
#define UICHARACTERCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x22F3C30)
#define UICHARACTERCARD_DISABLEALLMARK_OFFSET UNITYSDK_OFFSET(0x22F2F60)
#define UICHARACTERCARD_SETUI_OFFSET UNITYSDK_OFFSET(0x22F3790)
#define UICHARACTERCARD_SETSTYLEVISIBLE_OFFSET UNITYSDK_OFFSET(0x22F4180)
#define UICHARACTERCARD_REFRESHSTYLE_OFFSET UNITYSDK_OFFSET(0x22F4370)
#define UICHARACTERCARD_SETMYCHARACTER_OFFSET UNITYSDK_OFFSET(0x22F4910)
#define UICHARACTERCARD_SETMULLIGANMARK_OFFSET UNITYSDK_OFFSET(0x22F49F0)
#define UICHARACTERCARD_SETNOTOWNED_OFFSET UNITYSDK_OFFSET(0x22F4D30)
#define UICHARACTERCARD_SETUSINGMARK_OFFSET UNITYSDK_OFFSET(0x22F3CA0)
#define UICHARACTERCARD_SETREADYMARK_OFFSET UNITYSDK_OFFSET(0x22F3D80)
#define UICHARACTERCARD_SETREADYLABEL_OFFSET UNITYSDK_OFFSET(0x22F4DB0)
#define UICHARACTERCARD_SETBLACKLISTMARK_OFFSET UNITYSDK_OFFSET(0x22F3E60)
#define UICHARACTERCARD_SETBLACKLISTLABEL_OFFSET UNITYSDK_OFFSET(0x22F4E00)
#define UICHARACTERCARD_GETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x22F4F50)
#define UICHARACTERCARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x22F5010)
#define UICHARACTERCARD_ONCLICK_OFFSET UNITYSDK_OFFSET(0x22F53B0)
#define UICHARACTERCARD_SETUI_OFFSET UNITYSDK_OFFSET(0x22F5500)
#define UICHARACTERCARD_SETUIBYCHARLVSTARWEAPON_OFFSET UNITYSDK_OFFSET(0x22F6520)
#define UICHARACTERCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x22F66A0)
#define UICHARACTERCARD_SETUI_OFFSET UNITYSDK_OFFSET(0x22F5B50)
#define UICHARACTERCARD_SETCOSTUMEUI_OFFSET UNITYSDK_OFFSET(0x22F55F0)
#define UICHARACTERCARD_PLAYWEAPONMARKDIRECTING_OFFSET UNITYSDK_OFFSET(0x22F4790)
#define UICHARACTERCARD_PLAYTSSINTERACTION_OFFSET UNITYSDK_OFFSET(0x22F3F30)
#define UICHARACTERCARD_ISPLAYINGTSSINTERACTION_OFFSET UNITYSDK_OFFSET(0x22F6A70)
#define UICHARACTERCARD_SETUITEXTUREONLY_OFFSET UNITYSDK_OFFSET(0x22F6AF0)
#define UICHARACTERCARD_SETUI_OFFSET UNITYSDK_OFFSET(0x22F6DE0)
#define UICHARACTERCARD_SETFORPOPUPFORMATIONSLOT_OFFSET UNITYSDK_OFFSET(0x22F6F80)
#define UICHARACTERCARD_REFRESHMARKS_OFFSET UNITYSDK_OFFSET(0x22F7000)
#define UICHARACTERCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F7030)

	inline static constexpr unsigned int UICharacterCard_TypeDefinitionIndex = 4900;

	class UICharacterCard : public ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand
	{
	public:
		UISprite* BulletTypeBg; // 0x88
		UISprite* RarityBg; // 0x90
		UITexture* Image; // 0x98
		UISprite* WeaponTypeBg; // 0xA0
		UISprite* WeaponType; // 0xA8
		UISprite* TacticRole; // 0xB0
		UILabel* LevelText; // 0xB8
		UILabel* StarGradeText; // 0xC0
		::UnityEngine::GameObject* StarGradeObject; // 0xC8
		::UnityEngine::GameObject* LeaderMark; // 0xD0
		::UnityEngine::GameObject* PresetDimMark; // 0xD8
		::UnityEngine::GameObject* AssistMark; // 0xE0
		::UnityEngine::GameObject* WeaponMark; // 0xE8
		UILabel* WeaponGrade; // 0xF0
		::UnityEngine::GameObject* MulliganMark; // 0xF8
		::UnityEngine::GameObject* MulliganMark_Sub; // 0x100
		UILabel* mulliganIndexLabel; // 0x108
		UISprite* mulliganIndexBg; // 0x110
		::UnityEngine::GameObject* UsingMark; // 0x118
		::UnityEngine::GameObject* ReadyMark; // 0x120
		UILabel* ReadyLabel; // 0x128
		::UnityEngine::GameObject* BlackListMark; // 0x130
		UILabel* BlackListLabel; // 0x138
		MXButton* Button; // 0x140
		::UnityEngine::Transform* mulliganIndexParent; // 0x148
		::System::Boolean isSelected; // 0x150
		::System::String* weaponMountedClip; // 0x0
		::UnityEngine::Animation* WeaponMountedAnim; // 0x158
		::System::Boolean hasWeapon; // 0x160
		::UnityEngine::GameObject* LinkAnimationRoot; // 0x168
		::UnityEngine::Animation* linkAni; // 0x170
		UISprite* LinkTacticRole; // 0x178
		::UnityEngine::Animation* styleAnimation; // 0x180
		UILabel* styleIndexLabel; // 0x188
		UISprite* styleTacticRole; // 0x190
		::System::Boolean showRepresentStyle; // 0x198
		CharacterObject* _CharacterObject_k__BackingField; // 0x1A0
		::System::Boolean _isMyAsset_k__BackingField; // 0x1A8
		FormationModel* formationModel; // 0x1B0
		::System::Boolean hasUsingMark; // 0x1B8
		::System::Boolean hasReadyMark; // 0x1B9
		::System::Boolean hasBlackListMark; // 0x1BA
		Il2CppObject* fromPreset; // 0x1BB
		::System::Boolean isInit; // 0x1BD
		::System::Int32 _Index_k__BackingField; // 0x1C0
		::FlatData::SquadType* _SquadType_k__BackingField; // 0x1C4

		::UnityEngine::Animation* get_LinkAni()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_LINKANI_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowRepresentative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_SHOWREPRESENTATIVE_OFFSET))(nullptr);
		}

		::System::Void set_ShowRepresentative(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SET_SHOWREPRESENTATIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUsingMarkActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_ISUSINGMARKACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadyMarkActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_ISREADYMARKACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBlackListMarkActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_ISBLACKLISTMARKACTIVE_OFFSET))(nullptr);
		}

		CharacterObject* get_CharacterObject()
		{
			return ((CharacterObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_CHARACTEROBJECT_OFFSET))(nullptr);
		}

		::System::Void set_CharacterObject(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SET_CHARACTEROBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isMyAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_ISMYASSET_OFFSET))(nullptr);
		}

		::System::Void set_isMyAsset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SET_ISMYASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FromPreset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_FROMPRESET_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitMulliganIndexParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_INITMULLIGANINDEXPARENT_OFFSET))(nullptr);
		}

		::System::Boolean HandleCharacterCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_HANDLECHARACTERCARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDisable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETDISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::FlatData::SquadType* get_SquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GET_SQUADTYPE_OFFSET))(nullptr);
		}

		::System::Void set_SquadType(::FlatData::SquadType* arg)
		{
			((::System::Void(*)(::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SET_SQUADTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Int32 arg, ::FlatData::SquadType* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, ::FlatData::SquadType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(CharacterObject* arg, ::System::Boolean arg2, ::FlatData::RewardTag* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(CharacterObject*, ::System::Boolean, ::FlatData::RewardTag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetData(CharacterObject* arg, ::System::Boolean arg2, ::FlatData::RewardTag* arg3)
		{
			((::System::Void(*)(CharacterObject*, ::System::Boolean, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void DisableAllMark()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_DISABLEALLMARK_OFFSET))(nullptr);
		}

		::System::Void SetUI(CharacterObject* arg, ::FlatData::RewardTag* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(CharacterObject*, ::FlatData::RewardTag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetStyleVisible(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETSTYLEVISIBLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_REFRESHSTYLE_OFFSET))(nullptr);
		}

		::System::Void SetMyCharacter(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETMYCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMulliganMark(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETMULLIGANMARK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetNotOwned(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETNOTOWNED_OFFSET))(arg, nullptr);
		}

		::System::Void SetUsingMark(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETUSINGMARK_OFFSET))(arg, nullptr);
		}

		::System::Void SetReadyMark(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETREADYMARK_OFFSET))(arg, nullptr);
		}

		::System::Void SetReadyLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETREADYLABEL_OFFSET))(str, nullptr);
		}

		::System::Void SetBlacklistMark(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETBLACKLISTMARK_OFFSET))(arg, nullptr);
		}

		::System::Void SetBlackListLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETBLACKLISTLABEL_OFFSET))(nullptr);
		}

		::UnityEngine::BoxCollider* GetCollider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_GETCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::FlatData::RewardTag* arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Boolean, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETUI_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetUIByCharLvStarWeapon(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETUIBYCHARLVSTARWEAPON_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::RaidCharacterDB* arg, ::MX::GameLogic::DBModel::RaidTeamSettingDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidCharacterDB*, ::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetUI(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::FlatData::RewardTag* arg5)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETUI_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetCostumeUI(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::FlatData::RewardTag* arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Boolean, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETCOSTUMEUI_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void PlayWeaponMarkDirecting(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_PLAYWEAPONMARKDIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTSSInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_PLAYTSSINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlayingTSSInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_ISPLAYINGTSSINTERACTION_OFFSET))(nullptr);
		}

		::System::Void SetUITextureOnly(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETUITEXTUREONLY_OFFSET))(str, nullptr);
		}

		::System::Void SetUI(::MX::GameLogic::DBModel::ArenaCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetForPopupFormationSlot(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_SETFORPOPUPFORMATIONSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMarks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_REFRESHMARKS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_.CTOR_OFFSET))(nullptr);
		}

	};

