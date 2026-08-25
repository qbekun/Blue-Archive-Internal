#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IBinding; }

#define UNITYENGINE_UIELEMENTS_IBINDABLE_GET_BINDING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IBINDABLE_SET_BINDINGPATH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IBindable_TypeDefinitionIndex = 30306;

	class IBindable : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::IBinding* get_binding()
		{
			return (return (::UnityEngine::UIElements::IBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IBINDABLE_GET_BINDING_OFFSET))(nullptr);
		}

		::System::Void set_bindingPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IBINDABLE_SET_BINDINGPATH_OFFSET))(str, nullptr);
		}

	};
}

