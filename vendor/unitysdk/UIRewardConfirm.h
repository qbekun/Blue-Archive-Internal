#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Animation; }
class MXButton;
namespace UnityEngine { class GameObject; }
class UIRewardConfirmNewSSR;
class UIRewardConfirmResult;
namespace FlatData { class Rarity; }
namespace UnityEngine { class AnimationClip; }
namespace FlatData { class ParcelType; }
class UIGachaResult;

#define UIREWARDCONFIRM_SYMBOLTSSDIRECTING_OFFSET UNITYSDK_OFFSET(0x27AE780)
#define UIREWARDCONFIRM_CO_PROCESS_OFFSET UNITYSDK_OFFSET(0x27AE820)
#define UIREWARDCONFIRM_SETBACKGROUND_OFFSET UNITYSDK_OFFSET(0x27AE8C0)
#define UIREWARDCONFIRM_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x27AE9B0)
#define UIREWARDCONFIRM_SETANIMATIONSSR_OFFSET UNITYSDK_OFFSET(0x27AEA40)
#define UIREWARDCONFIRM_PLAYAUDIOCLIPSBYDIALOG_OFFSET UNITYSDK_OFFSET(0x27AEB90)
#define UIREWARDCONFIRM_ONBACK_OFFSET UNITYSDK_OFFSET(0x27AEE20)
#define UIREWARDCONFIRM_ONSKIPALL_OFFSET UNITYSDK_OFFSET(0x27AEA00)
#define UIREWARDCONFIRM_RESULTANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0x27AF0C0)
#define UIREWARDCONFIRM_SYMBOLDIRECTING_OFFSET UNITYSDK_OFFSET(0x27AF160)
#define UIREWARDCONFIRM_INITREWARDCONFIRMANIMATION_OFFSET UNITYSDK_OFFSET(0x27AF200)
#define UIREWARDCONFIRM_.CTOR_OFFSET UNITYSDK_OFFSET(0x27AF840)
#define UIREWARDCONFIRM_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27AF990)
#define UIREWARDCONFIRM_SETREWARDDATA_OFFSET UNITYSDK_OFFSET(0x27AF9C0)
#define UIREWARDCONFIRM_RESETDIRECTING_OFFSET UNITYSDK_OFFSET(0x27B04C0)
#define UIREWARDCONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0x27B0590)
#define UIREWARDCONFIRM__CO_PROCESS_B__37_0_OFFSET UNITYSDK_OFFSET(0x27B0940)
#define UIREWARDCONFIRM_CHARANIMATIONPLAYSSR_OFFSET UNITYSDK_OFFSET(0x27B0970)
#define UIREWARDCONFIRM_CONTEXTANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0x27B0A00)
#define UIREWARDCONFIRM_CHARACTERGACHAREWARDINIT_OFFSET UNITYSDK_OFFSET(0x27B0AA0)
#define UIREWARDCONFIRM_SETRARITYICON_OFFSET UNITYSDK_OFFSET(0x27AFE60)
#define UIREWARDCONFIRM_REWARDINIT_OFFSET UNITYSDK_OFFSET(0x27B0BA0)
#define UIREWARDCONFIRM__ONBACK_G__SHOULDCLOSEDIRECTLY|42_0_OFFSET UNITYSDK_OFFSET(0x27AEEB0)
#define UIREWARDCONFIRM_ONNEXT_OFFSET UNITYSDK_OFFSET(0x27B0C80)

	inline static constexpr unsigned int UIRewardConfirm_TypeDefinitionIndex = 7519;

	class UIRewardConfirm : public Il2CppObject
	{
	public:
		UITexture* gradeIcon; // 0xD8
		UITexture* gradeBackGround; // 0xE0
		::UnityEngine::Animation* animationRewardConfirm; // 0xE8
		MXButton* touchButton; // 0xF0
		MXButton* skipButton; // 0xF8
		::UnityEngine::GameObject* set3Result; // 0x100
		UIRewardConfirmNewSSR* uiRewardConfirmNewSSR; // 0x108
		UIRewardConfirmResult* uiRewardConfirmResult; // 0x110
		::UnityEngine::GameObject* cover; // 0x118
		::System::Int32 rerityAnimClipAddCount; // 0x120
		::System::Int32 confirmAnimClipAddCount; // 0x124
		::System::Int32 confirmCharSSRAnimClipAddCount; // 0x128
		::System::Boolean next; // 0x12C
		::System::Boolean allskip; // 0x12D
		::System::Boolean allSkipRecode; // 0x12E
		::FlatData::Rarity* currentRaity; // 0x130
		Il2CppObject* rerityAnimClips; // 0x138
		Il2CppObject* confirmAnimClips; // 0x140
		Il2CppObject* charSSR_AnimClips; // 0x148
		::UnityEngine::AnimationClip* confirmCharSSR_AnimClip; // 0x150
		Il2CppObject* rewardConfirmDataList; // 0x158
		::UnityEngine::AnimationClip* charAnimClipSSR; // 0x160

		::System::Collections::IEnumerator* SymbolTssDirecting(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_SYMBOLTSSDIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_Process(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_CO_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void SetBackGround(::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_SETBACKGROUND_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetAnimationSSR(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_SETANIMATIONSSR_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAudioClipsByDialog(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_PLAYAUDIOCLIPSBYDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnSkipAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_ONSKIPALL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ResultAnimationPlay(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_RESULTANIMATIONPLAY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SymbolDirecting(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_SYMBOLDIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Void InitRewardConfirmAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_INITREWARDCONFIRMANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetRewardData(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_SETREWARDDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ResetDirecting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_RESETDIRECTING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _co_Process_b__37_0(UIGachaResult* arg)
		{
			((::System::Void(*)(UIGachaResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM__CO_PROCESS_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CharAnimationPlaySSR()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_CHARANIMATIONPLAYSSR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ContextAnimationPlay(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_CONTEXTANIMATIONPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void CharacterGachaRewardInit(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_CHARACTERGACHAREWARDINIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetRarityIcon(::FlatData::ParcelType* arg, ::FlatData::Rarity* arg2)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_SETRARITYICON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RewardInit(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_REWARDINIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnBack_g__ShouldCloseDirectly|42_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM__ONBACK_G__SHOULDCLOSEDIRECTLY|42_0_OFFSET))(nullptr);
		}

		::System::Void OnNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRM_ONNEXT_OFFSET))(nullptr);
		}

	};

