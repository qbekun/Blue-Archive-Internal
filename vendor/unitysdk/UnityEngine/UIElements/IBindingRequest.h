#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_IBINDINGREQUEST_BIND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IBindingRequest_TypeDefinitionIndex = 30278;

	class IBindingRequest : public Il2CppObject
	{
	public:
		::System::Void Bind(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IBINDINGREQUEST_BIND_OFFSET))(arg, nullptr);
		}

	};
}

