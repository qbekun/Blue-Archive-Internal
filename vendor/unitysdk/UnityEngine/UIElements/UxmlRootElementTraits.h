#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class UxmlStringAttributeDescription; }

#define UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTTRAITS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA422870)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlRootElementTraits_TypeDefinitionIndex = 30670;

	class UxmlRootElementTraits : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Name; // 0x18
		::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Class; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTTRAITS_.CTOR_OFFSET))(nullptr);
		}

	};
}

