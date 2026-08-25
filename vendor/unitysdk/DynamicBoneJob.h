#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define DYNAMICBONEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x20A31F0)

	inline static constexpr unsigned int DynamicBoneJob_TypeDefinitionIndex = 3534;

	class DynamicBoneJob : public Il2CppObject
	{
	public:
		::System::Boolean IgnoreInert; // 0x10
		::System::Boolean Discard; // 0x11
		::System::Single deltaTime; // 0x14
		::UnityEngine::Vector3* LossyScale; // 0x18
		::UnityEngine::Vector3* JobObjectMove; // 0x24
		Il2CppObject* GravityArray; // 0x30
		Il2CppObject* LocalGravityArray; // 0x40
		Il2CppObject* startIndices; // 0x50
		Il2CppObject* numParticleArray; // 0x60
		Il2CppObject* LimitAxisYArray; // 0x70
		Il2CppObject* LocalToWorldArray; // 0x80
		Il2CppObject* TransformLocalPosArray; // 0x90
		Il2CppObject* ParticleInfoArray; // 0xA0
		Il2CppObject* PositionArray; // 0xB0
		Il2CppObject* PrevPositionArray; // 0xC0

		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEJOB_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

