#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class StyleKeyword; }

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleValueManaged_TypeDefinitionIndex = 30815;

	class StyleValueManaged : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheets::StylePropertyId* id; // 0x10
		::UnityEngine::UIElements::StyleKeyword* keyword; // 0x14
		::System::Object* value; // 0x18

	};
}

