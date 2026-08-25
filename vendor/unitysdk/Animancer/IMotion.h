#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define ANIMANCER_IMOTION_GET_AVERAGEANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IMOTION_GET_AVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int IMotion_TypeDefinitionIndex = 35151;

	class IMotion : public Il2CppObject
	{
	public:
		::System::Single get_AverageAngularSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IMOTION_GET_AVERAGEANGULARSPEED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_AverageVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IMOTION_GET_AVERAGEVELOCITY_OFFSET))(nullptr);
		}

	};
}

