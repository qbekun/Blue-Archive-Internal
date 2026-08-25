#pragma once
#include "../unitysdk.h"

namespace FlatData { class GroundNodeType; }

namespace FlatData
{
	inline static constexpr unsigned int GroundNodeType_TypeDefinitionIndex = 9292;

	class GroundNodeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::GroundNodeType* None; // 0x0
		::FlatData::GroundNodeType* WalkAble; // 0x0
		::FlatData::GroundNodeType* JumpAble; // 0x0
		::FlatData::GroundNodeType* TSSOnly; // 0x0
		::FlatData::GroundNodeType* NotWalkAble; // 0x0

	};
}

