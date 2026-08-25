#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_TYPEDUXMLATTRIBUTEDESCRIPTION`1_GETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TYPEDUXMLATTRIBUTEDESCRIPTION`1_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TYPEDUXMLATTRIBUTEDESCRIPTION`1_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TYPEDUXMLATTRIBUTEDESCRIPTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TypedUxmlAttributeDescription`1_TypeDefinitionIndex = 30681;

	class TypedUxmlAttributeDescription`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _defaultValue_k__BackingField; // 0x0

		Il2CppObject* GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TYPEDUXMLATTRIBUTEDESCRIPTION`1_GETVALUEFROMBAG_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_defaultValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TYPEDUXMLATTRIBUTEDESCRIPTION`1_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_defaultValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TYPEDUXMLATTRIBUTEDESCRIPTION`1_SET_DEFAULTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TYPEDUXMLATTRIBUTEDESCRIPTION`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

