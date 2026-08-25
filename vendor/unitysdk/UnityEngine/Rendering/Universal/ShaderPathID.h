#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ShaderPathID; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPathID_TypeDefinitionIndex = 32749;

	class ShaderPathID : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ShaderPathID* Lit; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* SimpleLit; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* Unlit; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* TerrainLit; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* ParticlesLit; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* ParticlesSimpleLit; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* ParticlesUnlit; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* BakedLit; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* SpeedTree7; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* SpeedTree7Billboard; // 0x0
		::UnityEngine::Rendering::Universal::ShaderPathID* SpeedTree8; // 0x0

	};
}

