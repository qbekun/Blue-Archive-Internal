#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ComputeBuffer; }

	inline static constexpr unsigned int DrawCall_TypeDefinitionIndex = 32848;

	class DrawCall : public Il2CppObject
	{
	public:
		::UnityEngine::ComputeBuffer* tileList; // 0x10
		::UnityEngine::ComputeBuffer* punctualLightBuffer; // 0x18
		::UnityEngine::ComputeBuffer* relLightList; // 0x20
		::System::Int32 tileListSize; // 0x28
		::System::Int32 punctualLightBufferSize; // 0x2C
		::System::Int32 relLightListSize; // 0x30
		::System::Int32 instanceOffset; // 0x34
		::System::Int32 instanceCount; // 0x38

	};

