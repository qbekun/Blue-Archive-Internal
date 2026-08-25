#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Component; }
namespace UnityEngine::UI { class RectMask2D; }
namespace UnityEngine::UI { class IClippable; }

#define UNITYENGINE_UI_MASKUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA46F390)
#define UNITYENGINE_UI_MASKUTILITIES_FINDROOTSORTOVERRIDECANVAS_OFFSET UNITYSDK_OFFSET(0xA46CFE0)
#define UNITYENGINE_UI_MASKUTILITIES_NOTIFY2DMASKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA46F3A0)
#define UNITYENGINE_UI_MASKUTILITIES_GETSTENCILDEPTH_OFFSET UNITYSDK_OFFSET(0xA46D1A0)
#define UNITYENGINE_UI_MASKUTILITIES_NOTIFYSTENCILSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA46D9D0)
#define UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKSFORCLIP_OFFSET UNITYSDK_OFFSET(0xA46F620)
#define UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKFORCLIPPABLE_OFFSET UNITYSDK_OFFSET(0xA46EBD0)
#define UNITYENGINE_UI_MASKUTILITIES_ISDESCENDANTORSELF_OFFSET UNITYSDK_OFFSET(0xA46F9F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskUtilities_TypeDefinitionIndex = 34825;

	class MaskUtilities : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_FINDROOTSORTOVERRIDECANVAS_OFFSET))(arg, nullptr);
		}

		::System::Void Notify2DMaskStateChanged(::UnityEngine::Component* arg)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_NOTIFY2DMASKSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetStencilDepth(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETSTENCILDEPTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NotifyStencilStateChanged(::UnityEngine::Component* arg)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_NOTIFYSTENCILSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void GetRectMasksForClip(::UnityEngine::UI::RectMask2D* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::RectMask2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKSFORCLIP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UI::RectMask2D* GetRectMaskForClippable(::UnityEngine::UI::IClippable* arg)
		{
			return (return (::UnityEngine::UI::RectMask2D*(*)(::UnityEngine::UI::IClippable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKFORCLIPPABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDescendantOrSelf(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_ISDESCENDANTORSELF_OFFSET))(arg, arg, nullptr);
		}

	};
}

