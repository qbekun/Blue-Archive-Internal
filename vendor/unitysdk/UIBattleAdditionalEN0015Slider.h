#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
class UISlider;
class UIBattleAdditionalEN0015;
class BulletTypeSliderData;
namespace FlatData { class DamageAttribute; }

#define UIBATTLEADDITIONALEN0015SLIDER_GET_SLIDERVALUE_OFFSET UNITYSDK_OFFSET(0x25F6020)
#define UIBATTLEADDITIONALEN0015SLIDER__TICK_G__SETACTIVEGROUPSHANDLING|20_1_OFFSET UNITYSDK_OFFSET(0x25F6040)
#define UIBATTLEADDITIONALEN0015SLIDER__TICK_G__GETFILLAMOUNT|20_0_OFFSET UNITYSDK_OFFSET(0x25F6110)
#define UIBATTLEADDITIONALEN0015SLIDER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x25F6290)
#define UIBATTLEADDITIONALEN0015SLIDER_INIT_OFFSET UNITYSDK_OFFSET(0x25F5EC0)
#define UIBATTLEADDITIONALEN0015SLIDER_TICK_OFFSET UNITYSDK_OFFSET(0x25F4C70)
#define UIBATTLEADDITIONALEN0015SLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F6450)
#define UIBATTLEADDITIONALEN0015SLIDER__TICK_G__PLAYANIMATIONS|20_2_OFFSET UNITYSDK_OFFSET(0x25F6350)

	inline static constexpr unsigned int UIBattleAdditionalEN0015Slider_TypeDefinitionIndex = 6439;

	class UIBattleAdditionalEN0015Slider : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* animation; // 0x18
		::UnityEngine::AnimationClip* animClipResist; // 0x20
		::UnityEngine::AnimationClip* animClipReset; // 0x28
		::Il2CppArray<::System::Object*>* enableOnNormal; // 0x30
		::Il2CppArray<::System::Object*>* enableOnResist; // 0x38
		::Il2CppArray<::System::Object*>* enableOnWeak; // 0x40
		::Il2CppArray<::System::Object*>* enableOnLock; // 0x48
		::Il2CppArray<::System::Object*>* enableOnNotLock; // 0x50
		::Il2CppArray<::System::Object*>* enableOnWasWeakLv1; // 0x58
		::Il2CppArray<::System::Object*>* enableOnWasWeakLv2; // 0x60
		UISlider* slider; // 0x68
		::Il2CppArray<::System::Object*>* percentLabels; // 0x70
		UIBattleAdditionalEN0015* owner; // 0x78
		BulletTypeSliderData* data; // 0x80
		::FlatData::DamageAttribute* lastFrameResistance; // 0x88
		::UnityEngine::AnimationClip* lastAnimClip; // 0x90
		::System::Single sliderForceReduceSpeed; // 0x98

		::System::Single get_SliderValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015SLIDER_GET_SLIDERVALUE_OFFSET))(nullptr);
		}

		::System::Void _Tick_g__SetActiveGroupsHandling|20_1(<>c__DisplayClass20_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass20_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015SLIDER__TICK_G__SETACTIVEGROUPSHANDLING|20_1_OFFSET))(arg, nullptr);
		}

		::System::Single _Tick_g__GetFillAmount|20_0(<>c__DisplayClass20_0&* arg)
		{
			return ((::System::Single(*)(<>c__DisplayClass20_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015SLIDER__TICK_G__GETFILLAMOUNT|20_0_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAnim(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015SLIDER_PLAYANIM_OFFSET))(arg, nullptr);
		}

		::System::Void Init(UIBattleAdditionalEN0015* arg, BulletTypeSliderData* arg2)
		{
			((::System::Void(*)(UIBattleAdditionalEN0015*, BulletTypeSliderData*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015SLIDER_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Tick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015SLIDER_TICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015SLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Tick_g__PlayAnimations|20_2(<>c__DisplayClass20_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass20_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0015SLIDER__TICK_G__PLAYANIMATIONS|20_2_OFFSET))(arg, nullptr);
		}

	};

