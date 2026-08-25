#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Bounds; }

	inline static constexpr unsigned int SerializableBoundItem_TypeDefinitionIndex = 33820;

	class SerializableBoundItem : public Il2CppObject
	{
	public:
		::System::String* sceneGUID; // 0x10
		::UnityEngine::Bounds* bounds; // 0x18

	};

