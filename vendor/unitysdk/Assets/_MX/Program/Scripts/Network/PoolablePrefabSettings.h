#pragma once
#include "../../../../../unitysdk.h"

namespace UnityEngine { class GameObject; }

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int PoolablePrefabSettings_TypeDefinitionIndex = 10430;

	class PoolablePrefabSettings : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* Prefab; // 0x10
		::System::Int32 numberToSpawn; // 0x18

	};
}

