#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class UxmlStringAttributeDescription; }

#define UNITYENGINE_UIELEMENTS_UXMLTEMPLATETRAITS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA422D50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlTemplateTraits_TypeDefinitionIndex = 30674;

	class UxmlTemplateTraits : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Name; // 0x18
		::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Path; // 0x20
		::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Src; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTEMPLATETRAITS_.CTOR_OFFSET))(nullptr);
		}

	};
}

