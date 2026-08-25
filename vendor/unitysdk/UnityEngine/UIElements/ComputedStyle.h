#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaNode; }
namespace UnityEngine::UIElements { class ComputedStyle&; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyReader; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class VersionChangeType; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class StyleTranslate; }
namespace UnityEngine::UIElements { class Align; }
namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class Background; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class Cursor; }
namespace UnityEngine::UIElements { class DisplayStyle; }
namespace UnityEngine::UIElements { class FlexDirection; }
namespace UnityEngine::UIElements { class Wrap; }
namespace UnityEngine::UIElements { class Justify; }
namespace UnityEngine::UIElements { class OverflowInternal; }
namespace UnityEngine::UIElements { class Position; }
namespace UnityEngine::UIElements { class Rotate; }
namespace UnityEngine::UIElements { class Scale; }
namespace UnityEngine::UIElements { class TextOverflow; }
namespace UnityEngine::UIElements { class TextShadow; }
namespace UnityEngine::UIElements { class TransformOrigin; }
namespace UnityEngine::UIElements { class Translate; }
namespace UnityEngine { class ScaleMode; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UIElements { class FontDefinition; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine::UIElements { class OverflowClipBox; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine::UIElements { class TextOverflowPosition; }
namespace UnityEngine::UIElements { class Visibility; }
namespace UnityEngine::UIElements { class WhiteSpace; }
namespace UnityEngine::UIElements { class ComputedStyle; }
namespace UnityEngine::UIElements::StyleSheets { class StyleValue; }
namespace UnityEngine::UIElements::StyleSheets { class StyleValueManaged; }

#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_CUSTOMPROPERTIESCOUNT_OFFSET UNITYSDK_OFFSET(0xA3E7590)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_HASTRANSITION_OFFSET UNITYSDK_OFFSET(0xA3E75E0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_FINALIZEAPPLY_OFFSET UNITYSDK_OFFSET(0xA3E7600)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_SYNCWITHLAYOUT_OFFSET UNITYSDK_OFFSET(0xA3E77C0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYGLOBALKEYWORD_OFFSET UNITYSDK_OFFSET(0xA3E8B30)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYGLOBALKEYWORD_OFFSET UNITYSDK_OFFSET(0xA3E8C80)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_REMOVECUSTOMSTYLEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA3EA5D0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYCUSTOMSTYLEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA3EA670)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYALLPROPERTYINITIAL_OFFSET UNITYSDK_OFFSET(0xA3EA770)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_RESETCOMPUTEDTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xA3EA8F0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_COMPARECHANGES_OFFSET UNITYSDK_OFFSET(0xA3EA910)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_STARTANIMATIONINLINETRANSLATE_OFFSET UNITYSDK_OFFSET(0xA3EB3F0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_ALIGNCONTENT_OFFSET UNITYSDK_OFFSET(0xA3E89A0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_ALIGNITEMS_OFFSET UNITYSDK_OFFSET(0xA3E89F0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_ALIGNSELF_OFFSET UNITYSDK_OFFSET(0xA3E87C0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0xA3EB5D0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0xA3EB620)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMCOLOR_OFFSET UNITYSDK_OFFSET(0xA3EB680)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMLEFTRADIUS_OFFSET UNITYSDK_OFFSET(0xA3EB0F0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMRIGHTRADIUS_OFFSET UNITYSDK_OFFSET(0xA3EB140)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMWIDTH_OFFSET UNITYSDK_OFFSET(0xA3E8630)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERLEFTCOLOR_OFFSET UNITYSDK_OFFSET(0xA3EB6D0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERLEFTWIDTH_OFFSET UNITYSDK_OFFSET(0xA3E8540)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERRIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0xA3EB720)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERRIGHTWIDTH_OFFSET UNITYSDK_OFFSET(0xA3E85E0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPCOLOR_OFFSET UNITYSDK_OFFSET(0xA3EB770)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPLEFTRADIUS_OFFSET UNITYSDK_OFFSET(0xA3EB190)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPRIGHTRADIUS_OFFSET UNITYSDK_OFFSET(0xA3EB1E0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPWIDTH_OFFSET UNITYSDK_OFFSET(0xA3E8590)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xA3E8270)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xA3EB7C0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_CURSOR_OFFSET UNITYSDK_OFFSET(0xA3EB810)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0xA3E8AE0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXBASIS_OFFSET UNITYSDK_OFFSET(0xA3E8130)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXDIRECTION_OFFSET UNITYSDK_OFFSET(0xA3E8950)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXGROW_OFFSET UNITYSDK_OFFSET(0xA3E8090)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXSHRINK_OFFSET UNITYSDK_OFFSET(0xA3E80E0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXWRAP_OFFSET UNITYSDK_OFFSET(0xA3E8A90)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xA3E7780)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA3E86D0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_JUSTIFYCONTENT_OFFSET UNITYSDK_OFFSET(0xA3E8A40)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xA3E8180)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_LETTERSPACING_OFFSET UNITYSDK_OFFSET(0xA3EB870)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0xA3E83B0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MARGINLEFT_OFFSET UNITYSDK_OFFSET(0xA3E82C0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MARGINRIGHT_OFFSET UNITYSDK_OFFSET(0xA3E8360)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MARGINTOP_OFFSET UNITYSDK_OFFSET(0xA3E8310)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0xA3E8860)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0xA3E8810)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0xA3E8900)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0xA3E88B0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_OPACITY_OFFSET UNITYSDK_OFFSET(0xA3EB230)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_OVERFLOW_OFFSET UNITYSDK_OFFSET(0xA3E8770)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_PADDINGBOTTOM_OFFSET UNITYSDK_OFFSET(0xA3E84F0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_PADDINGLEFT_OFFSET UNITYSDK_OFFSET(0xA3E8400)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_PADDINGRIGHT_OFFSET UNITYSDK_OFFSET(0xA3E84A0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_PADDINGTOP_OFFSET UNITYSDK_OFFSET(0xA3E8450)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA3E8720)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA3E8220)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_ROTATE_OFFSET UNITYSDK_OFFSET(0xA3EB390)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA3EB340)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TEXTOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA3EB8B0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TEXTSHADOW_OFFSET UNITYSDK_OFFSET(0xA3EB900)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TOP_OFFSET UNITYSDK_OFFSET(0xA3E81D0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSFORMORIGIN_OFFSET UNITYSDK_OFFSET(0xA3EB280)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSITIONDELAY_OFFSET UNITYSDK_OFFSET(0xA3EB950)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0xA3EB9A0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xA3EB9F0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSITIONTIMINGFUNCTION_OFFSET UNITYSDK_OFFSET(0xA3EBA40)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSLATE_OFFSET UNITYSDK_OFFSET(0xA3EB2E0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYBACKGROUNDIMAGETINTCOLOR_OFFSET UNITYSDK_OFFSET(0xA3EBA90)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYBACKGROUNDSCALEMODE_OFFSET UNITYSDK_OFFSET(0xA3EBAE0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYFONT_OFFSET UNITYSDK_OFFSET(0xA3EBB30)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYFONTDEFINITION_OFFSET UNITYSDK_OFFSET(0xA3EBB70)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYFONTSTYLEANDWEIGHT_OFFSET UNITYSDK_OFFSET(0xA3EBBC0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYOVERFLOWCLIPBOX_OFFSET UNITYSDK_OFFSET(0xA3EBC00)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYPARAGRAPHSPACING_OFFSET UNITYSDK_OFFSET(0xA3EBC50)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYSLICEBOTTOM_OFFSET UNITYSDK_OFFSET(0xA3EBC90)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYSLICELEFT_OFFSET UNITYSDK_OFFSET(0xA3EBCE0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYSLICERIGHT_OFFSET UNITYSDK_OFFSET(0xA3EBD30)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYSLICETOP_OFFSET UNITYSDK_OFFSET(0xA3EBD80)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYTEXTALIGN_OFFSET UNITYSDK_OFFSET(0xA3EBDD0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYTEXTOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0xA3EBE10)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYTEXTOUTLINEWIDTH_OFFSET UNITYSDK_OFFSET(0xA3EBE60)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYTEXTOVERFLOWPOSITION_OFFSET UNITYSDK_OFFSET(0xA3EBEB0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0xA3EBF00)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_WHITESPACE_OFFSET UNITYSDK_OFFSET(0xA3EBF40)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA3E8680)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_WORDSPACING_OFFSET UNITYSDK_OFFSET(0xA3EBF90)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA3EBFE0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_CREATEINITIAL_OFFSET UNITYSDK_OFFSET(0xA3EC1B0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0xA3EC340)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_RELEASE_OFFSET UNITYSDK_OFFSET(0xA3EC440)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA3EA7C0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA3EC510)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLEVALUE_OFFSET UNITYSDK_OFFSET(0xA3ED680)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLEVALUEMANAGED_OFFSET UNITYSDK_OFFSET(0xA3EE1A0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLECURSOR_OFFSET UNITYSDK_OFFSET(0xA3EE600)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLETEXTSHADOW_OFFSET UNITYSDK_OFFSET(0xA3EE660)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYFROMCOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA3EE6C0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3EF850)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F0030)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F0340)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F0860)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F0AB0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F0BF0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F0D30)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F0E70)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F0FB0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F10F0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F1230)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F1370)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_STARTANIMATION_OFFSET UNITYSDK_OFFSET(0xA3F14A0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_STARTANIMATIONALLPROPERTY_OFFSET UNITYSDK_OFFSET(0xA3F5740)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_STARTANIMATIONINLINE_OFFSET UNITYSDK_OFFSET(0xA3F9CB0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLETRANSFORMORIGIN_OFFSET UNITYSDK_OFFSET(0xA3FD2D0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLETRANSLATE_OFFSET UNITYSDK_OFFSET(0xA3FD330)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLEROTATE_OFFSET UNITYSDK_OFFSET(0xA3FD390)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLESCALE_OFFSET UNITYSDK_OFFSET(0xA3FD3F0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYINITIALVALUE_OFFSET UNITYSDK_OFFSET(0xA3E8BD0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYINITIALVALUE_OFFSET UNITYSDK_OFFSET(0xA3E8CA0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYUNSETVALUE_OFFSET UNITYSDK_OFFSET(0xA3E8C50)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYUNSETVALUE_OFFSET UNITYSDK_OFFSET(0xA3FD440)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ComputedStyle_TypeDefinitionIndex = 30593;

