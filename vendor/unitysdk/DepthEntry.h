#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RaycastHit; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class GameObject; }

	inline static constexpr unsigned int DepthEntry_TypeDefinitionIndex = 216;

	class DepthEntry : public Il2CppObject
	{
	public:
		::System::Int32 depth; // 0x10
		::UnityEngine::RaycastHit* hit; // 0x14
		::UnityEngine::Vector3* point; // 0x40
		::UnityEngine::GameObject* go; // 0x50

	};

