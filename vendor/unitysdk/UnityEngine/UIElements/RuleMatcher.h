#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleComplexSelector; }

#define UNITYENGINE_UIELEMENTS_RULEMATCHER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA384F60)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RuleMatcher_TypeDefinitionIndex = 30225;

	class RuleMatcher : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheet* sheet; // 0x10
		::UnityEngine::UIElements::StyleComplexSelector* complexSelector; // 0x18

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RULEMATCHER_TOSTRING_OFFSET))(nullptr);
		}

	};
}

