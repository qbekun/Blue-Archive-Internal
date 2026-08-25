#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector4; }

	inline static constexpr unsigned int LightData_TypeDefinitionIndex = 38092;

	class LightData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector4* position; // 0x10
		::UnityEngine::Vector4* color; // 0x20
		::UnityEngine::Vector4* attenuation; // 0x30
		::UnityEngine::Vector4* spotDirection; // 0x40
		::UnityEngine::Vector4* occlusionProbeChannels; // 0x50
		::System::UInt32 layerMask; // 0x60

	};

