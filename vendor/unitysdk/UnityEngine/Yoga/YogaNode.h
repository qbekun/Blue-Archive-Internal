#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaConfig; }
namespace UnityEngine::Yoga { class MeasureFunction; }
namespace UnityEngine::Yoga { class BaselineFunction; }
namespace UnityEngine::Yoga { class YogaNode; }
namespace UnityEngine::Yoga { class YogaFlexDirection; }
namespace UnityEngine::Yoga { class YogaJustify; }
namespace UnityEngine::Yoga { class YogaDisplay; }
namespace UnityEngine::Yoga { class YogaAlign; }
namespace UnityEngine::Yoga { class YogaPositionType; }
namespace UnityEngine::Yoga { class YogaWrap; }
namespace UnityEngine::Yoga { class YogaValue; }
namespace UnityEngine::Yoga { class YogaOverflow; }
namespace UnityEngine::Yoga { class YogaSize; }
namespace UnityEngine::Yoga { class YogaMeasureMode; }
namespace UnityEngine::Yoga { class YogaEdge; }

#define UNITYENGINE_YOGA_YOGANODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA44DD10)
#define UNITYENGINE_YOGA_YOGANODE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA44DE50)
#define UNITYENGINE_YOGA_YOGANODE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA44DF80)
#define UNITYENGINE_YOGA_YOGANODE_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xA44E050)
#define UNITYENGINE_YOGA_YOGANODE_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xA44E090)
#define UNITYENGINE_YOGA_YOGANODE_GET_HASNEWLAYOUT_OFFSET UNITYSDK_OFFSET(0xA44E0D0)
#define UNITYENGINE_YOGA_YOGANODE_GET_ISMEASUREDEFINED_OFFSET UNITYSDK_OFFSET(0xA44E110)
#define UNITYENGINE_YOGA_YOGANODE_GET_ISBASELINEDEFINED_OFFSET UNITYSDK_OFFSET(0xA44E120)
#define UNITYENGINE_YOGA_YOGANODE_COPYSTYLE_OFFSET UNITYSDK_OFFSET(0xA44E130)
#define UNITYENGINE_YOGA_YOGANODE_SET_FLEXDIRECTION_OFFSET UNITYSDK_OFFSET(0xA44E180)
#define UNITYENGINE_YOGA_YOGANODE_SET_JUSTIFYCONTENT_OFFSET UNITYSDK_OFFSET(0xA44E1C0)
#define UNITYENGINE_YOGA_YOGANODE_SET_DISPLAY_OFFSET UNITYSDK_OFFSET(0xA44E200)
#define UNITYENGINE_YOGA_YOGANODE_SET_ALIGNITEMS_OFFSET UNITYSDK_OFFSET(0xA44E240)
#define UNITYENGINE_YOGA_YOGANODE_SET_ALIGNSELF_OFFSET UNITYSDK_OFFSET(0xA44E280)
#define UNITYENGINE_YOGA_YOGANODE_SET_ALIGNCONTENT_OFFSET UNITYSDK_OFFSET(0xA44E2C0)
#define UNITYENGINE_YOGA_YOGANODE_SET_POSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xA44E300)
#define UNITYENGINE_YOGA_YOGANODE_SET_WRAP_OFFSET UNITYSDK_OFFSET(0xA44E340)
#define UNITYENGINE_YOGA_YOGANODE_SET_FLEX_OFFSET UNITYSDK_OFFSET(0xA44E380)
#define UNITYENGINE_YOGA_YOGANODE_SET_FLEXGROW_OFFSET UNITYSDK_OFFSET(0xA44E3D0)
#define UNITYENGINE_YOGA_YOGANODE_SET_FLEXSHRINK_OFFSET UNITYSDK_OFFSET(0xA44E420)
#define UNITYENGINE_YOGA_YOGANODE_SET_FLEXBASIS_OFFSET UNITYSDK_OFFSET(0xA44E470)
#define UNITYENGINE_YOGA_YOGANODE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA44E540)
#define UNITYENGINE_YOGA_YOGANODE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA44E5F0)
#define UNITYENGINE_YOGA_YOGANODE_SET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0xA44E6A0)
#define UNITYENGINE_YOGA_YOGANODE_SET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0xA44E710)
#define UNITYENGINE_YOGA_YOGANODE_SET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0xA44E780)
#define UNITYENGINE_YOGA_YOGANODE_SET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0xA44E7F0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTX_OFFSET UNITYSDK_OFFSET(0xA44E860)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTY_OFFSET UNITYSDK_OFFSET(0xA44E8A0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTRIGHT_OFFSET UNITYSDK_OFFSET(0xA44E8E0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBOTTOM_OFFSET UNITYSDK_OFFSET(0xA44E920)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTWIDTH_OFFSET UNITYSDK_OFFSET(0xA44E960)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA44E9A0)
#define UNITYENGINE_YOGA_YOGANODE_SET_OVERFLOW_OFFSET UNITYSDK_OFFSET(0xA44E9E0)
#define UNITYENGINE_YOGA_YOGANODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA44EA20)
#define UNITYENGINE_YOGA_YOGANODE_MARKLAYOUTSEEN_OFFSET UNITYSDK_OFFSET(0xA44EA60)
#define UNITYENGINE_YOGA_YOGANODE_INSERT_OFFSET UNITYSDK_OFFSET(0xA44EAA0)
#define UNITYENGINE_YOGA_YOGANODE_REMOVEAT_OFFSET UNITYSDK_OFFSET(0xA44EBE0)
#define UNITYENGINE_YOGA_YOGANODE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA44ECB0)
#define UNITYENGINE_YOGA_YOGANODE_SETMEASUREFUNCTION_OFFSET UNITYSDK_OFFSET(0xA44ED10)
#define UNITYENGINE_YOGA_YOGANODE_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0xA44EDE0)
#define UNITYENGINE_YOGA_YOGANODE_MEASUREINTERNAL_OFFSET UNITYSDK_OFFSET(0xA44CDD0)
#define UNITYENGINE_YOGA_YOGANODE_BASELINEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA44CEC0)
#define UNITYENGINE_YOGA_YOGANODE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA44EE60)
#define UNITYENGINE_YOGA_YOGANODE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA44EFE0)
#define UNITYENGINE_YOGA_YOGANODE_SET_LEFT_OFFSET UNITYSDK_OFFSET(0xA44F160)
#define UNITYENGINE_YOGA_YOGANODE_SET_TOP_OFFSET UNITYSDK_OFFSET(0xA44F260)
#define UNITYENGINE_YOGA_YOGANODE_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA44F2E0)
#define UNITYENGINE_YOGA_YOGANODE_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xA44F360)
#define UNITYENGINE_YOGA_YOGANODE_SETSTYLEPOSITION_OFFSET UNITYSDK_OFFSET(0xA44F1E0)
#define UNITYENGINE_YOGA_YOGANODE_SET_MARGINLEFT_OFFSET UNITYSDK_OFFSET(0xA44F3E0)
#define UNITYENGINE_YOGA_YOGANODE_SET_MARGINTOP_OFFSET UNITYSDK_OFFSET(0xA44F550)
#define UNITYENGINE_YOGA_YOGANODE_SET_MARGINRIGHT_OFFSET UNITYSDK_OFFSET(0xA44F610)
#define UNITYENGINE_YOGA_YOGANODE_SET_MARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0xA44F6D0)
#define UNITYENGINE_YOGA_YOGANODE_SETSTYLEMARGIN_OFFSET UNITYSDK_OFFSET(0xA44F490)
#define UNITYENGINE_YOGA_YOGANODE_SET_PADDINGLEFT_OFFSET UNITYSDK_OFFSET(0xA44F790)
#define UNITYENGINE_YOGA_YOGANODE_SET_PADDINGTOP_OFFSET UNITYSDK_OFFSET(0xA44F890)
#define UNITYENGINE_YOGA_YOGANODE_SET_PADDINGRIGHT_OFFSET UNITYSDK_OFFSET(0xA44F910)
#define UNITYENGINE_YOGA_YOGANODE_SET_PADDINGBOTTOM_OFFSET UNITYSDK_OFFSET(0xA44F990)
#define UNITYENGINE_YOGA_YOGANODE_SETSTYLEPADDING_OFFSET UNITYSDK_OFFSET(0xA44F810)
#define UNITYENGINE_YOGA_YOGANODE_SET_BORDERLEFTWIDTH_OFFSET UNITYSDK_OFFSET(0xA44FA10)
#define UNITYENGINE_YOGA_YOGANODE_SET_BORDERTOPWIDTH_OFFSET UNITYSDK_OFFSET(0xA44FA60)
#define UNITYENGINE_YOGA_YOGANODE_SET_BORDERRIGHTWIDTH_OFFSET UNITYSDK_OFFSET(0xA44FAB0)
#define UNITYENGINE_YOGA_YOGANODE_SET_BORDERBOTTOMWIDTH_OFFSET UNITYSDK_OFFSET(0xA44FB00)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTMARGINLEFT_OFFSET UNITYSDK_OFFSET(0xA44FB50)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTMARGINTOP_OFFSET UNITYSDK_OFFSET(0xA44FB90)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTMARGINRIGHT_OFFSET UNITYSDK_OFFSET(0xA44FBD0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTMARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0xA44FC10)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGLEFT_OFFSET UNITYSDK_OFFSET(0xA44FC50)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGTOP_OFFSET UNITYSDK_OFFSET(0xA44FC90)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGRIGHT_OFFSET UNITYSDK_OFFSET(0xA44FCD0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGBOTTOM_OFFSET UNITYSDK_OFFSET(0xA44FD10)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBORDERLEFT_OFFSET UNITYSDK_OFFSET(0xA44FD50)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBORDERTOP_OFFSET UNITYSDK_OFFSET(0xA44FD90)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBORDERRIGHT_OFFSET UNITYSDK_OFFSET(0xA44FDD0)
#define UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBORDERBOTTOM_OFFSET UNITYSDK_OFFSET(0xA44FE10)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaNode_TypeDefinitionIndex = 37358;

	class YogaNode : public Il2CppObject
	{
	public:
		::System::Int32 _ygNode; // 0x10
		::UnityEngine::Yoga::YogaConfig* _config; // 0x18
		::System::WeakReference* _parent; // 0x20
		Il2CppObject* _children; // 0x28
		::UnityEngine::Yoga::MeasureFunction* _measureFunction; // 0x30
		::UnityEngine::Yoga::BaselineFunction* _baselineFunction; // 0x38
		::System::Object* _data; // 0x40

		::System::Void .ctor(::UnityEngine::Yoga::YogaConfig* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaConfig*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void set_Config(::UnityEngine::Yoga::YogaConfig* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaConfig*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_CONFIG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDirty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_ISDIRTY_OFFSET))(nullptr);
		}

		::System::Void MarkDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_MARKDIRTY_OFFSET))(nullptr);
		}

		::System::Boolean get_HasNewLayout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_HASNEWLAYOUT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMeasureDefined()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_ISMEASUREDEFINED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBaselineDefined()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_ISBASELINEDEFINED_OFFSET))(nullptr);
		}

		::System::Void CopyStyle(::UnityEngine::Yoga::YogaNode* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_COPYSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_FlexDirection(::UnityEngine::Yoga::YogaFlexDirection* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaFlexDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_FLEXDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_JustifyContent(::UnityEngine::Yoga::YogaJustify* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaJustify*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_JUSTIFYCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Display(::UnityEngine::Yoga::YogaDisplay* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaDisplay*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_DISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_AlignItems(::UnityEngine::Yoga::YogaAlign* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaAlign*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_ALIGNITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void set_AlignSelf(::UnityEngine::Yoga::YogaAlign* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaAlign*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_ALIGNSELF_OFFSET))(arg, nullptr);
		}

		::System::Void set_AlignContent(::UnityEngine::Yoga::YogaAlign* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaAlign*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_ALIGNCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_PositionType(::UnityEngine::Yoga::YogaPositionType* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaPositionType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_POSITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Wrap(::UnityEngine::Yoga::YogaWrap* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaWrap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_WRAP_OFFSET))(arg, nullptr);
		}

		::System::Void set_Flex(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_FLEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_FlexGrow(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_FLEXGROW_OFFSET))(arg, nullptr);
		}

		::System::Void set_FlexShrink(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_FLEXSHRINK_OFFSET))(arg, nullptr);
		}

		::System::Void set_FlexBasis(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_FLEXBASIS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Width(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_Height(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxWidth(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_MAXWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxHeight(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_MAXHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_MinWidth(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_MINWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_MinHeight(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_MINHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_LayoutX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTX_OFFSET))(nullptr);
		}

		::System::Single get_LayoutY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTY_OFFSET))(nullptr);
		}

		::System::Single get_LayoutRight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_LayoutBottom()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_LayoutWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_LayoutHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Overflow(::UnityEngine::Yoga::YogaOverflow* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaOverflow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_OVERFLOW_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void MarkLayoutSeen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_MARKLAYOUTSEEN_OFFSET))(nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::UnityEngine::Yoga::YogaNode* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void SetMeasureFunction(::UnityEngine::Yoga::MeasureFunction* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::MeasureFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SETMEASUREFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateLayout(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_CALCULATELAYOUT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Yoga::YogaSize* MeasureInternal(::UnityEngine::Yoga::YogaNode* arg, ::System::Single arg, ::UnityEngine::Yoga::YogaMeasureMode* arg, ::System::Single arg, ::UnityEngine::Yoga::YogaMeasureMode* arg)
		{
			return (return (::UnityEngine::Yoga::YogaSize*(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_MEASUREINTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single BaselineInternal(::UnityEngine::Yoga::YogaNode* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_BASELINEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void set_Left(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Top(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_TOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_Right(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Bottom(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_BOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void SetStylePosition(::UnityEngine::Yoga::YogaEdge* arg, ::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaEdge*, ::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SETSTYLEPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_MarginLeft(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_MARGINLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void set_MarginTop(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_MARGINTOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_MarginRight(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_MARGINRIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_MarginBottom(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_MARGINBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void SetStyleMargin(::UnityEngine::Yoga::YogaEdge* arg, ::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaEdge*, ::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SETSTYLEMARGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_PaddingLeft(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_PADDINGLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void set_PaddingTop(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_PADDINGTOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_PaddingRight(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_PADDINGRIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_PaddingBottom(::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_PADDINGBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void SetStylePadding(::UnityEngine::Yoga::YogaEdge* arg, ::UnityEngine::Yoga::YogaValue* arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaEdge*, ::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SETSTYLEPADDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_BorderLeftWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_BORDERLEFTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_BorderTopWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_BORDERTOPWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_BorderRightWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_BORDERRIGHTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_BorderBottomWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_SET_BORDERBOTTOMWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_LayoutMarginLeft()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTMARGINLEFT_OFFSET))(nullptr);
		}

		::System::Single get_LayoutMarginTop()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTMARGINTOP_OFFSET))(nullptr);
		}

		::System::Single get_LayoutMarginRight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTMARGINRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_LayoutMarginBottom()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTMARGINBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_LayoutPaddingLeft()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGLEFT_OFFSET))(nullptr);
		}

		::System::Single get_LayoutPaddingTop()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGTOP_OFFSET))(nullptr);
		}

		::System::Single get_LayoutPaddingRight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_LayoutPaddingBottom()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTPADDINGBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_LayoutBorderLeft()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBORDERLEFT_OFFSET))(nullptr);
		}

		::System::Single get_LayoutBorderTop()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBORDERTOP_OFFSET))(nullptr);
		}

		::System::Single get_LayoutBorderRight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBORDERRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_LayoutBorderBottom()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGANODE_GET_LAYOUTBORDERBOTTOM_OFFSET))(nullptr);
		}

	};
}

