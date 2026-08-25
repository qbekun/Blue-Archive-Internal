#pragma once
#include "unitysdk.h"

class ControlFxInstanceInfoBase;
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class GameObject; }
class InstantiateFxInfoBase;

#define ANIMATIONEVENTRECEIVER_EXECUTEQUEUEDANIMATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x20AF9B0)
#define ANIMATIONEVENTRECEIVER_ANIEVT_CONTROLFXWITHINFO_OFFSET UNITYSDK_OFFSET(0x20AFB40)
#define ANIMATIONEVENTRECEIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20AFBC0)
#define ANIMATIONEVENTRECEIVER_ANIEVT_DISABLEDITHERLINESAFTERSEC_OFFSET UNITYSDK_OFFSET(0x20AFBE0)
#define ANIMATIONEVENTRECEIVER_ANIEVT_ENABLESHADOWS_OFFSET UNITYSDK_OFFSET(0x20AFAE0)
#define ANIMATIONEVENTRECEIVER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x20AFD40)
#define ANIMATIONEVENTRECEIVER_REFRESHCACHEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x20AFDF0)
#define ANIMATIONEVENTRECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AFE40)
#define ANIMATIONEVENTRECEIVER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x20AFEC0)
#define ANIMATIONEVENTRECEIVER_GET_CACHEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x20AFF70)
#define ANIMATIONEVENTRECEIVER_ANIEVT_DISABLECHILDRENDERER_OFFSET UNITYSDK_OFFSET(0x20AFF80)
#define ANIMATIONEVENTRECEIVER_SET_CACHEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x20B0080)
#define ANIMATIONEVENTRECEIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B0090)
#define ANIMATIONEVENTRECEIVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20B00C0)
#define ANIMATIONEVENTRECEIVER_ANIEVT_DISABLESHADOWS_OFFSET UNITYSDK_OFFSET(0x20B02B0)
#define ANIMATIONEVENTRECEIVER_ANIEVT_INSTANTIATEFX_OFFSET UNITYSDK_OFFSET(0x20B0300)
#define ANIMATIONEVENTRECEIVER_ANIEVT_INSTANTIATEFXWITHINFO_OFFSET UNITYSDK_OFFSET(0x20B06B0)
#define ANIMATIONEVENTRECEIVER_ANIEVT_ENABLECHILDRENDERER_OFFSET UNITYSDK_OFFSET(0x20B0800)
#define ANIMATIONEVENTRECEIVER_ENABLEDIRECTCHILDRENDERER_OFFSET UNITYSDK_OFFSET(0x20AFF90)
#define ANIMATIONEVENTRECEIVER_CODELAYACTION_OFFSET UNITYSDK_OFFSET(0x20AFCC0)
#define ANIMATIONEVENTRECEIVER_ANIEVT_ENABLEDITHERLINES_OFFSET UNITYSDK_OFFSET(0x20B0830)
#define ANIMATIONEVENTRECEIVER_ANIEVT_ENABLESHADOWSAFTERSEC_OFFSET UNITYSDK_OFFSET(0x20B08A0)
#define ANIMATIONEVENTRECEIVER_ANIEVT_DISABLEDITHERLINES_OFFSET UNITYSDK_OFFSET(0x20AFA70)

	inline static constexpr unsigned int AnimationEventReceiver_TypeDefinitionIndex = 3576;

	class AnimationEventReceiver : public Il2CppObject
	{
	public:
		::System::String* DitherKey; // 0x0
		::Il2CppArray<::System::Object*>* cachedRenderers; // 0x18
		::System::Boolean queueDisableDither; // 0x20
		::System::Boolean queueEnableShadow; // 0x21
		Il2CppObject* ComplexFxInstanceList; // 0x28

		::System::Void ExecuteQueuedAnimationEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_EXECUTEQUEUEDANIMATIONEVENTS_OFFSET))(nullptr);
		}

		::System::Void AniEvt_ControlFxWithInfo(ControlFxInstanceInfoBase* arg)
		{
			((::System::Void(*)(ControlFxInstanceInfoBase*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_CONTROLFXWITHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void AniEvt_DisableDitherLinesAfterSec(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_DISABLEDITHERLINESAFTERSEC_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_EnableShadows()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_ENABLESHADOWS_OFFSET))(nullptr);
		}

		::System::Void EnableKeyword(::UnityEngine::Renderer* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ENABLEKEYWORD_OFFSET))(arg, str, nullptr);
		}

		::System::Void RefreshCachedRenderers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_REFRESHCACHEDRENDERERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DisableKeyword(::UnityEngine::Renderer* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_DISABLEKEYWORD_OFFSET))(arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CachedRenderers()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_GET_CACHEDRENDERERS_OFFSET))(nullptr);
		}

		::System::Void AniEvt_DisableChildRenderer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_DISABLECHILDRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void set_CachedRenderers(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_SET_CACHEDRENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void AniEvt_DisableShadows()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_DISABLESHADOWS_OFFSET))(nullptr);
		}

		::System::Void AniEvt_InstantiateFx(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_INSTANTIATEFX_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_InstantiateFxWithInfo(InstantiateFxInfoBase* arg)
		{
			((::System::Void(*)(InstantiateFxInfoBase*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_INSTANTIATEFXWITHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_EnableChildRenderer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_ENABLECHILDRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void EnableDirectChildRenderer(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ENABLEDIRECTCHILDRENDERER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoDelayAction(::System::Single arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_CODELAYACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AniEvt_EnableDitherLines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_ENABLEDITHERLINES_OFFSET))(nullptr);
		}

		::System::Void AniEvt_EnableShadowsAfterSec(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_ENABLESHADOWSAFTERSEC_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_DisableDitherLines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVER_ANIEVT_DISABLEDITHERLINES_OFFSET))(nullptr);
		}

	};

