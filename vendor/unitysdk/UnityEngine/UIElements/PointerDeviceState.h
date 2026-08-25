#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class ContextType; }

#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_REMOVEPANELDATA_OFFSET UNITYSDK_OFFSET(0xA3E4F00)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_SAVEPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0xA3E5260)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_PRESSBUTTON_OFFSET UNITYSDK_OFFSET(0xA3E3050)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEBUTTON_OFFSET UNITYSDK_OFFSET(0xA3E3340)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEALLBUTTONS_OFFSET UNITYSDK_OFFSET(0xA3E3E00)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0xA3DE540)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPANEL_OFFSET UNITYSDK_OFFSET(0xA3E5310)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASFLAGFAST_OFFSET UNITYSDK_OFFSET(0xA3E53A0)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASLOCATIONFLAG_OFFSET UNITYSDK_OFFSET(0xA3E53B0)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0xA3E5450)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASADDITIONALPRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0xA3E54E0)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_SETPLAYERPANELWITHSOFTPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0xA3E5580)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPLAYERPANELWITHSOFTPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0xA3E5650)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3E56E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDeviceState_TypeDefinitionIndex = 30524;

	class PointerDeviceState : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_PlayerPointerLocations; // 0x0
		::Il2CppArray<::System::Object*>* s_PressedButtons; // 0x8
		::Il2CppArray<::System::Object*>* s_PlayerPanelWithSoftPointerCapture; // 0x10

		::System::Void RemovePanelData(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_REMOVEPANELDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SavePointerPosition(::System::Int32 arg, ::UnityEngine::Vector2* arg, ::UnityEngine::UIElements::IPanel* arg, ::UnityEngine::UIElements::ContextType* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2*, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_SAVEPOINTERPOSITION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void PressButton(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_PRESSBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseButton(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseAllButtons(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEALLBUTTONS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetPointerPosition(::System::Int32 arg, ::UnityEngine::UIElements::ContextType* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPOINTERPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::IPanel* GetPanel(::System::Int32 arg, ::UnityEngine::UIElements::ContextType* arg)
		{
			return (return (::UnityEngine::UIElements::IPanel*(*)(::System::Int32, ::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPANEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasFlagFast(LocationFlag* arg, LocationFlag* arg)
		{
			return (return (::System::Boolean(*)(LocationFlag*, LocationFlag*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASFLAGFAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasLocationFlag(::System::Int32 arg, ::UnityEngine::UIElements::ContextType* arg, LocationFlag* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::UIElements::ContextType*, LocationFlag*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASLOCATIONFLAG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetPressedButtons(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPRESSEDBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasAdditionalPressedButtons(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASADDITIONALPRESSEDBUTTONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPlayerPanelWithSoftPointerCapture(::System::Int32 arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_SETPLAYERPANELWITHSOFTPOINTERCAPTURE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::IPanel* GetPlayerPanelWithSoftPointerCapture(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::IPanel*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPLAYERPANELWITHSOFTPOINTERCAPTURE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

