#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class TemplateContainer; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VisualElementAsset; }
namespace UnityEngine::UIElements { class CreationContext; }
namespace UnityEngine::UIElements { class VisualTreeAsset; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_IMPORTEDWITHERRORS_OFFSET UNITYSDK_OFFSET(0xA426B30)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_IMPORTEDWITHERRORS_OFFSET UNITYSDK_OFFSET(0xA426B40)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_IMPORTEDWITHWARNINGS_OFFSET UNITYSDK_OFFSET(0xA426B50)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_IMPORTEDWITHWARNINGS_OFFSET UNITYSDK_OFFSET(0xA426B60)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GETNEXTCHILDSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0xA426B70)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_TEMPLATEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0xA426BE0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_STYLESHEETS_OFFSET UNITYSDK_OFFSET(0xA426CB0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_VISUALELEMENTASSETS_OFFSET UNITYSDK_OFFSET(0xA426D80)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_VISUALELEMENTASSETS_OFFSET UNITYSDK_OFFSET(0xA426D90)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_TEMPLATEASSETS_OFFSET UNITYSDK_OFFSET(0xA426DA0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_TEMPLATEASSETS_OFFSET UNITYSDK_OFFSET(0xA426DB0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0xA426DC0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_SLOTS_OFFSET UNITYSDK_OFFSET(0xA426DD0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_CONTENTCONTAINERID_OFFSET UNITYSDK_OFFSET(0xA426DE0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_CONTENTCONTAINERID_OFFSET UNITYSDK_OFFSET(0xA426DF0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA426E00)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA4277A0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET UNITYSDK_OFFSET(0xA4277E0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET UNITYSDK_OFFSET(0xA4277F0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET UNITYSDK_OFFSET(0xA427830)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET UNITYSDK_OFFSET(0xA427860)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET UNITYSDK_OFFSET(0xA426F80)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONESETUPRECURSIVELY_OFFSET UNITYSDK_OFFSET(0xA427F40)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_COMPAREFORORDER_OFFSET UNITYSDK_OFFSET(0xA429410)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_TRYGETSLOTINSERTIONPOINT_OFFSET UNITYSDK_OFFSET(0xA429340)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_RESOLVETEMPLATE_OFFSET UNITYSDK_OFFSET(0xA429450)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CREATE_OFFSET UNITYSDK_OFFSET(0xA428B20)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_ASSIGNCLASSLISTFROMASSETTOELEMENT_OFFSET UNITYSDK_OFFSET(0xA427A70)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_ASSIGNSTYLESHEETFROMASSETTOELEMENT_OFFSET UNITYSDK_OFFSET(0xA427AE0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xA4298A0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xA4298B0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4298C0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4298D0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET__CREATE_G__CREATEERROR|49_0_OFFSET UNITYSDK_OFFSET(0xA429750)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeAsset_TypeDefinitionIndex = 30710;

	class VisualTreeAsset : public Il2CppObject
	{
	public:
		::System::String* LinkedVEAInTemplatePropertyName; // 0x0
		::System::Boolean m_ImportedWithErrors; // 0x18
		::System::Boolean m_ImportedWithWarnings; // 0x19
		Il2CppObject* s_TemporarySlotInsertionPoints; // 0x8
		Il2CppObject* m_Usings; // 0x20
		::UnityEngine::UIElements::StyleSheet* inlineSheet; // 0x28
		Il2CppObject* m_VisualElementAssets; // 0x30
		Il2CppObject* m_TemplateAssets; // 0x38
		Il2CppObject* m_Slots; // 0x40
		::System::Int32 m_ContentContainerId; // 0x48
		::System::Int32 m_ContentHash; // 0x4C

		::System::Boolean get_importedWithErrors()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_IMPORTEDWITHERRORS_OFFSET))(nullptr);
		}

		::System::Void set_importedWithErrors(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_IMPORTEDWITHERRORS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_importedWithWarnings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_IMPORTEDWITHWARNINGS_OFFSET))(nullptr);
		}

		::System::Void set_importedWithWarnings(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_IMPORTEDWITHWARNINGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNextChildSerialNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GETNEXTCHILDSERIALNUMBER_OFFSET))(nullptr);
		}

		Il2CppObject* get_templateDependencies()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_TEMPLATEDEPENDENCIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_stylesheets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_STYLESHEETS_OFFSET))(nullptr);
		}

		Il2CppObject* get_visualElementAssets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_VISUALELEMENTASSETS_OFFSET))(nullptr);
		}

		::System::Void set_visualElementAssets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_VISUALELEMENTASSETS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_templateAssets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_TEMPLATEASSETS_OFFSET))(nullptr);
		}

		::System::Void set_templateAssets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_TEMPLATEASSETS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_slots()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_SLOTS_OFFSET))(nullptr);
		}

		::System::Void set_slots(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_SLOTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_contentContainerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_CONTENTCONTAINERID_OFFSET))(nullptr);
		}

		::System::Void set_contentContainerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_CONTENTCONTAINERID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::TemplateContainer* Instantiate()
		{
			return (return (::UnityEngine::UIElements::TemplateContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_INSTANTIATE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TemplateContainer* Instantiate(::System::String* str)
		{
			return (return (::UnityEngine::UIElements::TemplateContainer*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_INSTANTIATE_OFFSET))(str, nullptr);
		}

		::UnityEngine::UIElements::TemplateContainer* CloneTree()
		{
			return (return (::UnityEngine::UIElements::TemplateContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TemplateContainer* CloneTree(::System::String* str)
		{
			return (return (::UnityEngine::UIElements::TemplateContainer*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET))(str, nullptr);
		}

		::System::Void CloneTree(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET))(arg, nullptr);
		}

		::System::Void CloneTree(::UnityEngine::UIElements::VisualElement* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CloneTree(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONETREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* CloneSetupRecursively(::UnityEngine::UIElements::VisualElementAsset* arg, Il2CppObject* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElementAsset*, Il2CppObject*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CLONESETUPRECURSIVELY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CompareForOrder(::UnityEngine::UIElements::VisualElementAsset* arg, ::UnityEngine::UIElements::VisualElementAsset* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElementAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_COMPAREFORORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSlotInsertionPoint(::System::Int32 arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_TRYGETSLOTINSERTIONPOINT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualTreeAsset* ResolveTemplate(::System::String* str)
		{
			return (return (::UnityEngine::UIElements::VisualTreeAsset*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_RESOLVETEMPLATE_OFFSET))(str, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::VisualElementAsset* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_ASSIGNCLASSLISTFROMASSETTOELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_ASSIGNSTYLESHEETFROMASSETTOELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_contentHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_GET_CONTENTHASH_OFFSET))(nullptr);
		}

		::System::Void set_contentHash(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_SET_CONTENTHASH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* _Create_g__CreateError|49_0(<>c__DisplayClass49_0&* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(<>c__DisplayClass49_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET__CREATE_G__CREATEERROR|49_0_OFFSET))(arg, nullptr);
		}

	};
}

