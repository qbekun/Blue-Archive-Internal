#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPScreenOrientationType; }

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPScreenOrientationType_TypeDefinitionIndex = 26283;

	class NXPScreenOrientationType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::NXPScreenOrientationType* Landscape; // 0x0
		::NPA::Editor::NXPScreenOrientationType* Portrait; // 0x0

	};
}

