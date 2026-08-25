#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

	inline static constexpr unsigned int StrokePosition_TypeDefinitionIndex = 6239;

	class StrokePosition : public Il2CppObject
	{
	public:
		::System::Int32 Index; // 0x10
		::UnityEngine::Vector3* Position; // 0x14

	};

