#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ComputeBufferType; }

	inline static constexpr unsigned int ComputeBufferInfo_TypeDefinitionIndex = 32626;

	class ComputeBufferInfo : public Il2CppObject
	{
	public:
		::System::UInt32 frameUsed; // 0x10
		::UnityEngine::ComputeBufferType* type; // 0x14

	};

