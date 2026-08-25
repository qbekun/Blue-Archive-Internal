#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLINTATTRIBUTEDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA423D90)
#define UNITYENGINE_UIELEMENTS_UXMLINTATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0xA423E20)
#define UNITYENGINE_UIELEMENTS_UXMLINTATTRIBUTEDESCRIPTION_TRYGETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0xA423FC0)
#define UNITYENGINE_UIELEMENTS_UXMLINTATTRIBUTEDESCRIPTION_CONVERTVALUETOINT_OFFSET UNITYSDK_OFFSET(0xA424170)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlIntAttributeDescription_TypeDefinitionIndex = 30687;

	class UxmlIntAttributeDescription : public GenericDesktop
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLINTATTRIBUTEDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLINTATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLINTATTRIBUTEDESCRIPTION_TRYGETVALUEFROMBAG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ConvertValueToInt(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLINTATTRIBUTEDESCRIPTION_CONVERTVALUETOINT_OFFSET))(str, arg, nullptr);
		}

	};
}

