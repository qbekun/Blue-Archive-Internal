#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
class TweenAlpha;
namespace UnityEngine { class Animation; }
class IconType;
class AnimationEnableFlag;
namespace FlatData { class LogicEffectCategory; }

#define BUFFICONCONTENT_GET_STATEFFECTS_OFFSET UNITYSDK_OFFSET(0x25D0350)
#define BUFFICONCONTENT_SET_STATEFFECTS_OFFSET UNITYSDK_OFFSET(0x25D0360)
#define BUFFICONCONTENT_GET_STATUSEFFECTS_OFFSET UNITYSDK_OFFSET(0x25D0370)
#define BUFFICONCONTENT_SET_STATUSEFFECTS_OFFSET UNITYSDK_OFFSET(0x25D0380)
#define BUFFICONCONTENT_GET_DOTABILITIES_OFFSET UNITYSDK_OFFSET(0x25D0390)
#define BUFFICONCONTENT_SET_DOTABILITIES_OFFSET UNITYSDK_OFFSET(0x25D03A0)
#define BUFFICONCONTENT_GET_VISUALIDHASH_OFFSET UNITYSDK_OFFSET(0x25D03C0)
#define BUFFICONCONTENT_SET_VISUALIDHASH_OFFSET UNITYSDK_OFFSET(0x25D03D0)
#define BUFFICONCONTENT_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x25D03E0)
#define BUFFICONCONTENT_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x25D03F0)
#define BUFFICONCONTENT_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x25D0400)
#define BUFFICONCONTENT_GET_ISPLAYINGNEWORREFRESH_OFFSET UNITYSDK_OFFSET(0x25D0480)
#define BUFFICONCONTENT_GET_ISPLAYINGREMOVE_OFFSET UNITYSDK_OFFSET(0x25D04D0)
#define BUFFICONCONTENT_GET_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0x25D0520)
#define BUFFICONCONTENT_ATTACH_OFFSET UNITYSDK_OFFSET(0x25D05A0)
#define BUFFICONCONTENT_ATTACH_OFFSET UNITYSDK_OFFSET(0x25D0AB0)
#define BUFFICONCONTENT_ATTACH_OFFSET UNITYSDK_OFFSET(0x25D0D80)
#define BUFFICONCONTENT_SETUI_OFFSET UNITYSDK_OFFSET(0x25D0970)
#define BUFFICONCONTENT_DETACH_OFFSET UNITYSDK_OFFSET(0x25D1040)
#define BUFFICONCONTENT_DETACH_OFFSET UNITYSDK_OFFSET(0x25D1490)
#define BUFFICONCONTENT_DETACH_OFFSET UNITYSDK_OFFSET(0x25D1800)
#define BUFFICONCONTENT_PLAYREMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x25D13B0)
#define BUFFICONCONTENT_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x25D0880)
#define BUFFICONCONTENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25D1BC0)
#define BUFFICONCONTENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25D1C70)
#define BUFFICONCONTENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x25D1D80)
#define BUFFICONCONTENT_BEGINBLINK_OFFSET UNITYSDK_OFFSET(0x25D23A0)
#define BUFFICONCONTENT_PLAYATTACHANIMATION_OFFSET UNITYSDK_OFFSET(0x25D0AA0)
#define BUFFICONCONTENT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x25D23F0)
#define BUFFICONCONTENT_TOCLIPNAME_OFFSET UNITYSDK_OFFSET(0x25D2600)
#define BUFFICONCONTENT_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x25D1C80)
#define BUFFICONCONTENT_ANIMATIONENDONCECALLBACK_OFFSET UNITYSDK_OFFSET(0x25D1440)
#define BUFFICONCONTENT_INITTWEEN_OFFSET UNITYSDK_OFFSET(0x25D1BF0)
#define BUFFICONCONTENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x25D2640)
#define BUFFICONCONTENT_RESET_OFFSET UNITYSDK_OFFSET(0x25D2730)
#define BUFFICONCONTENT_ENABLEANIMATION_OFFSET UNITYSDK_OFFSET(0x25D2770)
#define BUFFICONCONTENT_ENABLEANIMATION_OFFSET UNITYSDK_OFFSET(0x25D27E0)
#define BUFFICONCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25D2830)
#define BUFFICONCONTENT__DETACH_B__51_0_OFFSET UNITYSDK_OFFSET(0x25D2960)
#define BUFFICONCONTENT__DETACH_B__52_0_OFFSET UNITYSDK_OFFSET(0x25D29E0)
#define BUFFICONCONTENT__DETACH_B__53_0_OFFSET UNITYSDK_OFFSET(0x25D2A60)

	inline static constexpr unsigned int BuffIconContent_TypeDefinitionIndex = 6356;

	class BuffIconContent : public Il2CppObject
	{
	public:
		::System::String* countSpriteName; // 0x0
		UISprite* iconSprite; // 0x18
		UISprite* iconSpriteSecondForAnimation; // 0x20
		UILabel* countLabel; // 0x28
		TweenAlpha* tweenAlpha; // 0x30
		::UnityEngine::Animation* anim; // 0x38
		::System::String* aniNameNew; // 0x40
		::System::String* aniNameRefresh; // 0x48
		::System::String* aniNameRemove; // 0x50
		::System::String* aniNameRemoveWithRemained; // 0x58
		::Il2CppArray<::System::Object*>* iconPieceRemove; // 0x60
		::System::String* blinkSkillGroupId; // 0x68
		Il2CppObject* onAnimationEndOnce; // 0x70
		Il2CppObject* _StatEffects_k__BackingField; // 0x78
		Il2CppObject* _StatusEffects_k__BackingField; // 0x80
		Il2CppObject* _DotAbilities_k__BackingField; // 0x88
		::System::UInt32 _VisualIdHash_k__BackingField; // 0x90
		IconType* _iconType_k__BackingField; // 0x94
		AnimationEnableFlag* enabledAnimation; // 0x98
		AnimationEnableFlag* enabledAnimationAfterOnEnable; // 0x9C
		::System::Boolean playAnimation; // 0xA0
		::System::Boolean isRefresh; // 0xA1

		Il2CppObject* get_StatEffects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_GET_STATEFFECTS_OFFSET))(nullptr);
		}

		::System::Void set_StatEffects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_SET_STATEFFECTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StatusEffects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_GET_STATUSEFFECTS_OFFSET))(nullptr);
		}

		::System::Void set_StatusEffects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_SET_STATUSEFFECTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DotAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_GET_DOTABILITIES_OFFSET))(nullptr);
		}

		::System::Void set_DotAbilities(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_SET_DOTABILITIES_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_VisualIdHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_GET_VISUALIDHASH_OFFSET))(nullptr);
		}

		::System::Void set_VisualIdHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_SET_VISUALIDHASH_OFFSET))(arg, nullptr);
		}

		IconType* get_iconType()
		{
			return ((IconType*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_GET_ICONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_iconType(IconType* arg)
		{
			((::System::Void(*)(IconType*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_SET_ICONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_GET_STACKCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayingNewOrRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_GET_ISPLAYINGNEWORREFRESH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayingRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_GET_ISPLAYINGREMOVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayingAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_GET_ISPLAYINGANIMATION_OFFSET))(nullptr);
		}

		::System::Void Attach(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(Il2CppObject* arg, ::System::UInt32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetUI(IconType* arg)
		{
			((::System::Void(*)(IconType*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void Detach(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_DETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Detach(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_DETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Detach(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_DETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayRemoveAnimation(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_PLAYREMOVEANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_REFRESHCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void BeginBlink()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_BEGINBLINK_OFFSET))(nullptr);
		}

		::System::Void PlayAttachAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_PLAYATTACHANIMATION_OFFSET))(nullptr);
		}

		::System::Void PlayAnimation(AnimationEnableFlag* arg)
		{
			((::System::Void(*)(AnimationEnableFlag*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		::System::String* ToClipName(AnimationEnableFlag* arg)
		{
			return ((::System::String*(*)(AnimationEnableFlag*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_TOCLIPNAME_OFFSET))(arg, nullptr);
		}

		::System::Void StopAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_STOPANIMATION_OFFSET))(nullptr);
		}

		::System::Void AnimationEndOnceCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_ANIMATIONENDONCECALLBACK_OFFSET))(nullptr);
		}

		::System::Void InitTween()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_INITTWEEN_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_RESET_OFFSET))(nullptr);
		}

		::System::Void EnableAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_ENABLEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void EnableAnimation(AnimationEnableFlag* arg)
		{
			((::System::Void(*)(AnimationEnableFlag*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_ENABLEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Detach_b__51_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT__DETACH_B__51_0_OFFSET))(nullptr);
		}

		::System::Void _Detach_b__52_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT__DETACH_B__52_0_OFFSET))(nullptr);
		}

		::System::Void _Detach_b__53_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONCONTENT__DETACH_B__53_0_OFFSET))(nullptr);
		}

	};

