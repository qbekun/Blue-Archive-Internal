#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleValueCollection; }
namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }

#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_TOP_OFFSET UNITYSDK_OFFSET(0xA378590)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_LEFT_OFFSET UNITYSDK_OFFSET(0xA378680)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA378690)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA3786A0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA3786B0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xA3786C0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA3786D0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0xA3787D0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_UNITYBACKGROUNDIMAGETINTCOLOR_OFFSET UNITYSDK_OFFSET(0xA378800)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERCOLOR_OFFSET UNITYSDK_OFFSET(0xA378830)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_MARGINLEFT_OFFSET UNITYSDK_OFFSET(0xA378860)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_MARGINTOP_OFFSET UNITYSDK_OFFSET(0xA378870)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_MARGINRIGHT_OFFSET UNITYSDK_OFFSET(0xA378880)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_MARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0xA378890)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_PADDINGLEFT_OFFSET UNITYSDK_OFFSET(0xA3788A0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_GET_PADDINGTOP_OFFSET UNITYSDK_OFFSET(0xA3788B0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_PADDINGTOP_OFFSET UNITYSDK_OFFSET(0xA3789B0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_PADDINGRIGHT_OFFSET UNITYSDK_OFFSET(0xA3789C0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_PADDINGBOTTOM_OFFSET UNITYSDK_OFFSET(0xA3789D0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERLEFTWIDTH_OFFSET UNITYSDK_OFFSET(0xA3789E0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERRIGHTWIDTH_OFFSET UNITYSDK_OFFSET(0xA3789F0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERTOPWIDTH_OFFSET UNITYSDK_OFFSET(0xA378A00)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERBOTTOMWIDTH_OFFSET UNITYSDK_OFFSET(0xA378A10)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERTOPLEFTRADIUS_OFFSET UNITYSDK_OFFSET(0xA378A20)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERTOPRIGHTRADIUS_OFFSET UNITYSDK_OFFSET(0xA378A30)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERBOTTOMLEFTRADIUS_OFFSET UNITYSDK_OFFSET(0xA378A40)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERBOTTOMRIGHTRADIUS_OFFSET UNITYSDK_OFFSET(0xA378A50)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_OPACITY_OFFSET UNITYSDK_OFFSET(0xA378A60)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_FLEXGROW_OFFSET UNITYSDK_OFFSET(0xA378A70)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_FLEXSHRINK_OFFSET UNITYSDK_OFFSET(0xA378A80)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA3785A0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA378700)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_VALUES_OFFSET UNITYSDK_OFFSET(0xA378940)

namespace UnityEngine::UIElements::Experimental
{
	inline static constexpr unsigned int StyleValues_TypeDefinitionIndex = 30832;

	class StyleValues : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleValueCollection* m_StyleValues; // 0x10

		::System::Void set_top(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_TOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_left(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Void set_width(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_height(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_right(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_bottom(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_backgroundColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_unityBackgroundImageTintColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_UNITYBACKGROUNDIMAGETINTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_borderColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_marginLeft(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_MARGINLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void set_marginTop(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_MARGINTOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_marginRight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_MARGINRIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_marginBottom(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_MARGINBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void set_paddingLeft(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_PADDINGLEFT_OFFSET))(arg, nullptr);
		}

		::System::Single get_paddingTop()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_GET_PADDINGTOP_OFFSET))(nullptr);
		}

		::System::Void set_paddingTop(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_PADDINGTOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_paddingRight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_PADDINGRIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_paddingBottom(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_PADDINGBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void set_borderLeftWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERLEFTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_borderRightWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERRIGHTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_borderTopWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERTOPWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_borderBottomWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERBOTTOMWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_borderTopLeftRadius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERTOPLEFTRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_borderTopRightRadius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERTOPRIGHTRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_borderBottomLeftRadius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERBOTTOMLEFTRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_borderBottomRightRadius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_BORDERBOTTOMRIGHTRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_opacity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_OPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_flexGrow(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_FLEXGROW_OFFSET))(arg, nullptr);
		}

		::System::Void set_flexShrink(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SET_FLEXSHRINK_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleValueCollection* Values()
		{
			return (return (::UnityEngine::UIElements::StyleValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_STYLEVALUES_VALUES_OFFSET))(nullptr);
		}

	};
}

