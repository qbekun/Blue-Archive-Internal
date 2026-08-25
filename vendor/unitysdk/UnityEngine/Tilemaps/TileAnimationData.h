#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileAnimationData_TypeDefinitionIndex = 37917;

	class TileAnimationData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_AnimatedSprites; // 0x10
		::System::Single m_AnimationSpeed; // 0x18
		::System::Single m_AnimationStartTime; // 0x1C

	};
}

