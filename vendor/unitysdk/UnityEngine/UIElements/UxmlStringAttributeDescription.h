#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLSTRINGATTRIBUTEDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA422960)
#define UNITYENGINE_UIELEMENTS_UXMLSTRINGATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0xA423770)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlStringAttributeDescription_TypeDefinitionIndex = 30683;

	class UxmlStringAttributeDescription : public <>c__DisplayClass12_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLSTRINGATTRIBUTEDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLSTRINGATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET))(arg, arg, nullptr);
		}

	};
}

