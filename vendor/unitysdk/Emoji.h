#pragma once
#include "unitysdk.h"

class EmojiTweener;
namespace UnityEngine { class Transform; }
class UISprite;
class UIHPBar;
namespace FlatData { class EmojiEvent; }
class CharacterVisual;
class EmojiContent;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Coroutine; }
class InvisibleFlag;
class UIWidget;
class HexaUnitVisual;
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }
namespace MX::Logic::Battles { class CharacterShieldHealEventArgs; }
namespace FlatData { class TerrainAdaptationStat; }
namespace MX::Data::Excel { class CombatEmojiExcel; }

#define EMOJI_GET_VIEWZ_OFFSET UNITYSDK_OFFSET(0x25E29A0)
#define EMOJI_GET_CURRENTEMOJI_OFFSET UNITYSDK_OFFSET(0x25E2B00)
#define EMOJI_SET_CURRENTEMOJI_OFFSET UNITYSDK_OFFSET(0x25E2B10)
#define EMOJI_GET_EMOJITRANSFORM_OFFSET UNITYSDK_OFFSET(0x25E2B20)
#define EMOJI_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x25E2BB0)
#define EMOJI_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x25E2BD0)
#define EMOJI_AWAKE_OFFSET UNITYSDK_OFFSET(0x25E2BF0)
#define EMOJI_INITEMOJICONTAINER_OFFSET UNITYSDK_OFFSET(0x25E2C00)
#define EMOJI_INITSCALE_OFFSET UNITYSDK_OFFSET(0x25E2FD0)
#define EMOJI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25E3160)
#define EMOJI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25E3250)
#define EMOJI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25E37F0)
#define EMOJI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25E3910)
#define EMOJI_PLAYONCE_OFFSET UNITYSDK_OFFSET(0x25E3BA0)
#define EMOJI_REMOVEINVISIBLEFLAG_OFFSET UNITYSDK_OFFSET(0x25E37A0)
#define EMOJI_ADDINVISIBLEFLAG_OFFSET UNITYSDK_OFFSET(0x25E46D0)
#define EMOJI_PLAY_OFFSET UNITYSDK_OFFSET(0x25E4710)
#define EMOJI_PLAY_OFFSET UNITYSDK_OFFSET(0x25E4AC0)
#define EMOJI_PLAY_OFFSET UNITYSDK_OFFSET(0x25E4B10)
#define EMOJI_PLAY_OFFSET UNITYSDK_OFFSET(0x25E4B50)
#define EMOJI_PLAY_OFFSET UNITYSDK_OFFSET(0x25E4B90)
#define EMOJI_RESET_OFFSET UNITYSDK_OFFSET(0x25E4BC0)
#define EMOJI_STOP_OFFSET UNITYSDK_OFFSET(0x25E4E90)
#define EMOJI_PLAYTERRAINADAPTION_OFFSET UNITYSDK_OFFSET(0x25E5120)
#define EMOJI_UPDATEDEPTH_OFFSET UNITYSDK_OFFSET(0x25E51A0)
#define EMOJI_UNLOAD_OFFSET UNITYSDK_OFFSET(0x25E5300)
#define EMOJI_INITPOSITIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x25E3680)
#define EMOJI_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x25E5380)
#define EMOJI_SETWIDGETSIDE_OFFSET UNITYSDK_OFFSET(0x25E54C0)
#define EMOJI_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x25E34A0)
#define EMOJI_PLAY_OFFSET UNITYSDK_OFFSET(0x25E56F0)
#define EMOJI_PLAY_OFFSET UNITYSDK_OFFSET(0x25E4760)
#define EMOJI_COPLAY_OFFSET UNITYSDK_OFFSET(0x25E5B50)
#define EMOJI_COLOOPPLAY_OFFSET UNITYSDK_OFFSET(0x25E5C10)
#define EMOJI_COPLAYONCE_OFFSET UNITYSDK_OFFSET(0x25E4650)
#define EMOJI_SETDURATION_OFFSET UNITYSDK_OFFSET(0x25E4200)
#define EMOJI_CHECKPLAYABLEDURATION_OFFSET UNITYSDK_OFFSET(0x25E3DF0)
#define EMOJI_CHECKFLIP_OFFSET UNITYSDK_OFFSET(0x25E44E0)
#define EMOJI_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x25E5080)
#define EMOJI_GETEMOJICONTENTS_OFFSET UNITYSDK_OFFSET(0x25E40E0)
#define EMOJI_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E5F90)
#define EMOJI__COPLAYONCE_B__63_0_OFFSET UNITYSDK_OFFSET(0x25E6000)
#define EMOJI__COPLAYONCE_B__63_1_OFFSET UNITYSDK_OFFSET(0x25E6010)

	inline static constexpr unsigned int Emoji_TypeDefinitionIndex = 6393;

	class Emoji : public Il2CppObject
	{
	public:
		EmojiTweener* emojiTweener; // 0x18
		::UnityEngine::Transform* leftTransform; // 0x20
		::UnityEngine::Transform* rightTransform; // 0x28
		UISprite* backgroundSprite; // 0x30
		Il2CppObject* emojiContainer; // 0x38
		UIHPBar* parent; // 0x40
		::FlatData::EmojiEvent* _CurrentEmoji_k__BackingField; // 0x48
		::System::Int32 currentPriority; // 0x4C
		CharacterVisual* characterVisual; // 0x50
		EmojiContent* activeContent; // 0x58
		::System::Int32 depthBias; // 0x60
		::System::Single duration; // 0x64
		::System::Single soundOnlyDuration; // 0x68
		::UnityEngine::Vector3* worldPositionOffset; // 0x6C
		::UnityEngine::Vector3* uiPositionOffset; // 0x78
		::System::Boolean isFlip; // 0x84
		::System::Boolean useWorldPosition; // 0x85
		::UnityEngine::Coroutine* playCoroutine; // 0x88
		::UnityEngine::Transform* _emojiTransform; // 0x90
		::UnityEngine::Vector3* _LocalScale_k__BackingField; // 0x98
		Il2CppObject* disableEmojiList; // 0xA8
		::System::Boolean isPoolingPrefab; // 0xB0
		InvisibleFlag* Invisible; // 0xB4
		UIWidget* InvisibleWidget; // 0xB8

		::System::Single get_ViewZ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_GET_VIEWZ_OFFSET))(nullptr);
		}

		::FlatData::EmojiEvent* get_CurrentEmoji()
		{
			return ((::FlatData::EmojiEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_GET_CURRENTEMOJI_OFFSET))(nullptr);
		}

		::System::Void set_CurrentEmoji(::FlatData::EmojiEvent* arg)
		{
			((::System::Void(*)(::FlatData::EmojiEvent*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_SET_CURRENTEMOJI_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_emojiTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_GET_EMOJITRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_LocalScale()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_GET_LOCALSCALE_OFFSET))(nullptr);
		}

		::System::Void set_LocalScale(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_SET_LOCALSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitEmojiContainer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_INITEMOJICONTAINER_OFFSET))(nullptr);
		}

		::System::Void InitScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_INITSCALE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(CharacterVisual* arg, UIHPBar* arg2)
		{
			((::System::Void(*)(CharacterVisual*, UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(UIHPBar* arg)
		{
			((::System::Void(*)(UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOnce(::FlatData::EmojiEvent* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::EmojiEvent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_PLAYONCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveInvisibleFlag(InvisibleFlag* arg)
		{
			((::System::Void(*)(InvisibleFlag*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_REMOVEINVISIBLEFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void AddInvisibleFlag(InvisibleFlag* arg)
		{
			((::System::Void(*)(InvisibleFlag*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_ADDINVISIBLEFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_PLAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Play(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Play(::MX::Logic::Battles::LifeGainEventArgs* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::LifeGainEventArgs*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Play(::MX::Logic::Battles::CharacterShieldHealEventArgs* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterShieldHealEventArgs*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Play(::FlatData::TerrainAdaptationStat* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::TerrainAdaptationStat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_RESET_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_STOP_OFFSET))(nullptr);
		}

		::System::Void PlayTerrainAdaption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_PLAYTERRAINADAPTION_OFFSET))(nullptr);
		}

		::System::Void UpdateDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_UPDATEDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void InitPositionSystem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_INITPOSITIONSYSTEM_OFFSET))(nullptr);
		}

		::System::Void InitPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_INITPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetWidgetSide(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_SETWIDGETSIDE_OFFSET))(arg, nullptr);
		}

		::System::Void SetOffset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_SETOFFSET_OFFSET))(nullptr);
		}

		::System::Void Play(::FlatData::EmojiEvent* arg, ::UnityEngine::Vector3* arg2, ::System::Boolean arg3, ::System::Int32 arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::FlatData::EmojiEvent*, ::UnityEngine::Vector3*, ::System::Boolean, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_PLAY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Play(::FlatData::EmojiEvent* arg, ::System::Boolean arg2, ::System::Int32 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::FlatData::EmojiEvent*, ::System::Boolean, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_PLAY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::Single arg, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_COPLAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoLoopPlay(::FlatData::EmojiEvent* arg, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::EmojiEvent*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_COLOOPPLAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayOnce(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_COPLAYONCE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDuration(::MX::Data::Excel::CombatEmojiExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CombatEmojiExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_SETDURATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckPlayableDuration(::FlatData::EmojiEvent* arg, ::MX::Data::Excel::CombatEmojiExcel* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::EmojiEvent*, ::MX::Data::Excel::CombatEmojiExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_CHECKPLAYABLEDURATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckFlip(::MX::Data::Excel::CombatEmojiExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CombatEmojiExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_CHECKFLIP_OFFSET))(arg, nullptr);
		}

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_ONFINISHED_OFFSET))(nullptr);
		}

		EmojiContent* GetEmojiContents(::FlatData::EmojiEvent* arg)
		{
			return ((EmojiContent*(*)(::FlatData::EmojiEvent*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJI_GETEMOJICONTENTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoPlayOnce_b__63_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI__COPLAYONCE_B__63_0_OFFSET))(nullptr);
		}

		::System::Void _CoPlayOnce_b__63_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJI__COPLAYONCE_B__63_1_OFFSET))(nullptr);
		}

	};

