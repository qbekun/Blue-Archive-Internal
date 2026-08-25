#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UI_ILAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ILAYOUTELEMENT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ILAYOUTELEMENT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ILAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ILAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ILAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ILAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ILAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ILAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ILayoutElement_TypeDefinitionIndex = 34809;

	class ILayoutElement : public Il2CppObject
	{
	public:
		::System::Void CalculateLayoutInputHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Single get_minWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTELEMENT_GET_MINWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_minHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTELEMENT_GET_MINHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_preferredHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_preferredWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(nullptr);
		}

		::System::Int32 get_layoutPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET))(nullptr);
		}

		::System::Single get_flexibleHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_flexibleWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET))(nullptr);
		}

	};
}

