#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class EntryType; }

namespace NPA::Editor
{
	inline static constexpr unsigned int EntryType_TypeDefinitionIndex = 26112;

	class EntryType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::EntryType* Home; // 0x0
		::NPA::Editor::EntryType* Board; // 0x0
		::NPA::Editor::EntryType* Thread; // 0x0

	};
}

