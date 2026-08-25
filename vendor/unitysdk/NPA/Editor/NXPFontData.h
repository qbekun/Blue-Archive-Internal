#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Font; }

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPFontData_TypeDefinitionIndex = 26356;

	class NXPFontData : public Il2CppObject
	{
	public:
		::UnityEngine::Font* regularFont; // 0x10
		::UnityEngine::Font* boldFont; // 0x18

	};
}

