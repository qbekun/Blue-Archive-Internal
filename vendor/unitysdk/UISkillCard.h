#pragma once
#include "unitysdk.h"

class UIPanel;
class UISkillCardCostSet;
class UISprite;
class UITexture;
class UITweener;
class TweenPosition;
namespace UnityEngine { class GameObject; }
class MXBattleTask;
namespace MX::Logic::Battles { class O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39; }
namespace UnityEngine { class KeyCode; }
class UIPlayerSkillCardSet;
class MXUIKeyMapping;
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Coroutine; }
namespace MX::Logic::Battles { class SkillCardState; }
namespace MX::Logic::BattleEntities { class SkillCardEventArgs; }
class UseType;
class SkillCardSizeAppendTheme_Base;
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::Battles { class SkillCardUpdateEvent; }

#define UISKILLCARD_GET_DISAPPEARANI_OFFSET UNITYSDK_OFFSET(0x22387F0)
#define UISKILLCARD_APPLY_OFFSET UNITYSDK_OFFSET(0x2238840)
#define UISKILLCARD_SETINPUTKEY_OFFSET UNITYSDK_OFFSET(0x2238890)
#define UISKILLCARD_OFFC8237C277739273892E1D382423DF005CF55A088562FACDC5E7D70175B065F_OFFSET UNITYSDK_OFFSET(0x2238970)
#define UISKILLCARD_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x2238B00)
#define UISKILLCARD_CANCLICK_OFFSET UNITYSDK_OFFSET(0x2238B10)
#define UISKILLCARD_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x2239160)
#define UISKILLCARD__ONCARDCOPYUPDATED_B__79_0_OFFSET UNITYSDK_OFFSET(0x2239170)
#define UISKILLCARD_RESERVERELEASE_OFFSET UNITYSDK_OFFSET(0x2239470)
#define UISKILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x22394A0)
#define UISKILLCARD_CLEARCOPYEFFECTS_OFFSET UNITYSDK_OFFSET(0x22395B0)
#define UISKILLCARD_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0x2239600)
#define UISKILLCARD_UPDATEFILLGAUGE_OFFSET UNITYSDK_OFFSET(0x2239890)
#define UISKILLCARD_SETSKILLCARD_OFFSET UNITYSDK_OFFSET(0x223A740)
#define UISKILLCARD_CLEARSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x223B770)
#define UISKILLCARD_SETCOPYLOOPANIMATION_OFFSET UNITYSDK_OFFSET(0x223B7C0)
#define UISKILLCARD_OFCAE96A4FC8079DDF77E38021444039B1B3DD07440F7D78F3162F5592627749B_OFFSET UNITYSDK_OFFSET(0x223B840)
#define UISKILLCARD_PROCESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x223B850)
#define UISKILLCARD_SET_ANIM_OFFSET UNITYSDK_OFFSET(0x223B8E0)
#define UISKILLCARD_SET_SKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x223B900)
#define UISKILLCARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x223B920)
#define UISKILLCARD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x2239680)
#define UISKILLCARD_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x223C000)
#define UISKILLCARD_GET_ISTWEENPLAYING_OFFSET UNITYSDK_OFFSET(0x223C020)
#define UISKILLCARD_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x223C030)
#define UISKILLCARD_ONPRESS_OFFSET UNITYSDK_OFFSET(0x223C040)
#define UISKILLCARD_SETCHARTEXTURE_OFFSET UNITYSDK_OFFSET(0x223BF60)
#define UISKILLCARD_UPDATECARDSIZEAPPENDTHEMES_OFFSET UNITYSDK_OFFSET(0x223AC60)
#define UISKILLCARD_UPDATECANCELBULLETTIME_OFFSET UNITYSDK_OFFSET(0x223C740)
#define UISKILLCARD__COPLAYANIMATION_G__COPLAYANIMATIONINTERNAL|98_0_OFFSET UNITYSDK_OFFSET(0x223C8C0)
#define UISKILLCARD_SAFECOSTFXSTOP_OFFSET UNITYSDK_OFFSET(0x223AC10)
#define UISKILLCARD__ONCARDCOPYUPDATED_G__PLAYCOPYANIMATION|79_1_OFFSET UNITYSDK_OFFSET(0x223C9C0)
#define UISKILLCARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x223CA70)
#define UISKILLCARD_GET_MXBATTLETASK_OFFSET UNITYSDK_OFFSET(0x22390B0)
#define UISKILLCARD_PROCESSFORMCONVERTED_OFFSET UNITYSDK_OFFSET(0x223CD10)
#define UISKILLCARD_O1AB97153CA67DB3BC2154219C09A2E00C1B0158D4CE83B7D6B4E6EC71D270D6F_OFFSET UNITYSDK_OFFSET(0x223CD90)
#define UISKILLCARD_SET_ISTWEENPLAYING_OFFSET UNITYSDK_OFFSET(0x223CDB0)
#define UISKILLCARD_SETAPPENDLABEL_OFFSET UNITYSDK_OFFSET(0x223CDC0)
#define UISKILLCARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x223CF40)
#define UISKILLCARD_COPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x223D220)
#define UISKILLCARD__SETAPPENDLABEL_B__105_0_OFFSET UNITYSDK_OFFSET(0x223D2D0)
#define UISKILLCARD_ISDIMED_OFFSET UNITYSDK_OFFSET(0x2238ED0)
#define UISKILLCARD_GETSKILLCARDPACELTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x2239220)
#define UISKILLCARD_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x223D370)
#define UISKILLCARD_PROCESSSKILLCARD_OFFSET UNITYSDK_OFFSET(0x223D380)
#define UISKILLCARD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x223D430)
#define UISKILLCARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x223D570)
#define UISKILLCARD_UPDATEPCCONTROL_OFFSET UNITYSDK_OFFSET(0x223A290)
#define UISKILLCARD_SETCHARCHANGETEXTURE_OFFSET UNITYSDK_OFFSET(0x223BFB0)
#define UISKILLCARD_ONCARDCOPYUPDATED_OFFSET UNITYSDK_OFFSET(0x223D680)
#define UISKILLCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x223DB90)
#define UISKILLCARD_GET_SKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x223DD20)
#define UISKILLCARD__AWAKE_B__71_0_OFFSET UNITYSDK_OFFSET(0x223DD30)
#define UISKILLCARD_SELECTCARD_OFFSET UNITYSDK_OFFSET(0x223A0D0)

	inline static constexpr unsigned int UISkillCard_TypeDefinitionIndex = 4479;

	class UISkillCard : public Il2CppObject
	{
	public:
		UIPanel* Panel; // 0x18
		::Il2CppArray<::System::Object*>* CharTextures; // 0x20
		::Il2CppArray<::System::Object*>* CharChangeTextures; // 0x28
		Il2CppObject* RemainCountLabels; // 0x30
		UISkillCardCostSet* CostSet; // 0x38
		UISprite* GaugeSprite; // 0x40
		UITexture* GaugeTexture; // 0x48
		UISprite* AdditionalGauge; // 0x50
		UITweener* AvailableLight; // 0x58
		TweenPosition* TweenPosition; // 0x60
		::UnityEngine::GameObject* WaitingParticle; // 0x68
		::UnityEngine::GameObject* NextUseParticle; // 0x70
		::UnityEngine::GameObject* Parcel; // 0x78
		::UnityEngine::GameObject* Enable; // 0x80
		::UnityEngine::GameObject* Disable; // 0x88
		::UnityEngine::GameObject* Cancel; // 0x90
		::UnityEngine::GameObject* appendLabel; // 0x98
		UISprite* NormalBg; // 0xA0
		::Il2CppArray<::System::Object*>* CopyLoopActiveObjects; // 0xA8
		::Il2CppArray<::System::Object*>* OverloadLoopObjects; // 0xB0
		::Il2CppArray<::System::Object*>* CopyEffectsToClear; // 0xB8
		UISprite* CancelBg; // 0xC0
		::System::Boolean isCopyLoopActive; // 0xC8
		::System::Collections::IEnumerator* CurrentCoCostChanged; // 0xD0
		::System::Boolean _isTweenPlaying_k__BackingField; // 0xD8
		MXBattleTask* task; // 0xE0
		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* _skillCardManager_k__BackingField; // 0xE8
		Il2CppObject* snapshotQueue; // 0xF0
		::UnityEngine::KeyCode* inputKeyCode; // 0xF8
		::System::String* inputKey; // 0x100
		UIPlayerSkillCardSet* _Parent_k__BackingField; // 0x108
		MXUIKeyMapping* _mapping; // 0x110
		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* Oe09842debf8127a12565fb026ee158e2bb4c625dcdf89d79771eac2cfcd91d57; // 0x118
		::UnityEngine::Animation* _Anim_k__BackingField; // 0x120
		::UnityEngine::AnimationClip* currentClip; // 0x128
		::UnityEngine::Coroutine* animationCoroutine; // 0x130
		::System::String* CreateAni; // 0x0
		::System::String* DisappearAni_Original; // 0x0
		::System::String* ChangeAni; // 0x0
		::System::String* CopyAni; // 0x0
		::System::String* CopyRevertAni; // 0x0
		::System::String* DisappearAni_Override; // 0x138
		::System::Boolean isWaiting; // 0x140
		::MX::Logic::Battles::SkillCardState* _CurState_k__BackingField; // 0x144
		::System::Boolean Selected; // 0x148
		::System::Boolean isPressStarted; // 0x149
		::System::Single originalTouchWidth; // 0x14C
		::System::Int32 cacheCardSize; // 0x150
		Il2CppObject* usingAppendThemes; // 0x158
		::UnityEngine::Coroutine* processSnapShotCoroutine; // 0x160

		::System::String* get_DisappearAni()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_GET_DISAPPEARANI_OFFSET))(nullptr);
		}

		::System::Void Apply(::MX::Logic::BattleEntities::SkillCardEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillCardEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void SetInputKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SETINPUTKEY_OFFSET))(str, nullptr);
		}

		::System::Void Offc8237c277739273892e1d382423df005cf55a088562facdc5e7d70175b065f()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_OFFC8237C277739273892E1D382423DF005CF55A088562FACDC5E7D70175B065F_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_Anim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_GET_ANIM_OFFSET))(nullptr);
		}

		UseType* CanClick()
		{
			return ((UseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_CANCLICK_OFFSET))(nullptr);
		}

		UIPlayerSkillCardSet* get_Parent()
		{
			return ((UIPlayerSkillCardSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void _OnCardCopyUpdated_b__79_0(UITexture* arg)
		{
			((::System::Void(*)(UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD__ONCARDCOPYUPDATED_B__79_0_OFFSET))(arg, nullptr);
		}

		::System::Void ReserveRelease(SkillCardSizeAppendTheme_Base* arg)
		{
			((::System::Void(*)(SkillCardSizeAppendTheme_Base*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_RESERVERELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ClearCopyEffects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_CLEARCOPYEFFECTS_OFFSET))(nullptr);
		}

		::System::Void OnDragOut(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_ONDRAGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateFillGauge()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_UPDATEFILLGAUGE_OFFSET))(nullptr);
		}

		::System::Void SetSkillCard(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SETSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Void ClearSnapshot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_CLEARSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void SetCopyLoopAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SETCOPYLOOPANIMATION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* Ofcae96a4fc8079ddf77e38021444039b1b3dd07440f7d78f3162f5592627749b()
		{
			return ((::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_OFCAE96A4FC8079DDF77E38021444039B1B3DD07440F7D78F3162F5592627749B_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSnapshot()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_PROCESSSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void set_Anim(::UnityEngine::Animation* arg)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SET_ANIM_OFFSET))(arg, nullptr);
		}

		::System::Void set_skillCardManager(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SET_SKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnExecute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_ONEXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Parent(UIPlayerSkillCardSet* arg)
		{
			((::System::Void(*)(UIPlayerSkillCardSet*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isTweenPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_GET_ISTWEENPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_CurState(::MX::Logic::Battles::SkillCardState* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::SkillCardState*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SET_CURSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharTexture(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SETCHARTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCardSizeAppendThemes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_UPDATECARDSIZEAPPENDTHEMES_OFFSET))(nullptr);
		}

		::System::Void UpdateCancelBulletTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_UPDATECANCELBULLETTIME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _CoPlayAnimation_g__CoPlayAnimationInternal|98_0(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD__COPLAYANIMATION_G__COPLAYANIMATIONINTERNAL|98_0_OFFSET))(str, nullptr);
		}

		::System::Void SafeCostFxStop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SAFECOSTFXSTOP_OFFSET))(nullptr);
		}

		::System::Void _OnCardCopyUpdated_g__PlayCopyAnimation|79_1(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD__ONCARDCOPYUPDATED_G__PLAYCOPYANIMATION|79_1_OFFSET))(str, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_UPDATE_OFFSET))(nullptr);
		}

		MXBattleTask* get_mxBattleTask()
		{
			return ((MXBattleTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_GET_MXBATTLETASK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessFormConverted(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_PROCESSFORMCONVERTED_OFFSET))(arg, nullptr);
		}

		::System::Void O1ab97153ca67db3bc2154219c09a2e00c1b0158d4ce83b7d6b4e6ec71d270d6f(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_O1AB97153CA67DB3BC2154219C09A2E00C1B0158D4CE83B7D6B4E6EC71D270D6F_OFFSET))(arg, nullptr);
		}

		::System::Void set_isTweenPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SET_ISTWEENPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void SetAppendLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SETAPPENDLABEL_OFFSET))(str, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayAnimation(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_COPLAYANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void _SetAppendLabel_b__105_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD__SETAPPENDLABEL_B__105_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDimed(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_ISDIMED_OFFSET))(arg, nullptr);
		}

		::System::String* GetSkillCardPacelTexturePath(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::MX::Data::CharacterSkillListKey* arg2)
		{
			return ((::System::String*(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_GETSKILLCARDPACELTEXTUREPATH_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::SkillCardState* get_CurState()
		{
			return ((::MX::Logic::Battles::SkillCardState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_GET_CURSTATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSkillCard(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::MX::Logic::Battles::SkillCardState* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::MX::Logic::Battles::SkillCardState*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_PROCESSSKILLCARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void UpdatePCControl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_UPDATEPCCONTROL_OFFSET))(nullptr);
		}

		::System::Void SetCharChangeTexture(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SETCHARCHANGETEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void OnCardCopyUpdated(::System::Object* arg, ::MX::Logic::Battles::SkillCardUpdateEvent* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::SkillCardUpdateEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_ONCARDCOPYUPDATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_AWAKE_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* get_skillCardManager()
		{
			return ((::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_GET_SKILLCARDMANAGER_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__71_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD__AWAKE_B__71_0_OFFSET))(nullptr);
		}

		::System::Void SelectCard(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARD_SELECTCARD_OFFSET))(arg, nullptr);
		}

	};

