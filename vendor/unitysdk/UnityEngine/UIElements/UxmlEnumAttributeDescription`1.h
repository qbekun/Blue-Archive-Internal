#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLENUMATTRIBUTEDESCRIPTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UXMLENUMATTRIBUTEDESCRIPTION`1_GETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UXMLENUMATTRIBUTEDESCRIPTION`1_TRYGETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UXMLENUMATTRIBUTEDESCRIPTION`1_CONVERTVALUETOENUM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlEnumAttributeDescription`1_TypeDefinitionIndex = 30693;

	class UxmlEnumAttributeDescription`1 : public HIDDeviceDescriptorBuilder
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLENUMATTRIBUTEDESCRIPTION`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLENUMATTRIBUTEDESCRIPTION`1_GETVALUEFROMBAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLENUMATTRIBUTEDESCRIPTION`1_TRYGETVALUEFROMBAG_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ConvertValueToEnum(::System::String* str, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLENUMATTRIBUTEDESCRIPTION`1_CONVERTVALUETOENUM_OFFSET))(str, arg, nullptr);
		}

	};
}

