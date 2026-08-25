#pragma once
#include "../unitysdk.h"

namespace FlatData { class SoundType; }

namespace FlatData
{
	inline static constexpr unsigned int SoundType_TypeDefinitionIndex = 9497;

	class SoundType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::SoundType* UI; // 0x0
		::FlatData::SoundType* BGM; // 0x0
		::FlatData::SoundType* FX; // 0x0

	};
}

