#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }

#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_ROOTELEMENT_OFFSET UNITYSDK_OFFSET(0xA396CE0)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_BINDABLEELEMENT_OFFSET UNITYSDK_OFFSET(0xA396CF0)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_BINDABLEELEMENT_OFFSET UNITYSDK_OFFSET(0xA396D00)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xA396D10)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xA396D20)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA396D30)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA396D40)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xA396D50)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xA396D60)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_ISDRAGGHOST_OFFSET UNITYSDK_OFFSET(0xA396D70)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_ISDRAGGHOST_OFFSET UNITYSDK_OFFSET(0xA396D80)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_ADD_ONGEOMETRYCHANGED_OFFSET UNITYSDK_OFFSET(0xA396D90)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_REMOVE_ONGEOMETRYCHANGED_OFFSET UNITYSDK_OFFSET(0xA396E30)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA396ED0)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_INIT_OFFSET UNITYSDK_OFFSET(0xA396F60)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_PREATTACHELEMENT_OFFSET UNITYSDK_OFFSET(0xA396F70)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_DETACHELEMENT_OFFSET UNITYSDK_OFFSET(0xA397030)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xA397150)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SETDRAGGHOST_OFFSET UNITYSDK_OFFSET(0xA397270)
#define UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_ONGEOMETRYCHANGED_OFFSET UNITYSDK_OFFSET(0xA397430)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ReusableCollectionItem_TypeDefinitionIndex = 30289;

	class ReusableCollectionItem : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* _bindableElement_k__BackingField; // 0x10
		Il2CppObject* _animator_k__BackingField; // 0x18
		::System::Int32 _index_k__BackingField; // 0x20
		::System::Int32 _id_k__BackingField; // 0x24
		::System::Boolean _isDragGhost_k__BackingField; // 0x28
		Il2CppObject* onGeometryChanged; // 0x30
		Il2CppObject* m_GeometryChangedEventCallback; // 0x38

		::UnityEngine::UIElements::VisualElement* get_rootElement()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_ROOTELEMENT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_bindableElement()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_BINDABLEELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_bindableElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_BINDABLEELEMENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_animator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void set_animator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_ANIMATOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDragGhost()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_GET_ISDRAGGHOST_OFFSET))(nullptr);
		}

		::System::Void set_isDragGhost(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SET_ISDRAGGHOST_OFFSET))(arg, nullptr);
		}

		::System::Void add_onGeometryChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_ADD_ONGEOMETRYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onGeometryChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_REMOVE_ONGEOMETRYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void PreAttachElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_PREATTACHELEMENT_OFFSET))(nullptr);
		}

		::System::Void DetachElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_DETACHELEMENT_OFFSET))(nullptr);
		}

		::System::Void SetSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetDragGhost(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_SETDRAGGHOST_OFFSET))(arg, nullptr);
		}

		::System::Void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLECOLLECTIONITEM_ONGEOMETRYCHANGED_OFFSET))(arg, nullptr);
		}

	};
}

