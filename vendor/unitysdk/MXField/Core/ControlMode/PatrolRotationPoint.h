#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

namespace MXField::Core::ControlMode
{
	inline static constexpr unsigned int PatrolRotationPoint_TypeDefinitionIndex = 11006;

	class PatrolRotationPoint : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Position; // 0x10
		::System::Boolean Rotate; // 0x1C
		::System::Single RotateAngle; // 0x20

	};
}

