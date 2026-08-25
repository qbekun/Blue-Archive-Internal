#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IBinding; }

#define UNITYENGINE_UIELEMENTS_BINDABLEELEMENT_GET_BINDING_OFFSET UNITYSDK_OFFSET(0xA30DAC0)
#define UNITYENGINE_UIELEMENTS_BINDABLEELEMENT_SET_BINDINGPATH_OFFSET UNITYSDK_OFFSET(0xA30DAD0)
#define UNITYENGINE_UIELEMENTS_BINDABLEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA30DAF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BindableElement_TypeDefinitionIndex = 30067;

	class BindableElement : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::IBinding* _binding_k__BackingField; // 0x3B0
		::System::String* _bindingPath_k__BackingField; // 0x3B8

		::UnityEngine::UIElements::IBinding* get_binding()
		{
			return (return (::UnityEngine::UIElements::IBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BINDABLEELEMENT_GET_BINDING_OFFSET))(nullptr);
		}

		::System::Void set_bindingPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BINDABLEELEMENT_SET_BINDINGPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BINDABLEELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

