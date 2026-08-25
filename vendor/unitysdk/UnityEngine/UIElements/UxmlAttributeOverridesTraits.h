#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class UxmlStringAttributeDescription; }

#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESTRAITS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA422F80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlAttributeOverridesTraits_TypeDefinitionIndex = 30676;

	class UxmlAttributeOverridesTraits : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ElementName; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESTRAITS_.CTOR_OFFSET))(nullptr);
		}

	};
}

