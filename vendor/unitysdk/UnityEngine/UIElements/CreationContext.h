#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class CreationContext; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VisualTreeAsset; }

#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xA42AE70)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xA42AE80)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GET_VISUALTREEASSET_OFFSET UNITYSDK_OFFSET(0xA42AE90)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_SET_VISUALTREEASSET_OFFSET UNITYSDK_OFFSET(0xA42AEA0)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GET_SLOTINSERTIONPOINTS_OFFSET UNITYSDK_OFFSET(0xA42AEB0)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_SET_SLOTINSERTIONPOINTS_OFFSET UNITYSDK_OFFSET(0xA42AEC0)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GET_ATTRIBUTEOVERRIDES_OFFSET UNITYSDK_OFFSET(0xA42AED0)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_SET_ATTRIBUTEOVERRIDES_OFFSET UNITYSDK_OFFSET(0xA42AEE0)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA427EA0)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA42AEF0)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA42AF90)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA42B0D0)
#define UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA42B1E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CreationContext_TypeDefinitionIndex = 30711;

	class CreationContext : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::CreationContext* Default; // 0x0
		::UnityEngine::UIElements::VisualElement* _target_k__BackingField; // 0x10
		::UnityEngine::UIElements::VisualTreeAsset* _visualTreeAsset_k__BackingField; // 0x18
		Il2CppObject* _slotInsertionPoints_k__BackingField; // 0x20
		Il2CppObject* _attributeOverrides_k__BackingField; // 0x28

		::UnityEngine::UIElements::VisualElement* get_target()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_target(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualTreeAsset* get_visualTreeAsset()
		{
			return (return (::UnityEngine::UIElements::VisualTreeAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GET_VISUALTREEASSET_OFFSET))(nullptr);
		}

		::System::Void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualTreeAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_SET_VISUALTREEASSET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_slotInsertionPoints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GET_SLOTINSERTIONPOINTS_OFFSET))(nullptr);
		}

		::System::Void set_slotInsertionPoints(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_SET_SLOTINSERTIONPOINTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_attributeOverrides()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GET_ATTRIBUTEOVERRIDES_OFFSET))(nullptr);
		}

		::System::Void set_attributeOverrides(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_SET_ATTRIBUTEOVERRIDES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::UIElements::VisualTreeAsset* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::UIElements::VisualTreeAsset*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CREATIONCONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

