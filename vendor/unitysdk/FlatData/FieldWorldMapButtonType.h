#pragma once
#include "../unitysdk.h"

namespace FlatData { class FieldWorldMapButtonType; }

namespace FlatData
{
	inline static constexpr unsigned int FieldWorldMapButtonType_TypeDefinitionIndex = 9531;

	class FieldWorldMapButtonType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::FieldWorldMapButtonType* DefaultMode; // 0x0
		::FlatData::FieldWorldMapButtonType* Normal; // 0x0
		::FlatData::FieldWorldMapButtonType* Combat; // 0x0
		::FlatData::FieldWorldMapButtonType* Combat_VeryHard; // 0x0
		::FlatData::FieldWorldMapButtonType* UnderCover; // 0x0

	};
}

