#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class Background; }
namespace UnityEngine::UIElements { class FontDefinition; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UIElements { class TextShadow; }
namespace UnityEngine::UIElements { class Scale; }
namespace UnityEngine::UIElements { class Rotate; }
namespace UnityEngine::UIElements { class Translate; }
namespace UnityEngine::UIElements { class TransformOrigin; }

#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33CCC0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_GETORCREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33CDD0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33CEA0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33CF60)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33D020)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33D100)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33D200)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33D2E0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33D3A0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33D4A0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33D580)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33D680)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA33D780)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_CANCELALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0xA33D870)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_CANCELALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0xA33D9E0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_CANCELANIMATION_OFFSET UNITYSDK_OFFSET(0xA33DC90)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_UPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0xA33DD20)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_GETALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0xA33DDB0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_UPDATETRACKING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_CURRENTTIMEMS_OFFSET UNITYSDK_OFFSET(0xA33DF40)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA33DF50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StylePropertyAnimationSystem_TypeDefinitionIndex = 30207;

	class StylePropertyAnimationSystem : public Il2CppObject
	{
	public:
		::System::Int64 m_CurrentTimeMs; // 0x10
		ValuesFloat* m_Floats; // 0x18
		ValuesInt* m_Ints; // 0x20
		ValuesLength* m_Lengths; // 0x28
		ValuesColor* m_Colors; // 0x30
		ValuesBackground* m_Backgrounds; // 0x38
		ValuesFontDefinition* m_FontDefinitions; // 0x40
		ValuesFont* m_Fonts; // 0x48
		ValuesTextShadow* m_TextShadows; // 0x50
		ValuesScale* m_Scale; // 0x58
		ValuesRotate* m_Rotate; // 0x60
		ValuesTranslate* m_Translate; // 0x68
		ValuesTransformOrigin* m_TransformOrigin; // 0x70
		Il2CppObject* m_AllValues; // 0x78
		Il2CppObject* m_PropertyToValues; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrCreate(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_GETORCREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, Il2CppObject*, Il2CppObject*, ::System::Int32, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Length* arg, ::UnityEngine::UIElements::Length* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Length*, ::UnityEngine::UIElements::Length*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Background* arg, ::UnityEngine::UIElements::Background* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Background*, ::UnityEngine::UIElements::Background*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::FontDefinition* arg, ::UnityEngine::UIElements::FontDefinition* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::FontDefinition*, ::UnityEngine::UIElements::FontDefinition*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::Font* arg, ::UnityEngine::Font* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::Font*, ::UnityEngine::Font*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::TextShadow* arg, ::UnityEngine::UIElements::TextShadow* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::TextShadow*, ::UnityEngine::UIElements::TextShadow*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Scale* arg, ::UnityEngine::UIElements::Scale* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Scale*, ::UnityEngine::UIElements::Scale*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Rotate* arg, ::UnityEngine::UIElements::Rotate* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Rotate*, ::UnityEngine::UIElements::Rotate*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Translate* arg, ::UnityEngine::UIElements::Translate* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Translate*, ::UnityEngine::UIElements::Translate*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::TransformOrigin* arg, ::UnityEngine::UIElements::TransformOrigin* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::TransformOrigin*, ::UnityEngine::UIElements::TransformOrigin*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CancelAllAnimations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_CANCELALLANIMATIONS_OFFSET))(nullptr);
		}

		::System::Void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_CANCELALLANIMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void CancelAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_CANCELANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_UPDATEANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetAllAnimations(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_GETALLANIMATIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateTracking(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_UPDATETRACKING_OFFSET))(arg, nullptr);
		}

		::System::Int64 CurrentTimeMs()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_CURRENTTIMEMS_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTYANIMATIONSYSTEM_UPDATE_OFFSET))(nullptr);
		}

	};
}

