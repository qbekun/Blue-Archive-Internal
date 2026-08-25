#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class PointerDispatchState; }
namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class IPointerEvent; }

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETSTATEFOR_OFFSET UNITYSDK_OFFSET(0xA324530)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_HASPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0xA31FB60)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_CAPTUREPOINTER_OFFSET UNITYSDK_OFFSET(0xA310070)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0xA310430)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETCAPTURINGELEMENT_OFFSET UNITYSDK_OFFSET(0xA324810)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0xA3248E0)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0xA324A00)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0xA30F410)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0xA324B20)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PROCESSPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0xA3100B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureHelper_TypeDefinitionIndex = 30143;

	class PointerCaptureHelper : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::PointerDispatchState* GetStateFor(::UnityEngine::UIElements::IEventHandler* arg)
		{
			return (return (::UnityEngine::UIElements::PointerDispatchState*(*)(::UnityEngine::UIElements::IEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETSTATEFOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasPointerCapture(::UnityEngine::UIElements::IEventHandler* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IEventHandler*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_HASPOINTERCAPTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CapturePointer(::UnityEngine::UIElements::IEventHandler* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_CAPTUREPOINTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleasePointer(::UnityEngine::UIElements::IEventHandler* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::IEventHandler* GetCapturingElement(::UnityEngine::UIElements::IPanel* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::IEventHandler*(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_GETCAPTURINGELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleasePointer(::UnityEngine::UIElements::IPanel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_RELEASEPOINTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ActivateCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_ACTIVATECOMPATIBILITYMOUSEEVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreventCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PREVENTCOMPATIBILITYMOUSEEVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* arg, ::UnityEngine::UIElements::IPointerEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_SHOULDSENDCOMPATIBILITYMOUSEEVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessPointerCapture(::UnityEngine::UIElements::IPanel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREHELPER_PROCESSPOINTERCAPTURE_OFFSET))(arg, arg, nullptr);
		}

	};
}

