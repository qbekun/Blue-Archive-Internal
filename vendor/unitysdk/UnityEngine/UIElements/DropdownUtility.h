#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IGenericMenu; }

#define UNITYENGINE_UIELEMENTS_DROPDOWNUTILITY_CREATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0xA3150F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DropdownUtility_TypeDefinitionIndex = 30090;

	class DropdownUtility : public Il2CppObject
	{
	public:
		Il2CppObject* MakeDropdownFunc; // 0x0

		::UnityEngine::UIElements::IGenericMenu* CreateDropdown()
		{
			return (return (::UnityEngine::UIElements::IGenericMenu*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNUTILITY_CREATEDROPDOWN_OFFSET))(nullptr);
		}

	};
}

