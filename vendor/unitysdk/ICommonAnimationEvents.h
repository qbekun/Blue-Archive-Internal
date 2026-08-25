#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class ControlFxInstanceInfoBase;
class InstantiateFxInfoBase;

#define ICOMMONANIMATIONEVENTS_ANIEVT_DISABLEDITHERLINESAFTERSEC_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_DISABLECHILDRENDERER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_ENABLEDITHERLINES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_DISABLESHADOWS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_ENABLECHILDRENDERER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_INSTANTIATEFX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_DISABLEDITHERLINES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_ENABLESHADOWSAFTERSEC_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_ENABLESHADOWS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_CONTROLFXWITHINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONANIMATIONEVENTS_ANIEVT_INSTANTIATEFXWITHINFO_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ICommonAnimationEvents_TypeDefinitionIndex = 3574;

	class ICommonAnimationEvents : public Il2CppObject
	{
	public:
		::System::Void AniEvt_DisableDitherLinesAfterSec(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_DISABLEDITHERLINESAFTERSEC_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_DisableChildRenderer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_DISABLECHILDRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_EnableDitherLines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_ENABLEDITHERLINES_OFFSET))(nullptr);
		}

		::System::Void AniEvt_DisableShadows()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_DISABLESHADOWS_OFFSET))(nullptr);
		}

		::System::Void AniEvt_EnableChildRenderer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_ENABLECHILDRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_InstantiateFx(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_INSTANTIATEFX_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_DisableDitherLines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_DISABLEDITHERLINES_OFFSET))(nullptr);
		}

		::System::Void AniEvt_EnableShadowsAfterSec(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_ENABLESHADOWSAFTERSEC_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_EnableShadows()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_ENABLESHADOWS_OFFSET))(nullptr);
		}

		::System::Void AniEvt_ControlFxWithInfo(ControlFxInstanceInfoBase* arg)
		{
			((::System::Void(*)(ControlFxInstanceInfoBase*, ::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_CONTROLFXWITHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_InstantiateFxWithInfo(InstantiateFxInfoBase* arg)
		{
			((::System::Void(*)(InstantiateFxInfoBase*, ::PVOID))((::PBYTE)hIl2Cpp + ICOMMONANIMATIONEVENTS_ANIEVT_INSTANTIATEFXWITHINFO_OFFSET))(arg, nullptr);
		}

	};

