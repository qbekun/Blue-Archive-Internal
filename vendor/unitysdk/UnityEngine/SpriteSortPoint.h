#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SpriteSortPoint; }

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteSortPoint_TypeDefinitionIndex = 31222;

	class SpriteSortPoint : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::SpriteSortPoint* Center; // 0x0
		::UnityEngine::SpriteSortPoint* Pivot; // 0x0

	};
}

