#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine { class Color; }

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleValue_TypeDefinitionIndex = 30814;

	class StyleValue : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheets::StylePropertyId* id; // 0x10
		::UnityEngine::UIElements::StyleKeyword* keyword; // 0x14
		::System::Single number; // 0x18
		::UnityEngine::UIElements::Length* length; // 0x18
		::UnityEngine::Color* color; // 0x18
		::System::Runtime::InteropServices::GCHandle* resource; // 0x18

	};
}