	class ComputedStyle : public Il2CppObject
	{
	public:
		Il2CppObject* inheritedData; // 0x10
		Il2CppObject* layoutData; // 0x18
		Il2CppObject* rareData; // 0x20
		Il2CppObject* transformData; // 0x28
		Il2CppObject* transitionData; // 0x30
		Il2CppObject* visualData; // 0x38
		::UnityEngine::Yoga::YogaNode* yogaNode; // 0x40
		Il2CppObject* customProperties; // 0x48
		::System::Int64 matchingRulesHash; // 0x50
		::System::Single dpiScaling; // 0x58
		::Il2CppArray<::System::Object*>* computedTransitions; // 0x60

		::System::Int32 get_customPropertiesCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_CUSTOMPROPERTIESCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_hasTransition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_HASTRANSITION_OFFSET))(nullptr);
		}

		::System::Void FinalizeApply(::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_FINALIZEAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void SyncWithLayout(::UnityEngine::Yoga::YogaNode* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_SYNCWITHLAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ApplyGlobalKeyword(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYGLOBALKEYWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ApplyGlobalKeyword(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::StyleKeyword* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::StyleKeyword*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYGLOBALKEYWORD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveCustomStyleProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_REMOVECUSTOMSTYLEPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyCustomStyleProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYCUSTOMSTYLEPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyAllPropertyInitial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYALLPROPERTYINITIAL_OFFSET))(nullptr);
		}

		::System::Void ResetComputedTransitions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_RESETCOMPUTEDTRANSITIONS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VersionChangeType* CompareChanges(::UnityEngine::UIElements::ComputedStyle&* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			return (return (::UnityEngine::UIElements::VersionChangeType*(*)(::UnityEngine::UIElements::ComputedStyle&*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_COMPARECHANGES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean StartAnimationInlineTranslate(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::ComputedStyle&* arg, ::UnityEngine::UIElements::StyleTranslate* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ComputedStyle&*, ::UnityEngine::UIElements::StyleTranslate*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_STARTANIMATIONINLINETRANSLATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Align* get_alignContent()
		{
			return (return (::UnityEngine::UIElements::Align*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_ALIGNCONTENT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Align* get_alignItems()
		{
			return (return (::UnityEngine::UIElements::Align*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_ALIGNITEMS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Align* get_alignSelf()
		{
			return (return (::UnityEngine::UIElements::Align*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_ALIGNSELF_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_backgroundColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Background* get_backgroundImage()
		{
			return (return (::UnityEngine::UIElements::Background*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BACKGROUNDIMAGE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_borderBottomColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_borderBottomLeftRadius()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMLEFTRADIUS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_borderBottomRightRadius()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMRIGHTRADIUS_OFFSET))(nullptr);
		}

		::System::Single get_borderBottomWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMWIDTH_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_borderLeftColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERLEFTCOLOR_OFFSET))(nullptr);
		}

		::System::Single get_borderLeftWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERLEFTWIDTH_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_borderRightColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERRIGHTCOLOR_OFFSET))(nullptr);
		}

		::System::Single get_borderRightWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERRIGHTWIDTH_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_borderTopColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_borderTopLeftRadius()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPLEFTRADIUS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_borderTopRightRadius()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPRIGHTRADIUS_OFFSET))(nullptr);
		}

		::System::Single get_borderTopWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPWIDTH_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_bottom()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BOTTOM_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_COLOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Cursor* get_cursor()
		{
			return (return (::UnityEngine::UIElements::Cursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_CURSOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::DisplayStyle* get_display()
		{
			return (return (::UnityEngine::UIElements::DisplayStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_DISPLAY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_flexBasis()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXBASIS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::FlexDirection* get_flexDirection()
		{
			return (return (::UnityEngine::UIElements::FlexDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXDIRECTION_OFFSET))(nullptr);
		}

		::System::Single get_flexGrow()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXGROW_OFFSET))(nullptr);
		}

		::System::Single get_flexShrink()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXSHRINK_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Wrap* get_flexWrap()
		{
			return (return (::UnityEngine::UIElements::Wrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FLEXWRAP_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_fontSize()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_FONTSIZE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_height()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_HEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Justify* get_justifyContent()
		{
			return (return (::UnityEngine::UIElements::Justify*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_JUSTIFYCONTENT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_left()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_LEFT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_letterSpacing()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_LETTERSPACING_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_marginBottom()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MARGINBOTTOM_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_marginLeft()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MARGINLEFT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_marginRight()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MARGINRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_marginTop()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MARGINTOP_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_maxHeight()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MAXHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_maxWidth()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MAXWIDTH_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_minHeight()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MINHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_minWidth()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_MINWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_opacity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_OPACITY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::OverflowInternal* get_overflow()
		{
			return (return (::UnityEngine::UIElements::OverflowInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_OVERFLOW_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_paddingBottom()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_PADDINGBOTTOM_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_paddingLeft()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_PADDINGLEFT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_paddingRight()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_PADDINGRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_paddingTop()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_PADDINGTOP_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Position* get_position()
		{
			return (return (::UnityEngine::UIElements::Position*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_POSITION_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_right()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_RIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Rotate* get_rotate()
		{
			return (return (::UnityEngine::UIElements::Rotate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_ROTATE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Scale* get_scale()
		{
			return (return (::UnityEngine::UIElements::Scale*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_SCALE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TextOverflow* get_textOverflow()
		{
			return (return (::UnityEngine::UIElements::TextOverflow*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TEXTOVERFLOW_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TextShadow* get_textShadow()
		{
			return (return (::UnityEngine::UIElements::TextShadow*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TEXTSHADOW_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_top()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TOP_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TransformOrigin* get_transformOrigin()
		{
			return (return (::UnityEngine::UIElements::TransformOrigin*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSFORMORIGIN_OFFSET))(nullptr);
		}

		Il2CppObject* get_transitionDelay()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSITIONDELAY_OFFSET))(nullptr);
		}

		Il2CppObject* get_transitionDuration()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSITIONDURATION_OFFSET))(nullptr);
		}

		Il2CppObject* get_transitionProperty()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSITIONPROPERTY_OFFSET))(nullptr);
		}

		Il2CppObject* get_transitionTimingFunction()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSITIONTIMINGFUNCTION_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Translate* get_translate()
		{
			return (return (::UnityEngine::UIElements::Translate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_TRANSLATE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_unityBackgroundImageTintColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYBACKGROUNDIMAGETINTCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::ScaleMode* get_unityBackgroundScaleMode()
		{
			return (return (::UnityEngine::ScaleMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYBACKGROUNDSCALEMODE_OFFSET))(nullptr);
		}

		::UnityEngine::Font* get_unityFont()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYFONT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::FontDefinition* get_unityFontDefinition()
		{
			return (return (::UnityEngine::UIElements::FontDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYFONTDEFINITION_OFFSET))(nullptr);
		}

		::UnityEngine::FontStyle* get_unityFontStyleAndWeight()
		{
			return (return (::UnityEngine::FontStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYFONTSTYLEANDWEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::OverflowClipBox* get_unityOverflowClipBox()
		{
			return (return (::UnityEngine::UIElements::OverflowClipBox*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYOVERFLOWCLIPBOX_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_unityParagraphSpacing()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYPARAGRAPHSPACING_OFFSET))(nullptr);
		}

		::System::Int32 get_unitySliceBottom()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYSLICEBOTTOM_OFFSET))(nullptr);
		}

		::System::Int32 get_unitySliceLeft()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYSLICELEFT_OFFSET))(nullptr);
		}

		::System::Int32 get_unitySliceRight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYSLICERIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_unitySliceTop()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYSLICETOP_OFFSET))(nullptr);
		}

		::UnityEngine::TextAnchor* get_unityTextAlign()
		{
			return (return (::UnityEngine::TextAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYTEXTALIGN_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_unityTextOutlineColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYTEXTOUTLINECOLOR_OFFSET))(nullptr);
		}

		::System::Single get_unityTextOutlineWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYTEXTOUTLINEWIDTH_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TextOverflowPosition* get_unityTextOverflowPosition()
		{
			return (return (::UnityEngine::UIElements::TextOverflowPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYTEXTOVERFLOWPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Visibility* get_visibility()
		{
			return (return (::UnityEngine::UIElements::Visibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_VISIBILITY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::WhiteSpace* get_whiteSpace()
		{
			return (return (::UnityEngine::UIElements::WhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_WHITESPACE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_width()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_WIDTH_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_wordSpacing()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_WORDSPACING_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ComputedStyle* Create(::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			return (return (::UnityEngine::UIElements::ComputedStyle*(*)(::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ComputedStyle* CreateInitial()
		{
			return (return (::UnityEngine::UIElements::ComputedStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_CREATEINITIAL_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ComputedStyle* Acquire()
		{
			return (return (::UnityEngine::UIElements::ComputedStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_ACQUIRE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyProperties(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StyleValue*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyStyleValueManaged(::UnityEngine::UIElements::StyleSheets::StyleValueManaged* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StyleValueManaged*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLEVALUEMANAGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyStyleCursor(::UnityEngine::UIElements::Cursor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Cursor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLECURSOR_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStyleTextShadow(::UnityEngine::UIElements::TextShadow* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextShadow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLETEXTSHADOW_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYFROMCOMPUTEDSTYLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Length* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Background* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Background*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::FontDefinition* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::FontDefinition*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::TextShadow* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::TextShadow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Translate* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Translate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::TransformOrigin* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::TransformOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Rotate* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Rotate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Scale* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Scale*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYPROPERTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean StartAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::ComputedStyle&* arg, ::UnityEngine::UIElements::ComputedStyle&* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::ComputedStyle&*, ::UnityEngine::UIElements::ComputedStyle&*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_STARTANIMATION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartAnimationAllProperty(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::ComputedStyle&* arg, ::UnityEngine::UIElements::ComputedStyle&* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ComputedStyle&*, ::UnityEngine::UIElements::ComputedStyle&*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_STARTANIMATIONALLPROPERTY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartAnimationInline(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::ComputedStyle&* arg, ::UnityEngine::UIElements::StyleSheets::StyleValue* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::ComputedStyle&*, ::UnityEngine::UIElements::StyleSheets::StyleValue*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_STARTANIMATIONINLINE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ApplyStyleTransformOrigin(::UnityEngine::UIElements::TransformOrigin* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TransformOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLETRANSFORMORIGIN_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStyleTranslate(::UnityEngine::UIElements::Translate* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Translate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLETRANSLATE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStyleRotate(::UnityEngine::UIElements::Rotate* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Rotate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLEROTATE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStyleScale(::UnityEngine::UIElements::Scale* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Scale*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYSTYLESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyInitialValue(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYINITIALVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyInitialValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYINITIALVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyUnsetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYUNSETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyUnsetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_APPLYUNSETVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

