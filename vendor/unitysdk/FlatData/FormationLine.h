#pragma once
#include "../unitysdk.h"

namespace FlatData { class FormationLine; }

namespace FlatData
{
	inline static constexpr unsigned int FormationLine_TypeDefinitionIndex = 9380;

	class FormationLine : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::FormationLine* Students; // 0x0
		::FlatData::FormationLine* TSS; // 0x0

	};
}

