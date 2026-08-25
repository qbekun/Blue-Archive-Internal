#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Rigidbody; }

#define MXUNDERCOVER_MOVEMENT_IUCMOVEMENTIMPLEMENTOWNER_GETMAXMOVINGSPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_IUCMOVEMENTIMPLEMENTOWNER_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_IUCMOVEMENTIMPLEMENTOWNER_GETRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_MOVEMENT_IUCMOVEMENTIMPLEMENTOWNER_GETMAXROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover::Movement
{
	inline static constexpr unsigned int IUCMovementImplementOwner_TypeDefinitionIndex = 10063;

	class IUCMovementImplementOwner : public Il2CppObject
	{
	public:
		::System::Single GetMaxMovingSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_IUCMOVEMENTIMPLEMENTOWNER_GETMAXMOVINGSPEED_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_IUCMOVEMENTIMPLEMENTOWNER_GETTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Rigidbody* GetRigidbody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_IUCMOVEMENTIMPLEMENTOWNER_GETRIGIDBODY_OFFSET))(nullptr);
		}

		::System::Single GetMaxRotationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_MOVEMENT_IUCMOVEMENTIMPLEMENTOWNER_GETMAXROTATIONSPEED_OFFSET))(nullptr);
		}

	};
}

