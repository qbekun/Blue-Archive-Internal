#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::ParticleSystemJobs { class ParticleSystemNativeArray3; }
namespace UnityEngine::ParticleSystemJobs { class ParticleSystemNativeArray4; }

namespace UnityEngine::ParticleSystemJobs
{
	inline static constexpr unsigned int ParticleSystemJobData_TypeDefinitionIndex = 36968;

	class ParticleSystemJobData : public Il2CppObject
	{
	public:
		::System::Int32 _count_k__BackingField; // 0x10
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3* _positions_k__BackingField; // 0x18
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3* _velocities_k__BackingField; // 0x48
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3* _axisOfRotations_k__BackingField; // 0x78
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3* _rotations_k__BackingField; // 0xA8
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3* _rotationalSpeeds_k__BackingField; // 0xD8
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3* _sizes_k__BackingField; // 0x108
		Il2CppObject* _startColors_k__BackingField; // 0x138
		Il2CppObject* _aliveTimePercent_k__BackingField; // 0x148
		Il2CppObject* _inverseStartLifetimes_k__BackingField; // 0x158
		Il2CppObject* _randomSeeds_k__BackingField; // 0x168
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4* _customData1_k__BackingField; // 0x178
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4* _customData2_k__BackingField; // 0x1B8
		Il2CppObject* _meshIndices_k__BackingField; // 0x1F8

	};
}

