#pragma once
#include "../unitysdk.h"

namespace FlatData { class CVPrintType; }

namespace FlatData
{
	inline static constexpr unsigned int CVPrintType_TypeDefinitionIndex = 9433;

	class CVPrintType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::CVPrintType* CharacterOverwrite; // 0x0
		::FlatData::CVPrintType* PrefabOverwrite; // 0x0
		::FlatData::CVPrintType* Add; // 0x0

	};
}

