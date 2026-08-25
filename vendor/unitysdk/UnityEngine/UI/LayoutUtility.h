#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ILayoutElement&; }

#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0xA4658C0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0xA4658D0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0xA468E10)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINWIDTH_OFFSET UNITYSDK_OFFSET(0xA46BAE0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0xA46BE00)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0xA46C120)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINHEIGHT_OFFSET UNITYSDK_OFFSET(0xA46B9D0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA46BBF0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA46C010)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET UNITYSDK_OFFSET(0xA46C230)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET UNITYSDK_OFFSET(0xA46C250)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutUtility_TypeDefinitionIndex = 34820;

	class LayoutUtility : public Il2CppObject
	{
	public:
		::System::Single GetMinSize(::UnityEngine::RectTransform* arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETMINSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetPreferredSize(::UnityEngine::RectTransform* arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetFlexibleSize(::UnityEngine::RectTransform* arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetMinWidth(::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETMINWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single GetPreferredWidth(::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single GetFlexibleWidth(::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single GetMinHeight(::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETMINHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single GetPreferredHeight(::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single GetFlexibleHeight(::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single GetLayoutProperty(::UnityEngine::RectTransform* arg, Il2CppObject* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetLayoutProperty(::UnityEngine::RectTransform* arg, Il2CppObject* arg, ::System::Single arg, ::UnityEngine::UI::ILayoutElement&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::RectTransform*, Il2CppObject*, ::System::Single, ::UnityEngine::UI::ILayoutElement&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

