#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLFLOATATTRIBUTEDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4239B0)
#define UNITYENGINE_UIELEMENTS_UXMLFLOATATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0xA423A40)
#define UNITYENGINE_UIELEMENTS_UXMLFLOATATTRIBUTEDESCRIPTION_CONVERTVALUETOFLOAT_OFFSET UNITYSDK_OFFSET(0xA423BE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlFloatAttributeDescription_TypeDefinitionIndex = 30685;

	class UxmlFloatAttributeDescription : public Button
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLFLOATATTRIBUTEDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Single GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLFLOATATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ConvertValueToFloat(::System::String* str, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLFLOATATTRIBUTEDESCRIPTION_CONVERTVALUETOFLOAT_OFFSET))(str, arg, nullptr);
		}

	};
}

