#pragma once
#include "../unitysdk.h"

namespace FlatData { class DreamMakerResult; }

namespace FlatData
{
	inline static constexpr unsigned int DreamMakerResult_TypeDefinitionIndex = 9554;

	class DreamMakerResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::DreamMakerResult* None; // 0x0
		::FlatData::DreamMakerResult* Fail; // 0x0
		::FlatData::DreamMakerResult* Success; // 0x0
		::FlatData::DreamMakerResult* Perfect; // 0x0

	};
}

