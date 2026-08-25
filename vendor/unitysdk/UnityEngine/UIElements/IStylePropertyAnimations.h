#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class Background; }
namespace UnityEngine::UIElements { class FontDefinition; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UIElements { class TextShadow; }
namespace UnityEngine::UIElements { class Scale; }
namespace UnityEngine::UIElements { class Translate; }
namespace UnityEngine::UIElements { class Rotate; }
namespace UnityEngine::UIElements { class TransformOrigin; }

#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_STARTENUM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_UPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_GETALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_CANCELANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_CANCELALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_GET_RUNNINGANIMATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_SET_RUNNINGANIMATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_GET_COMPLETEDANIMATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_SET_COMPLETEDANIMATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IStylePropertyAnimations_TypeDefinitionIndex = 30168;

	class IStylePropertyAnimations : public Il2CppObject
	{
	public:
		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Length* arg, ::UnityEngine::UIElements::Length* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Length*, ::UnityEngine::UIElements::Length*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_STARTENUM_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Background* arg, ::UnityEngine::UIElements::Background* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Background*, ::UnityEngine::UIElements::Background*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::FontDefinition* arg, ::UnityEngine::UIElements::FontDefinition* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::FontDefinition*, ::UnityEngine::UIElements::FontDefinition*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::Font* arg, ::UnityEngine::Font* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::Font*, ::UnityEngine::Font*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::TextShadow* arg, ::UnityEngine::UIElements::TextShadow* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::TextShadow*, ::UnityEngine::UIElements::TextShadow*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Scale* arg, ::UnityEngine::UIElements::Scale* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Scale*, ::UnityEngine::UIElements::Scale*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Translate* arg, ::UnityEngine::UIElements::Translate* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Translate*, ::UnityEngine::UIElements::Translate*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Rotate* arg, ::UnityEngine::UIElements::Rotate* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Rotate*, ::UnityEngine::UIElements::Rotate*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::TransformOrigin* arg, ::UnityEngine::UIElements::TransformOrigin* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::TransformOrigin*, ::UnityEngine::UIElements::TransformOrigin*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_START_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_UPDATEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void GetAllAnimations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_GETALLANIMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void CancelAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_CANCELANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void CancelAllAnimations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_CANCELALLANIMATIONS_OFFSET))(nullptr);
		}

		::System::Int32 get_runningAnimationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_GET_RUNNINGANIMATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_runningAnimationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_SET_RUNNINGANIMATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_completedAnimationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_GET_COMPLETEDANIMATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_completedAnimationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEPROPERTYANIMATIONS_SET_COMPLETEDANIMATIONCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

