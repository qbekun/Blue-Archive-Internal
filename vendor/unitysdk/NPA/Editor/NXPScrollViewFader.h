#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Vector2; }

#define NPA_EDITOR_NXPSCROLLVIEWFADER_INIT_OFFSET UNITYSDK_OFFSET(0x9D93160)
#define NPA_EDITOR_NXPSCROLLVIEWFADER_START_OFFSET UNITYSDK_OFFSET(0x9D931A0)
#define NPA_EDITOR_NXPSCROLLVIEWFADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9D93220)
#define NPA_EDITOR_NXPSCROLLVIEWFADER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9D93300)
#define NPA_EDITOR_NXPSCROLLVIEWFADER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x9D933E0)
#define NPA_EDITOR_NXPSCROLLVIEWFADER_STARTFADEACTION_OFFSET UNITYSDK_OFFSET(0x9D93500)
#define NPA_EDITOR_NXPSCROLLVIEWFADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D935C0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPScrollViewFader_TypeDefinitionIndex = 26310;

	class NXPScrollViewFader : public Il2CppObject
	{
	public:
		::System::Single FADE_DELAY; // 0x0
		::System::Single FADE_IN_DURATION; // 0x0
		::System::Single FADE_OUT_DURATION; // 0x0
		::UnityEngine::UI::ScrollRect* scrollRect; // 0x18
		::UnityEngine::CanvasGroup* canvasGroup; // 0x20
		::UnityEngine::Coroutine* fadeInCoroutine; // 0x28
		::UnityEngine::Coroutine* fadeOutCoroutine; // 0x30

		::System::Void Init(::UnityEngine::UI::ScrollRect* arg, ::UnityEngine::CanvasGroup* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ScrollRect*, ::UnityEngine::CanvasGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWFADER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWFADER_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWFADER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWFADER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnScroll(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWFADER_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* StartFadeAction(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWFADER_STARTFADEACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSCROLLVIEWFADER_.CTOR_OFFSET))(nullptr);
		}

	};
}

