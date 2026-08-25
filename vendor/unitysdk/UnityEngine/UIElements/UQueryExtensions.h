#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_UQUERYEXTENSIONS_Q_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYEXTENSIONS_Q_OFFSET UNITYSDK_OFFSET(0xA3854B0)
#define UNITYENGINE_UIELEMENTS_UQUERYEXTENSIONS_QUERY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYEXTENSIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA385A00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UQueryExtensions_TypeDefinitionIndex = 30238;

	class UQueryExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* SingleElementEmptyQuery; // 0x0
		Il2CppObject* SingleElementNameQuery; // 0x10
		Il2CppObject* SingleElementClassQuery; // 0x20
		Il2CppObject* SingleElementNameAndClassQuery; // 0x30
		Il2CppObject* SingleElementTypeQuery; // 0x40
		Il2CppObject* SingleElementTypeAndNameQuery; // 0x50
		Il2CppObject* SingleElementTypeAndClassQuery; // 0x60
		Il2CppObject* SingleElementTypeAndNameAndClassQuery; // 0x70

		Il2CppObject* Q(::UnityEngine::UIElements::VisualElement* arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::VisualElement*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYEXTENSIONS_Q_OFFSET))(arg, str, str, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Q(::UnityEngine::UIElements::VisualElement* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElement*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYEXTENSIONS_Q_OFFSET))(arg, str, str, nullptr);
		}

		Il2CppObject* Query(::UnityEngine::UIElements::VisualElement* arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::VisualElement*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYEXTENSIONS_QUERY_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYEXTENSIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

