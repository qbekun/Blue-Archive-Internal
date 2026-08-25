#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class PanelSettings; }
namespace UnityEngine::UIElements { class UIDocument; }
namespace UnityEngine::UIElements { class UIDocumentList; }
namespace UnityEngine::UIElements { class VisualTreeAsset; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_PANELSETTINGS_OFFSET UNITYSDK_OFFSET(0xA4038E0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_SET_PANELSETTINGS_OFFSET UNITYSDK_OFFSET(0xA4038F0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_PARENTUI_OFFSET UNITYSDK_OFFSET(0xA403C20)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_SET_PARENTUI_OFFSET UNITYSDK_OFFSET(0xA403C30)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_VISUALTREEASSET_OFFSET UNITYSDK_OFFSET(0xA403C40)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_SET_VISUALTREEASSET_OFFSET UNITYSDK_OFFSET(0xA403C50)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_ROOTVISUALELEMENT_OFFSET UNITYSDK_OFFSET(0xA4038D0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_FIRSTCHILDINSERINDEX_OFFSET UNITYSDK_OFFSET(0xA404190)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA4041A0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA4041B0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_APPLYSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA4041E0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4042C0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA404350)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA404430)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_SETUPFROMHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA404360)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_FINDUIDOCUMENTPARENT_OFFSET UNITYSDK_OFFSET(0xA404560)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_RESET_OFFSET UNITYSDK_OFFSET(0xA404620)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_ADDCHILDANDINSERTCONTENTTOVISUALTREE_OFFSET UNITYSDK_OFFSET(0xA404720)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0xA4044F0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_RECREATEUI_OFFSET UNITYSDK_OFFSET(0xA403C80)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_SETUPROOTCLASSLIST_OFFSET UNITYSDK_OFFSET(0xA404910)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_ADDROOTVISUALELEMENTTOTREE_OFFSET UNITYSDK_OFFSET(0xA4041F0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_REMOVEFROMHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA404800)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA4049A0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0xA4049E0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA404D40)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENT_REACTTOHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA404C30)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIDocument_TypeDefinitionIndex = 30569;

	class UIDocument : public Il2CppObject
	{
	public:
		::System::String* k_RootStyleClassName; // 0x0
		::System::String* k_VisualElementNameSuffix; // 0x0
		::System::Int32 k_DefaultSortingOrder; // 0x0
		::System::Int32 s_CurrentUIDocumentCounter; // 0x0
		::System::Int32 m_UIDocumentCreationIndex; // 0x18
		::UnityEngine::UIElements::PanelSettings* m_PanelSettings; // 0x20
		::UnityEngine::UIElements::PanelSettings* m_PreviousPanelSettings; // 0x28
		::UnityEngine::UIElements::UIDocument* m_ParentUI; // 0x30
		::UnityEngine::UIElements::UIDocumentList* m_ChildrenContent; // 0x38
		Il2CppObject* m_ChildrenContentCopy; // 0x40
		::UnityEngine::UIElements::VisualTreeAsset* sourceAsset; // 0x48
		::UnityEngine::UIElements::VisualElement* m_RootVisualElement; // 0x50
		::System::Int32 m_FirstChildInsertIndex; // 0x58
		::System::Single m_SortingOrder; // 0x5C

		::UnityEngine::UIElements::PanelSettings* get_panelSettings()
		{
			return (return (::UnityEngine::UIElements::PanelSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_PANELSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_panelSettings(::UnityEngine::UIElements::PanelSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PanelSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_SET_PANELSETTINGS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIDocument* get_parentUI()
		{
			return (return (::UnityEngine::UIElements::UIDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_PARENTUI_OFFSET))(nullptr);
		}

		::System::Void set_parentUI(::UnityEngine::UIElements::UIDocument* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIDocument*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_SET_PARENTUI_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualTreeAsset* get_visualTreeAsset()
		{
			return (return (::UnityEngine::UIElements::VisualTreeAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_VISUALTREEASSET_OFFSET))(nullptr);
		}

		::System::Void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualTreeAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_SET_VISUALTREEASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_rootVisualElement()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_ROOTVISUALELEMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_firstChildInserIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_FIRSTCHILDINSERINDEX_OFFSET))(nullptr);
		}

		::System::Single get_sortingOrder()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_sortingOrder(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void ApplySortingOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_APPLYSORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetupFromHierarchy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_SETUPFROMHIERARCHY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIDocument* FindUIDocumentParent()
		{
			return (return (::UnityEngine::UIElements::UIDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_FINDUIDOCUMENTPARENT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_RESET_OFFSET))(nullptr);
		}

		::System::Void AddChildAndInsertContentToVisualTree(::UnityEngine::UIElements::UIDocument* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIDocument*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_ADDCHILDANDINSERTCONTENTTOVISUALTREE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveChild(::UnityEngine::UIElements::UIDocument* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIDocument*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_REMOVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Void RecreateUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_RECREATEUI_OFFSET))(nullptr);
		}

		::System::Void SetupRootClassList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_SETUPROOTCLASSLIST_OFFSET))(nullptr);
		}

		::System::Void AddRootVisualElementToTree()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_ADDROOTVISUALELEMENTTOTREE_OFFSET))(nullptr);
		}

		::System::Void RemoveFromHierarchy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_REMOVEFROMHIERARCHY_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnTransformChildrenChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_ONTRANSFORMCHILDRENCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Void ReactToHierarchyChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENT_REACTTOHIERARCHYCHANGED_OFFSET))(nullptr);
		}

	};
}

