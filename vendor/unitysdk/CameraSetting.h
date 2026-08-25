#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

	inline static constexpr unsigned int CameraSetting_TypeDefinitionIndex = 15127;

	class CameraSetting : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Offset; // 0x10
		::UnityEngine::Vector3* Rotate; // 0x1C
		::System::Single Size; // 0x28
		::System::Single Near; // 0x2C
		::System::Single Far; // 0x30

	};

