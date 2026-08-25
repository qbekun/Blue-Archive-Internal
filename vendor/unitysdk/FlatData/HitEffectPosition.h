#pragma once
#include "../unitysdk.h"

namespace FlatData { class HitEffectPosition; }

namespace FlatData
{
	inline static constexpr unsigned int HitEffectPosition_TypeDefinitionIndex = 9388;

	class HitEffectPosition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::HitEffectPosition* Position; // 0x0
		::FlatData::HitEffectPosition* HeadBone; // 0x0
		::FlatData::HitEffectPosition* BodyBone; // 0x0
		::FlatData::HitEffectPosition* Follow; // 0x0

	};
}

