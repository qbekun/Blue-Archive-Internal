#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUIElementsUtility; }

#define UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA382130)
#define UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_REGISTERUIELEMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA382780)
#define UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_TAKECAPTURE_OFFSET UNITYSDK_OFFSET(0xA382820)
#define UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0xA382A30)
#define UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_ENDCONTAINERGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA382C40)
#define UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0xA382E90)
#define UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_CLEANUPROOTS_OFFSET UNITYSDK_OFFSET(0xA3830F0)
#define UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_MAKECURRENTIMGUICONTAINERDIRTY_OFFSET UNITYSDK_OFFSET(0xA383300)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIEventRegistration_TypeDefinitionIndex = 30223;

	class UIEventRegistration : public Il2CppObject
	{
	public:
		Il2CppObject* s_Utilities; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterUIElementSystem(::UnityEngine::UIElements::IUIElementsUtility* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IUIElementsUtility*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_REGISTERUIELEMENTSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Void TakeCapture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_TAKECAPTURE_OFFSET))(nullptr);
		}

		::System::Void ReleaseCapture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_RELEASECAPTURE_OFFSET))(nullptr);
		}

		::System::Boolean EndContainerGUIFromException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_ENDCONTAINERGUIFROMEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ProcessEvent(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_PROCESSEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CleanupRoots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_CLEANUPROOTS_OFFSET))(nullptr);
		}

		::System::Void MakeCurrentIMGUIContainerDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIEVENTREGISTRATION_MAKECURRENTIMGUICONTAINERDIRTY_OFFSET))(nullptr);
		}

	};
}

