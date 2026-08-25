#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPToyClientPlatform; }

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPToyClientPlatform_TypeDefinitionIndex = 26853;

	class NXPToyClientPlatform : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Common::NXPToyClientPlatform* Windows; // 0x0
		::NPA::Editor::Common::NXPToyClientPlatform* MacOS; // 0x0
		::NPA::Editor::Common::NXPToyClientPlatform* Console; // 0x0

	};
}

