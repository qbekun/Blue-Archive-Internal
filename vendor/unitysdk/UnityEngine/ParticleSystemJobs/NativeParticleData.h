#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::ParticleSystemJobs
{
	inline static constexpr unsigned int NativeParticleData_TypeDefinitionIndex = 36971;

	class NativeParticleData : public Il2CppObject
	{
	public:
		::System::Int32 count; // 0x10
		Array3* positions; // 0x18
		Array3* velocities; // 0x30
		Array3* axisOfRotations; // 0x48
		Array3* rotations; // 0x60
		Array3* rotationalSpeeds; // 0x78
		Array3* sizes; // 0x90
		::System::Object** startColors; // 0xA8
		::System::Object** aliveTimePercent; // 0xB0
		::System::Object** inverseStartLifetimes; // 0xB8
		::System::Object** randomSeeds; // 0xC0
		Array4* customData1; // 0xC8
		Array4* customData2; // 0xE8
		::System::Object** meshIndices; // 0x108

	};
}

