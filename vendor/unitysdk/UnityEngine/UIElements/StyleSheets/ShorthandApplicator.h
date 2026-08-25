#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class StylePropertyReader; }
namespace UnityEngine::UIElements { class ComputedStyle&; }
namespace UnityEngine::UIElements { class Length&; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYBORDERCOLOR_OFFSET UNITYSDK_OFFSET(0xA368470)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYBORDERRADIUS_OFFSET UNITYSDK_OFFSET(0xA368720)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYBORDERWIDTH_OFFSET UNITYSDK_OFFSET(0xA368940)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYFLEX_OFFSET UNITYSDK_OFFSET(0xA368BB0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYMARGIN_OFFSET UNITYSDK_OFFSET(0xA369060)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYPADDING_OFFSET UNITYSDK_OFFSET(0xA369290)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYTRANSITION_OFFSET UNITYSDK_OFFSET(0xA3693A0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYUNITYTEXTOUTLINE_OFFSET UNITYSDK_OFFSET(0xA369E30)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEFLEXSHORTHAND_OFFSET UNITYSDK_OFFSET(0xA368C80)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEBORDERRADIUS_OFFSET UNITYSDK_OFFSET(0xA368820)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEBOXAREA_OFFSET UNITYSDK_OFFSET(0xA369160)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEBOXAREA_OFFSET UNITYSDK_OFFSET(0xA368AE0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEBOXAREA_OFFSET UNITYSDK_OFFSET(0xA368560)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILETEXTOUTLINE_OFFSET UNITYSDK_OFFSET(0xA369EE0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILETRANSITION_OFFSET UNITYSDK_OFFSET(0xA3694F0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA36A540)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int ShorthandApplicator_TypeDefinitionIndex = 30795;

	class ShorthandApplicator : public Il2CppObject
	{
	public:
		Il2CppObject* s_TransitionDelayList; // 0x0
		Il2CppObject* s_TransitionDurationList; // 0x8
		Il2CppObject* s_TransitionPropertyList; // 0x10
		Il2CppObject* s_TransitionTimingFunctionList; // 0x18

		::System::Void ApplyBorderColor(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYBORDERCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyBorderRadius(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYBORDERRADIUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyBorderWidth(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYBORDERWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyFlex(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYFLEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyMargin(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYMARGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyPadding(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYPADDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyTransition(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYTRANSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyUnityTextOutline(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_APPLYUNITYTEXTOUTLINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompileFlexShorthand(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, float&* arg, float&* arg, ::UnityEngine::UIElements::Length&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, float&*, float&*, ::UnityEngine::UIElements::Length&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEFLEXSHORTHAND_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CompileBorderRadius(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::Length&* arg, ::UnityEngine::UIElements::Length&* arg, ::UnityEngine::UIElements::Length&* arg, ::UnityEngine::UIElements::Length&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::Length&*, ::UnityEngine::UIElements::Length&*, ::UnityEngine::UIElements::Length&*, ::UnityEngine::UIElements::Length&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEBORDERRADIUS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CompileBoxArea(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::Length&* arg, ::UnityEngine::UIElements::Length&* arg, ::UnityEngine::UIElements::Length&* arg, ::UnityEngine::UIElements::Length&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::Length&*, ::UnityEngine::UIElements::Length&*, ::UnityEngine::UIElements::Length&*, ::UnityEngine::UIElements::Length&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEBOXAREA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CompileBoxArea(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, float&* arg, float&* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, float&*, float&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEBOXAREA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CompileBoxArea(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::Color&* arg, ::UnityEngine::Color&* arg, ::UnityEngine::Color&* arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::Color&*, ::UnityEngine::Color&*, ::UnityEngine::Color&*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILEBOXAREA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CompileTextOutline(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::Color&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::Color&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILETEXTOUTLINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CompileTransition(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_COMPILETRANSITION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SHORTHANDAPPLICATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

