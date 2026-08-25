#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class CanvasUpdate; }

#define UNITYENGINE_UI_ICANVASELEMENT_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ICANVASELEMENT_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ICANVASELEMENT_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ICANVASELEMENT_REBUILD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ICanvasElement_TypeDefinitionIndex = 34746;

	class ICanvasElement : public Il2CppObject
	{
	public:
		::System::Void LayoutComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICANVASELEMENT_LAYOUTCOMPLETE_OFFSET))(nullptr);
		}

		::System::Boolean IsDestroyed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICANVASELEMENT_ISDESTROYED_OFFSET))(nullptr);
		}

		::System::Void GraphicUpdateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICANVASELEMENT_GRAPHICUPDATECOMPLETE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICANVASELEMENT_REBUILD_OFFSET))(arg, nullptr);
		}

	};
}

