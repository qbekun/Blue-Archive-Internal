#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

namespace MXField::Core::ControlMode
{
	inline static constexpr unsigned int RandomMovePoint_TypeDefinitionIndex = 11008;

	class RandomMovePoint : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Position; // 0x10
		::System::Single MinRadius; // 0x1C
		::System::Single MaxRadius; // 0x20

	};
}

