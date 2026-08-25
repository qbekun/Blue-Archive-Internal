#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class HumanLimit; }

namespace UnityEngine
{
	inline static constexpr unsigned int HumanBone_TypeDefinitionIndex = 36475;

	class HumanBone : public Il2CppObject
	{
	public:
		::System::String* m_BoneName; // 0x10
		::System::String* m_HumanName; // 0x18
		::UnityEngine::HumanLimit* limit; // 0x20

	};
}

