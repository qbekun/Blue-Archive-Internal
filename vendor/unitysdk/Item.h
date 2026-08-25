#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

	inline static constexpr unsigned int Item_TypeDefinitionIndex = 34412;

	class Item : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* velocity; // 0x10
		::System::Single weight; // 0x1C
		::System::Single time; // 0x20

	};

