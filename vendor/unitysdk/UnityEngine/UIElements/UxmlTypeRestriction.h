#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class UxmlTypeRestriction; }

#define UNITYENGINE_UIELEMENTS_UXMLTYPERESTRICTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA424BE0)
#define UNITYENGINE_UIELEMENTS_UXMLTYPERESTRICTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA424BF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlTypeRestriction_TypeDefinitionIndex = 30698;

	class UxmlTypeRestriction : public Il2CppObject
	{
	public:
		::System::Boolean Equals(::UnityEngine::UIElements::UxmlTypeRestriction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UxmlTypeRestriction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTYPERESTRICTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTYPERESTRICTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

