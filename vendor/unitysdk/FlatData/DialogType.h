#pragma once
#include "../unitysdk.h"

namespace FlatData { class DialogType; }

namespace FlatData
{
	inline static constexpr unsigned int DialogType_TypeDefinitionIndex = 9608;

	class DialogType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::DialogType* Talk; // 0x0
		::FlatData::DialogType* Think; // 0x0
		::FlatData::DialogType* UITalk; // 0x0

	};
}

