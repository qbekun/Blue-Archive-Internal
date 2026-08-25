#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore { class GlyphMetrics; }
namespace UnityEngine::TextCore { class GlyphRect; }
namespace UnityEngine::TextCore { class GlyphClassDefinitionType; }

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphMarshallingStruct_TypeDefinitionIndex = 37524;

	class GlyphMarshallingStruct : public Il2CppObject
	{
	public:
		::System::UInt32 index; // 0x10
		::UnityEngine::TextCore::GlyphMetrics* metrics; // 0x14
		::UnityEngine::TextCore::GlyphRect* glyphRect; // 0x28
		::System::Single scale; // 0x38
		::System::Int32 atlasIndex; // 0x3C
		::UnityEngine::TextCore::GlyphClassDefinitionType* classDefinitionType; // 0x40

	};
}

