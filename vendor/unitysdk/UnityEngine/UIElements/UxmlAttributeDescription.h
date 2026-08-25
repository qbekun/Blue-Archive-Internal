#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class UxmlTypeRestriction; }
namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4230B0)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA4230F0)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA423100)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_OBSOLETENAMES_OFFSET UNITYSDK_OFFSET(0xA423110)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA423160)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_TYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0xA423170)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_USE_OFFSET UNITYSDK_OFFSET(0xA423180)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_RESTRICTION_OFFSET UNITYSDK_OFFSET(0xA423190)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_TRYGETVALUEFROMBAGASSTRING_OFFSET UNITYSDK_OFFSET(0xA4231A0)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_TRYGETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlAttributeDescription_TypeDefinitionIndex = 30680;

	class UxmlAttributeDescription : public Il2CppObject
	{
	public:
		::System::String* _name_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* m_ObsoleteNames; // 0x18
		::System::String* _type_k__BackingField; // 0x20
		::System::String* _typeNamespace_k__BackingField; // 0x28
		Use* _use_k__BackingField; // 0x30
		::UnityEngine::UIElements::UxmlTypeRestriction* _restriction_k__BackingField; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_obsoleteNames(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_OBSOLETENAMES_OFFSET))(arg, nullptr);
		}

		::System::Void set_type(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_TYPE_OFFSET))(str, nullptr);
		}

		::System::Void set_typeNamespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_TYPENAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Void set_use(Use* arg)
		{
			((::System::Void(*)(Use*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_USE_OFFSET))(arg, nullptr);
		}

		::System::Void set_restriction(::UnityEngine::UIElements::UxmlTypeRestriction* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UxmlTypeRestriction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_SET_RESTRICTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_TRYGETVALUEFROMBAGASSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, Il2CppObject*, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_TRYGETVALUEFROMBAG_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

