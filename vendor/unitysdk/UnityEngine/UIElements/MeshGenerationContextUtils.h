#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class MeshGenerationContext; }
namespace UnityEngine::UIElements { class ITextHandle; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_RECTANGLE_OFFSET UNITYSDK_OFFSET(0xA408910)
#define UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_TEXT_OFFSET UNITYSDK_OFFSET(0xA408A00)
#define UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_CONVERTBORDERRADIUSPERCENTTOPOINTS_OFFSET UNITYSDK_OFFSET(0xA408B40)
#define UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_GETVISUALELEMENTRADII_OFFSET UNITYSDK_OFFSET(0xA408BD0)
#define UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_ADJUSTBACKGROUNDSIZEFORBORDERS_OFFSET UNITYSDK_OFFSET(0xA408F10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MeshGenerationContextUtils_TypeDefinitionIndex = 30581;

	class MeshGenerationContextUtils : public Il2CppObject
	{
	public:
		::System::Void Rectangle(::UnityEngine::UIElements::MeshGenerationContext* arg, RectangleParams* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MeshGenerationContext*, RectangleParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_RECTANGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Text(::UnityEngine::UIElements::MeshGenerationContext* arg, TextParams* arg, ::UnityEngine::UIElements::ITextHandle* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MeshGenerationContext*, TextParams*, ::UnityEngine::UIElements::ITextHandle*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_TEXT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* ConvertBorderRadiusPercentToPoints(::UnityEngine::Vector2* arg, ::UnityEngine::UIElements::Length* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_CONVERTBORDERRADIUSPERCENTTOPOINTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetVisualElementRadii(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_GETVISUALELEMENTRADII_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AdjustBackgroundSizeForBorders(::UnityEngine::UIElements::VisualElement* arg, RectangleParams&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, RectangleParams&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHGENERATIONCONTEXTUTILS_ADJUSTBACKGROUNDSIZEFORBORDERS_OFFSET))(arg, arg, nullptr);
		}

	};
}

