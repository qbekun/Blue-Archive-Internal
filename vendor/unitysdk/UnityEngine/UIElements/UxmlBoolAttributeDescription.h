#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLBOOLATTRIBUTEDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA424600)
#define UNITYENGINE_UIELEMENTS_UXMLBOOLATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0xA424690)
#define UNITYENGINE_UIELEMENTS_UXMLBOOLATTRIBUTEDESCRIPTION_TRYGETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0xA424830)
#define UNITYENGINE_UIELEMENTS_UXMLBOOLATTRIBUTEDESCRIPTION_CONVERTVALUETOBOOL_OFFSET UNITYSDK_OFFSET(0xA4249E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlBoolAttributeDescription_TypeDefinitionIndex = 30691;

	class UxmlBoolAttributeDescription : public UsagePage
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLBOOLATTRIBUTEDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLBOOLATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLBOOLATTRIBUTEDESCRIPTION_TRYGETVALUEFROMBAG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ConvertValueToBool(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLBOOLATTRIBUTEDESCRIPTION_CONVERTVALUETOBOOL_OFFSET))(str, arg, nullptr);
		}

	};
}

