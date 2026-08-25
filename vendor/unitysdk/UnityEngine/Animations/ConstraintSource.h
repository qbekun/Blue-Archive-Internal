#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int ConstraintSource_TypeDefinitionIndex = 36516;

	class ConstraintSource : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* m_SourceTransform; // 0x10
		::System::Single m_Weight; // 0x18

	};
}

