#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLLONGATTRIBUTEDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4242C0)
#define UNITYENGINE_UIELEMENTS_UXMLLONGATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET UNITYSDK_OFFSET(0xA424350)
#define UNITYENGINE_UIELEMENTS_UXMLLONGATTRIBUTEDESCRIPTION_CONVERTVALUETOLONG_OFFSET UNITYSDK_OFFSET(0xA4244F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlLongAttributeDescription_TypeDefinitionIndex = 30689;

	class UxmlLongAttributeDescription : public Simulation
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLLONGATTRIBUTEDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::System::Int64(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLLONGATTRIBUTEDESCRIPTION_GETVALUEFROMBAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 ConvertValueToLong(::System::String* str, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLLONGATTRIBUTEDESCRIPTION_CONVERTVALUETOLONG_OFFSET))(str, arg, nullptr);
		}

	};
}

