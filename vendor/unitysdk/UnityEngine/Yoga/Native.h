#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaNode; }
namespace UnityEngine::Yoga { class YogaDirection; }
namespace UnityEngine::Yoga { class YogaMeasureMode; }
namespace UnityEngine::Yoga { class YogaFlexDirection; }
namespace UnityEngine::Yoga { class YogaJustify; }
namespace UnityEngine::Yoga { class YogaAlign; }
namespace UnityEngine::Yoga { class YogaPositionType; }
namespace UnityEngine::Yoga { class YogaWrap; }
namespace UnityEngine::Yoga { class YogaOverflow; }
namespace UnityEngine::Yoga { class YogaDisplay; }
namespace UnityEngine::Yoga { class YogaEdge; }

#define UNITYENGINE_YOGA_NATIVE_YGNODENEWWITHCONFIG_OFFSET UNITYSDK_OFFSET(0xA44C970)
#define UNITYENGINE_YOGA_NATIVE_YGNODEFREE_OFFSET UNITYSDK_OFFSET(0xA44C9B0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEFREEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA44CA30)
#define UNITYENGINE_YOGA_NATIVE_YGSETMANAGEDOBJECT_OFFSET UNITYSDK_OFFSET(0xA44CA70)
#define UNITYENGINE_YOGA_NATIVE_YGNODESETCONFIG_OFFSET UNITYSDK_OFFSET(0xA44CAB0)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGGETDEFAULT_OFFSET UNITYSDK_OFFSET(0xA44C8D0)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGNEW_OFFSET UNITYSDK_OFFSET(0xA44C420)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGFREE_OFFSET UNITYSDK_OFFSET(0xA44C610)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGFREEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA44CAF0)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGSETUSEWEBDEFAULTS_OFFSET UNITYSDK_OFFSET(0xA44C750)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGGETUSEWEBDEFAULTS_OFFSET UNITYSDK_OFFSET(0xA44C6D0)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGSETPOINTSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xA44C7E0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEINSERTCHILD_OFFSET UNITYSDK_OFFSET(0xA44CB30)
#define UNITYENGINE_YOGA_NATIVE_YGNODEREMOVECHILD_OFFSET UNITYSDK_OFFSET(0xA44CB80)
#define UNITYENGINE_YOGA_NATIVE_YGNODECALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0xA44CBC0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEMARKDIRTY_OFFSET UNITYSDK_OFFSET(0xA44CC20)
#define UNITYENGINE_YOGA_NATIVE_YGNODEISDIRTY_OFFSET UNITYSDK_OFFSET(0xA44CC60)
#define UNITYENGINE_YOGA_NATIVE_YGNODECOPYSTYLE_OFFSET UNITYSDK_OFFSET(0xA44CCA0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESETMEASUREFUNC_OFFSET UNITYSDK_OFFSET(0xA44CCE0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEREMOVEMEASUREFUNC_OFFSET UNITYSDK_OFFSET(0xA44CD20)
#define UNITYENGINE_YOGA_NATIVE_YGNODEMEASUREINVOKE_OFFSET UNITYSDK_OFFSET(0xA44CD60)
#define UNITYENGINE_YOGA_NATIVE_YGNODEBASELINEINVOKE_OFFSET UNITYSDK_OFFSET(0xA44CE70)
#define UNITYENGINE_YOGA_NATIVE_YGNODESETHASNEWLAYOUT_OFFSET UNITYSDK_OFFSET(0xA44CF50)
#define UNITYENGINE_YOGA_NATIVE_YGNODEGETHASNEWLAYOUT_OFFSET UNITYSDK_OFFSET(0xA44CF90)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLEGETDIRECTION_OFFSET UNITYSDK_OFFSET(0xA44CFD0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXDIRECTION_OFFSET UNITYSDK_OFFSET(0xA44D010)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETJUSTIFYCONTENT_OFFSET UNITYSDK_OFFSET(0xA44D050)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETALIGNCONTENT_OFFSET UNITYSDK_OFFSET(0xA44D090)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETALIGNITEMS_OFFSET UNITYSDK_OFFSET(0xA44D0D0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETALIGNSELF_OFFSET UNITYSDK_OFFSET(0xA44D110)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xA44D150)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXWRAP_OFFSET UNITYSDK_OFFSET(0xA44D190)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA44D1D0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETDISPLAY_OFFSET UNITYSDK_OFFSET(0xA44D210)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEX_OFFSET UNITYSDK_OFFSET(0xA44D250)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXGROW_OFFSET UNITYSDK_OFFSET(0xA44D2A0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXSHRINK_OFFSET UNITYSDK_OFFSET(0xA44D2F0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXBASIS_OFFSET UNITYSDK_OFFSET(0xA44D340)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXBASISPERCENT_OFFSET UNITYSDK_OFFSET(0xA44D390)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXBASISAUTO_OFFSET UNITYSDK_OFFSET(0xA44D3E0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETWIDTH_OFFSET UNITYSDK_OFFSET(0xA44D420)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETWIDTHPERCENT_OFFSET UNITYSDK_OFFSET(0xA44D470)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETWIDTHAUTO_OFFSET UNITYSDK_OFFSET(0xA44D4C0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETHEIGHT_OFFSET UNITYSDK_OFFSET(0xA44D500)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETHEIGHTPERCENT_OFFSET UNITYSDK_OFFSET(0xA44D550)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETHEIGHTAUTO_OFFSET UNITYSDK_OFFSET(0xA44D5A0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMINWIDTH_OFFSET UNITYSDK_OFFSET(0xA44D5E0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMINWIDTHPERCENT_OFFSET UNITYSDK_OFFSET(0xA44D630)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMINHEIGHT_OFFSET UNITYSDK_OFFSET(0xA44D680)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMINHEIGHTPERCENT_OFFSET UNITYSDK_OFFSET(0xA44D6D0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMAXWIDTH_OFFSET UNITYSDK_OFFSET(0xA44D720)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMAXWIDTHPERCENT_OFFSET UNITYSDK_OFFSET(0xA44D770)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0xA44D7C0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMAXHEIGHTPERCENT_OFFSET UNITYSDK_OFFSET(0xA44D810)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPOSITION_OFFSET UNITYSDK_OFFSET(0xA44D860)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPOSITIONPERCENT_OFFSET UNITYSDK_OFFSET(0xA44D8B0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMARGIN_OFFSET UNITYSDK_OFFSET(0xA44D900)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMARGINPERCENT_OFFSET UNITYSDK_OFFSET(0xA44D950)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMARGINAUTO_OFFSET UNITYSDK_OFFSET(0xA44D9A0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPADDING_OFFSET UNITYSDK_OFFSET(0xA44D9E0)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPADDINGPERCENT_OFFSET UNITYSDK_OFFSET(0xA44DA30)
#define UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETBORDER_OFFSET UNITYSDK_OFFSET(0xA44DA80)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETLEFT_OFFSET UNITYSDK_OFFSET(0xA44DAD0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETTOP_OFFSET UNITYSDK_OFFSET(0xA44DB10)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETRIGHT_OFFSET UNITYSDK_OFFSET(0xA44DB50)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETBOTTOM_OFFSET UNITYSDK_OFFSET(0xA44DB90)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETWIDTH_OFFSET UNITYSDK_OFFSET(0xA44DBD0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETHEIGHT_OFFSET UNITYSDK_OFFSET(0xA44DC10)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETMARGIN_OFFSET UNITYSDK_OFFSET(0xA44DC50)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETPADDING_OFFSET UNITYSDK_OFFSET(0xA44DC90)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETBORDER_OFFSET UNITYSDK_OFFSET(0xA44DCD0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int Native_TypeDefinitionIndex = 37357;

	class Native : public Il2CppObject
	{
	public:
		::System::Int32 YGNodeNewWithConfig(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODENEWWITHCONFIG_OFFSET))(arg, nullptr);
		}

		::System::Void YGNodeFree(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEFREE_OFFSET))(arg, nullptr);
		}

		::System::Void YGNodeFreeInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEFREEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void YGSetManagedObject(::System::Int32 arg, ::UnityEngine::Yoga::YogaNode* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGSETMANAGEDOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeSetConfig(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESETCONFIG_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 YGConfigGetDefault()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGGETDEFAULT_OFFSET))(nullptr);
		}

		::System::Int32 YGConfigNew()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGNEW_OFFSET))(nullptr);
		}

		::System::Void YGConfigFree(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGFREE_OFFSET))(arg, nullptr);
		}

		::System::Void YGConfigFreeInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGFREEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void YGConfigSetUseWebDefaults(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGSETUSEWEBDEFAULTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean YGConfigGetUseWebDefaults(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGGETUSEWEBDEFAULTS_OFFSET))(arg, nullptr);
		}

		::System::Void YGConfigSetPointScaleFactor(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGSETPOINTSCALEFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeInsertChild(::System::Int32 arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEINSERTCHILD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void YGNodeRemoveChild(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEREMOVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeCalculateLayout(::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Yoga::YogaDirection* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Yoga::YogaDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODECALCULATELAYOUT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void YGNodeMarkDirty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEMARKDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean YGNodeIsDirty(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEISDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Void YGNodeCopyStyle(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODECOPYSTYLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeSetMeasureFunc(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESETMEASUREFUNC_OFFSET))(arg, nullptr);
		}

		::System::Void YGNodeRemoveMeasureFunc(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEREMOVEMEASUREFUNC_OFFSET))(arg, nullptr);
		}

		::System::Void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode* arg, ::System::Single arg, ::UnityEngine::Yoga::YogaMeasureMode* arg, ::System::Single arg, ::UnityEngine::Yoga::YogaMeasureMode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEMEASUREINVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode* arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEBASELINEINVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void YGNodeSetHasNewLayout(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESETHASNEWLAYOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean YGNodeGetHasNewLayout(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEGETHASNEWLAYOUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Yoga::YogaDirection* YGNodeStyleGetDirection(::System::Int32 arg)
		{
			return (return (::UnityEngine::Yoga::YogaDirection*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLEGETDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void YGNodeStyleSetFlexDirection(::System::Int32 arg, ::UnityEngine::Yoga::YogaFlexDirection* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaFlexDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXDIRECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetJustifyContent(::System::Int32 arg, ::UnityEngine::Yoga::YogaJustify* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaJustify*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETJUSTIFYCONTENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetAlignContent(::System::Int32 arg, ::UnityEngine::Yoga::YogaAlign* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaAlign*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETALIGNCONTENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetAlignItems(::System::Int32 arg, ::UnityEngine::Yoga::YogaAlign* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaAlign*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETALIGNITEMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetAlignSelf(::System::Int32 arg, ::UnityEngine::Yoga::YogaAlign* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaAlign*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETALIGNSELF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetPositionType(::System::Int32 arg, ::UnityEngine::Yoga::YogaPositionType* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaPositionType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPOSITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetFlexWrap(::System::Int32 arg, ::UnityEngine::Yoga::YogaWrap* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaWrap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXWRAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetOverflow(::System::Int32 arg, ::UnityEngine::Yoga::YogaOverflow* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaOverflow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETOVERFLOW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetDisplay(::System::Int32 arg, ::UnityEngine::Yoga::YogaDisplay* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaDisplay*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETDISPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetFlex(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetFlexGrow(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXGROW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetFlexShrink(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXSHRINK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetFlexBasis(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXBASIS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetFlexBasisPercent(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXBASISPERCENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetFlexBasisAuto(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETFLEXBASISAUTO_OFFSET))(arg, nullptr);
		}

		::System::Void YGNodeStyleSetWidth(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetWidthPercent(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETWIDTHPERCENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetWidthAuto(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETWIDTHAUTO_OFFSET))(arg, nullptr);
		}

		::System::Void YGNodeStyleSetHeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetHeightPercent(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETHEIGHTPERCENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetHeightAuto(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETHEIGHTAUTO_OFFSET))(arg, nullptr);
		}

		::System::Void YGNodeStyleSetMinWidth(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMINWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMinWidthPercent(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMINWIDTHPERCENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMinHeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMINHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMinHeightPercent(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMINHEIGHTPERCENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMaxWidth(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMAXWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMaxWidthPercent(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMAXWIDTHPERCENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMaxHeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMAXHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMaxHeightPercent(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMAXHEIGHTPERCENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetPosition(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetPositionPercent(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPOSITIONPERCENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMargin(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMARGIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMarginPercent(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMARGINPERCENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetMarginAuto(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETMARGINAUTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetPadding(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPADDING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetPaddingPercent(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETPADDINGPERCENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void YGNodeStyleSetBorder(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESTYLESETBORDER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single YGNodeLayoutGetLeft(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETLEFT_OFFSET))(arg, nullptr);
		}

		::System::Single YGNodeLayoutGetTop(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETTOP_OFFSET))(arg, nullptr);
		}

		::System::Single YGNodeLayoutGetRight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETRIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single YGNodeLayoutGetBottom(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Single YGNodeLayoutGetWidth(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single YGNodeLayoutGetHeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single YGNodeLayoutGetMargin(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETMARGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Single YGNodeLayoutGetPadding(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETPADDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Single YGNodeLayoutGetBorder(::System::Int32 arg, ::UnityEngine::Yoga::YogaEdge* arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::UnityEngine::Yoga::YogaEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETBORDER_OFFSET))(arg, arg, nullptr);
		}

	};
}

