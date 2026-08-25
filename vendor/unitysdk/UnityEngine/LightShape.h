#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightShape; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightShape_TypeDefinitionIndex = 31029;

	class LightShape : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LightShape* Cone; // 0x0
		::UnityEngine::LightShape* Pyramid; // 0x0
		::UnityEngine::LightShape* Box; // 0x0

	};
}

