#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class RenderChain; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::UIR { class ChainBuilderStats&; }
namespace UnityEngine::UIElements::UIR::Implementation { class UIRTextUpdatePainter; }
namespace UnityEngine::UIElements::UIR { class UIRenderDevice; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::UIElements::UIR::Implementation { class ClipMethod; }

#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONCLIPPINGCHANGED_OFFSET UNITYSDK_OFFSET(0xA354A50)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONOPACITYCHANGED_OFFSET UNITYSDK_OFFSET(0xA355190)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONCOLORCHANGED_OFFSET UNITYSDK_OFFSET(0xA355770)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONTRANSFORMORSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA3559A0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONVISUALSCHANGED_OFFSET UNITYSDK_OFFSET(0xA355EB0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSREGENTEXT_OFFSET UNITYSDK_OFFSET(0xA356470)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_GETTRANSFORMIDTRANSFORMINFO_OFFSET UNITYSDK_OFFSET(0xA3567D0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_GETCLIPRECTIDCLIPINFO_OFFSET UNITYSDK_OFFSET(0xA356910)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONCHILDADDED_OFFSET UNITYSDK_OFFSET(0xA356B40)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONCHILDREMOVING_OFFSET UNITYSDK_OFFSET(0xA358150)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONCLIPPINGCHANGED_OFFSET UNITYSDK_OFFSET(0xA354B30)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONOPACITYCHANGED_OFFSET UNITYSDK_OFFSET(0xA3552A0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_ONCOLORCHANGED_OFFSET UNITYSDK_OFFSET(0xA3557E0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONTRANSFORMORSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA355A50)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONVISUALSCHANGED_OFFSET UNITYSDK_OFFSET(0xA356060)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_UPDATETEXTCORESETTINGS_OFFSET UNITYSDK_OFFSET(0xA3588F0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_ISELEMENTHIERARCHYHIDDEN_OFFSET UNITYSDK_OFFSET(0xA355FB0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_GETLASTDEEPESTCHILD_OFFSET UNITYSDK_OFFSET(0xA3573D0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DETERMINESELFCLIPMETHOD_OFFSET UNITYSDK_OFFSET(0xA3587F0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_UPDATELOCALFLIPSWINDING_OFFSET UNITYSDK_OFFSET(0xA3572A0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_UPDATEWORLDFLIPSWINDING_OFFSET UNITYSDK_OFFSET(0xA358EC0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_UPDATEZEROSCALING_OFFSET UNITYSDK_OFFSET(0xA358D30)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_NEEDSTRANSFORMID_OFFSET UNITYSDK_OFFSET(0xA357450)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_NEEDSCOLORID_OFFSET UNITYSDK_OFFSET(0xA357490)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_INITCOLORIDS_OFFSET UNITYSDK_OFFSET(0xA3574C0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_SETCOLORVALUES_OFFSET UNITYSDK_OFFSET(0xA357AB0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA358F20)

namespace UnityEngine::UIElements::UIR::Implementation
{
	inline static constexpr unsigned int RenderEvents_TypeDefinitionIndex = 30786;

	class RenderEvents : public Il2CppObject
	{
	public:
		::System::Single VisibilityTreshold; // 0x0

		::System::Void ProcessOnClippingChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONCLIPPINGCHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONOPACITYCHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessOnColorChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONCOLORCHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONTRANSFORMORSIZECHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessOnVisualsChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSONVISUALSCHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessRegenText(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter* arg, ::UnityEngine::UIElements::UIR::UIRenderDevice* arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_PROCESSREGENTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetTransformIDTransformInfo(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_GETTRANSFORMIDTRANSFORMINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* GetClipRectIDClipInfo(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_GETCLIPRECTIDCLIPINFO_OFFSET))(arg, nullptr);
		}

		::System::UInt32 DepthFirstOnChildAdded(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::UInt32(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONCHILDADDED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 DepthFirstOnChildRemoving(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::UInt32(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONCHILDREMOVING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DepthFirstOnClippingChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::UIElements::UIR::UIRenderDevice* arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONCLIPPINGCHANGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DepthFirstOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::System::Single arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::System::Boolean arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::System::Single, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::System::Boolean, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONOPACITYCHANGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnColorChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_ONCOLORCHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DepthFirstOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::UnityEngine::UIElements::UIR::UIRenderDevice* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::System::Boolean, ::System::Boolean, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONTRANSFORMORSIZECHANGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DepthFirstOnVisualsChanged(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DEPTHFIRSTONVISUALSCHANGED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean UpdateTextCoreSettings(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_UPDATETEXTCORESETTINGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsElementHierarchyHidden(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_ISELEMENTHIERARCHYHIDDEN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* GetLastDeepestChild(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_GETLASTDEEPESTCHILD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::Implementation::ClipMethod* DetermineSelfClipMethod(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::UIR::Implementation::ClipMethod*(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_DETERMINESELFCLIPMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UpdateLocalFlipsWinding(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_UPDATELOCALFLIPSWINDING_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWorldFlipsWinding(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_UPDATEWORLDFLIPSWINDING_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateZeroScaling(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_UPDATEZEROSCALING_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedsTransformID(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_NEEDSTRANSFORMID_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedsColorID(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_NEEDSCOLORID_OFFSET))(arg, nullptr);
		}

		::System::Boolean InitColorIDs(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_INITCOLORIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColorValues(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_SETCOLORVALUES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_RENDEREVENTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

