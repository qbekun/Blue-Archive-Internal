#pragma once
#include "../unitysdk.h"

namespace FlatData { class WeekDay; }

namespace FlatData
{
	inline static constexpr unsigned int WeekDay_TypeDefinitionIndex = 9498;

	class WeekDay : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::WeekDay* Sunday; // 0x0
		::FlatData::WeekDay* Monday; // 0x0
		::FlatData::WeekDay* Tuesday; // 0x0
		::FlatData::WeekDay* Wednesday; // 0x0
		::FlatData::WeekDay* Thursday; // 0x0
		::FlatData::WeekDay* Friday; // 0x0
		::FlatData::WeekDay* Saturday; // 0x0
		::FlatData::WeekDay* All; // 0x0

	};
}

