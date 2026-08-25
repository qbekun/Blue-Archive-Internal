#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class StylePropertyReader; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class StyleCursor; }
namespace UnityEngine::UIElements { class StyleTextShadow; }
namespace UnityEngine::UIElements { class StyleTransformOrigin; }
namespace UnityEngine::UIElements { class StyleTranslate; }
namespace UnityEngine::UIElements { class StyleRotate; }
namespace UnityEngine::UIElements { class StyleScale; }
namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleRule; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class ComputedStyle&; }
namespace UnityEngine::UIElements { class StyleLength; }
namespace UnityEngine::UIElements { class StyleFloat; }
namespace UnityEngine::UIElements { class StyleColor; }
namespace UnityEngine::UIElements::StyleSheets { class StyleValue; }
namespace UnityEngine::UIElements { class StyleCursor&; }
namespace UnityEngine::UIElements { class StyleTextShadow&; }
namespace UnityEngine::UIElements { class StyleTransformOrigin&; }
namespace UnityEngine::UIElements { class StyleTranslate&; }
namespace UnityEngine::UIElements { class StyleRotate&; }
namespace UnityEngine::UIElements { class StyleScale&; }

#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_GET_VE_OFFSET UNITYSDK_OFFSET(0xA411CA0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SET_VE_OFFSET UNITYSDK_OFFSET(0xA411CB0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA411CC0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA411CF0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETINLINERULE_OFFSET UNITYSDK_OFFSET(0xA411E20)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_ISVALUESET_OFFSET UNITYSDK_OFFSET(0xA412BC0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_APPLYINLINESTYLES_OFFSET UNITYSDK_OFFSET(0xA411EE0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_CURSOR_OFFSET UNITYSDK_OFFSET(0xA412F40)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_TEXTSHADOW_OFFSET UNITYSDK_OFFSET(0xA413000)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_TRANSFORMORIGIN_OFFSET UNITYSDK_OFFSET(0xA413080)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_TRANSLATE_OFFSET UNITYSDK_OFFSET(0xA413110)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_TRANSLATE_OFFSET UNITYSDK_OFFSET(0xA4131B0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_ROTATE_OFFSET UNITYSDK_OFFSET(0xA413370)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA413410)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETSTYLEVALUE_OFFSET UNITYSDK_OFFSET(0xA4134B0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETSTYLEVALUE_OFFSET UNITYSDK_OFFSET(0xA413A50)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETSTYLEVALUE_OFFSET UNITYSDK_OFFSET(0xA413B80)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETSTYLEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETINLINETRANSLATE_OFFSET UNITYSDK_OFFSET(0xA413200)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_APPLYSTYLETRANSLATE_OFFSET UNITYSDK_OFFSET(0xA413CE0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_APPLYSTYLEVALUE_OFFSET UNITYSDK_OFFSET(0xA4136E0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_REMOVEINLINESTYLE_OFFSET UNITYSDK_OFFSET(0xA4135F0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_APPLYFROMCOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA413FA0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINECURSOR_OFFSET UNITYSDK_OFFSET(0xA412FC0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINETEXTSHADOW_OFFSET UNITYSDK_OFFSET(0xA413060)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINETRANSFORMORIGIN_OFFSET UNITYSDK_OFFSET(0xA4130F0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINETRANSLATE_OFFSET UNITYSDK_OFFSET(0xA413180)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINEROTATE_OFFSET UNITYSDK_OFFSET(0xA4133E0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINESCALE_OFFSET UNITYSDK_OFFSET(0xA413480)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0xA414250)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERBOTTOMCOLOR_OFFSET UNITYSDK_OFFSET(0xA4142A0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERBOTTOMLEFTRADIUS_OFFSET UNITYSDK_OFFSET(0xA4142F0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERBOTTOMRIGHTRADIUS_OFFSET UNITYSDK_OFFSET(0xA414340)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERBOTTOMWIDTH_OFFSET UNITYSDK_OFFSET(0xA414390)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERLEFTCOLOR_OFFSET UNITYSDK_OFFSET(0xA414410)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERLEFTWIDTH_OFFSET UNITYSDK_OFFSET(0xA414460)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERRIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0xA4144E0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERRIGHTWIDTH_OFFSET UNITYSDK_OFFSET(0xA414530)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERTOPCOLOR_OFFSET UNITYSDK_OFFSET(0xA4145B0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERTOPLEFTRADIUS_OFFSET UNITYSDK_OFFSET(0xA414600)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERTOPRIGHTRADIUS_OFFSET UNITYSDK_OFFSET(0xA414650)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERTOPWIDTH_OFFSET UNITYSDK_OFFSET(0xA4146A0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xA414720)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA4147B0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0xA414800)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_DISPLAY_OFFSET UNITYSDK_OFFSET(0xA4148E0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FLEXBASIS_OFFSET UNITYSDK_OFFSET(0xA414980)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FLEXDIRECTION_OFFSET UNITYSDK_OFFSET(0xA414A10)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FLEXGROW_OFFSET UNITYSDK_OFFSET(0xA414AB0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FLEXSHRINK_OFFSET UNITYSDK_OFFSET(0xA414B30)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xA414BB0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA414C00)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_LEFT_OFFSET UNITYSDK_OFFSET(0xA414C90)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0xA414D20)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MARGINLEFT_OFFSET UNITYSDK_OFFSET(0xA414DB0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MARGINRIGHT_OFFSET UNITYSDK_OFFSET(0xA414E40)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MARGINTOP_OFFSET UNITYSDK_OFFSET(0xA414ED0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0xA414F60)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0xA414FF0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_OPACITY_OFFSET UNITYSDK_OFFSET(0xA415080)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_PADDINGBOTTOM_OFFSET UNITYSDK_OFFSET(0xA4150D0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_PADDINGLEFT_OFFSET UNITYSDK_OFFSET(0xA415160)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_PADDINGRIGHT_OFFSET UNITYSDK_OFFSET(0xA4151F0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_PADDINGTOP_OFFSET UNITYSDK_OFFSET(0xA415280)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_PADDINGTOP_OFFSET UNITYSDK_OFFSET(0xA415330)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA4153C0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA415460)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_TOP_OFFSET UNITYSDK_OFFSET(0xA4154F0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_UNITYBACKGROUNDIMAGETINTCOLOR_OFFSET UNITYSDK_OFFSET(0xA415580)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0xA4155D0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA415640)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA4156F0)
#define UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA415780)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int InlineStyleAccess_TypeDefinitionIndex = 30604;

	class InlineStyleAccess : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheets::StylePropertyReader* s_StylePropertyReader; // 0x0
		Il2CppObject* m_ValuesManaged; // 0x18
		::UnityEngine::UIElements::VisualElement* _ve_k__BackingField; // 0x20
		::System::Boolean m_HasInlineCursor; // 0x28
		::UnityEngine::UIElements::StyleCursor* m_InlineCursor; // 0x30
		::System::Boolean m_HasInlineTextShadow; // 0x50
		::UnityEngine::UIElements::StyleTextShadow* m_InlineTextShadow; // 0x54
		::System::Boolean m_HasInlineTransformOrigin; // 0x74
		::UnityEngine::UIElements::StyleTransformOrigin* m_InlineTransformOrigin; // 0x78
		::System::Boolean m_HasInlineTranslate; // 0x90
		::UnityEngine::UIElements::StyleTranslate* m_InlineTranslateOperation; // 0x94
		::System::Boolean m_HasInlineRotate; // 0xB0
		::UnityEngine::UIElements::StyleRotate* m_InlineRotateOperation; // 0xB4
		::System::Boolean m_HasInlineScale; // 0xD0
		::UnityEngine::UIElements::StyleScale* m_InlineScale; // 0xD4
		InlineRule* m_InlineRule; // 0xE8

		::UnityEngine::UIElements::VisualElement* get_ve()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_GET_VE_OFFSET))(nullptr);
		}

		::System::Void set_ve(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SET_VE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void SetInlineRule(::UnityEngine::UIElements::StyleSheet* arg, ::UnityEngine::UIElements::StyleRule* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleRule*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETINLINERULE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValueSet(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_ISVALUESET_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyInlineStyles(::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_APPLYINLINESTYLES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleCursor* UnityEngine.UIElements.IStyle.get_cursor()
		{
			return (return (::UnityEngine::UIElements::StyleCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_CURSOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleTextShadow* UnityEngine.UIElements.IStyle.get_textShadow()
		{
			return (return (::UnityEngine::UIElements::StyleTextShadow*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_TEXTSHADOW_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleTransformOrigin* UnityEngine.UIElements.IStyle.get_transformOrigin()
		{
			return (return (::UnityEngine::UIElements::StyleTransformOrigin*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_TRANSFORMORIGIN_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleTranslate* UnityEngine.UIElements.IStyle.get_translate()
		{
			return (return (::UnityEngine::UIElements::StyleTranslate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_TRANSLATE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_translate(::UnityEngine::UIElements::StyleTranslate* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleTranslate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_TRANSLATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleRotate* UnityEngine.UIElements.IStyle.get_rotate()
		{
			return (return (::UnityEngine::UIElements::StyleRotate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_ROTATE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleScale* UnityEngine.UIElements.IStyle.get_scale()
		{
			return (return (::UnityEngine::UIElements::StyleScale*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_SCALE_OFFSET))(nullptr);
		}

		::System::Boolean SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::StyleLength* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETSTYLEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::StyleFloat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETSTYLEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::StyleColor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETSTYLEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETSTYLEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetInlineTranslate(::UnityEngine::UIElements::StyleTranslate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTranslate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_SETINLINETRANSLATE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStyleTranslate(::UnityEngine::UIElements::StyleTranslate* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleTranslate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_APPLYSTYLETRANSLATE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StyleValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_APPLYSTYLEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemoveInlineStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_REMOVEINLINESTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_APPLYFROMCOMPUTEDSTYLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInlineCursor(::UnityEngine::UIElements::StyleCursor&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleCursor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINECURSOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetInlineTextShadow(::UnityEngine::UIElements::StyleTextShadow&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTextShadow&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINETEXTSHADOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetInlineTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTransformOrigin&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINETRANSFORMORIGIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetInlineTranslate(::UnityEngine::UIElements::StyleTranslate&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTranslate&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINETRANSLATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetInlineRotate(::UnityEngine::UIElements::StyleRotate&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleRotate&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINEROTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetInlineScale(::UnityEngine::UIElements::StyleScale&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleScale&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_TRYGETINLINESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_backgroundColor(::UnityEngine::UIElements::StyleColor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderBottomColor(::UnityEngine::UIElements::StyleColor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERBOTTOMCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERBOTTOMLEFTRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderBottomRightRadius(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERBOTTOMRIGHTRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderBottomWidth(::UnityEngine::UIElements::StyleFloat* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERBOTTOMWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderLeftColor(::UnityEngine::UIElements::StyleColor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERLEFTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderLeftWidth(::UnityEngine::UIElements::StyleFloat* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERLEFTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderRightColor(::UnityEngine::UIElements::StyleColor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERRIGHTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderRightWidth(::UnityEngine::UIElements::StyleFloat* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERRIGHTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderTopColor(::UnityEngine::UIElements::StyleColor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERTOPCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderTopLeftRadius(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERTOPLEFTRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderTopRightRadius(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERTOPRIGHTRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_borderTopWidth(::UnityEngine::UIElements::StyleFloat* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BORDERTOPWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_bottom(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_BOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_color(::UnityEngine::UIElements::StyleColor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_COLOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* UnityEngine.UIElements.IStyle.get_display()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_DISPLAY_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_display(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_DISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_flexBasis(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FLEXBASIS_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_flexDirection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FLEXDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_flexGrow(::UnityEngine::UIElements::StyleFloat* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FLEXGROW_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_flexShrink(::UnityEngine::UIElements::StyleFloat* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FLEXSHRINK_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_fontSize(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_FONTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_height(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_left(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_marginBottom(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MARGINBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_marginLeft(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MARGINLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_marginRight(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MARGINRIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_marginTop(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MARGINTOP_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_maxHeight(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MAXHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_minWidth(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_MINWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_opacity(::UnityEngine::UIElements::StyleFloat* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_OPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_paddingBottom(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_PADDINGBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_paddingLeft(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_PADDINGLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_paddingRight(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_PADDINGRIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleLength* UnityEngine.UIElements.IStyle.get_paddingTop()
		{
			return (return (::UnityEngine::UIElements::StyleLength*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_PADDINGTOP_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_paddingTop(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_PADDINGTOP_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_position(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_right(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_top(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_TOP_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor(::UnityEngine::UIElements::StyleColor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_UNITYBACKGROUNDIMAGETINTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_visibility(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_VISIBILITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleLength* UnityEngine.UIElements.IStyle.get_width()
		{
			return (return (::UnityEngine::UIElements::StyleLength*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.IStyle.set_width(::UnityEngine::UIElements::StyleLength* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_UNITYENGINE.UIELEMENTS.ISTYLE.SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INLINESTYLEACCESS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

