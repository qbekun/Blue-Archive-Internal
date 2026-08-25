#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXToyLogLevel; }

namespace NPA::Editor
{
	inline static constexpr unsigned int NXToyLogLevel_TypeDefinitionIndex = 26180;

	class NXToyLogLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::NXToyLogLevel* DEVELOP; // 0x0
		::NPA::Editor::NXToyLogLevel* VERBOSE; // 0x0
		::NPA::Editor::NXToyLogLevel* DEBUG; // 0x0
		::NPA::Editor::NXToyLogLevel* INFO; // 0x0
		::NPA::Editor::NXToyLogLevel* WARNING; // 0x0
		::NPA::Editor::NXToyLogLevel* ERROR; // 0x0

	};
}

