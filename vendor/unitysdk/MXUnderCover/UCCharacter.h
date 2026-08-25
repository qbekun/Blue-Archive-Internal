#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace MXUnderCover { class UCEntityMovement; }

#define MXUNDERCOVER_UCCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD892F0)
#define MXUNDERCOVER_UCCHARACTER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD89410)
#define MXUNDERCOVER_UCCHARACTER_GET_FLOATINGWIDGETOFFSET_OFFSET UNITYSDK_OFFSET(0xD89580)
#define MXUNDERCOVER_UCCHARACTER_GET_MOVEMENT_OFFSET UNITYSDK_OFFSET(0xD895A0)
#define MXUNDERCOVER_UCCHARACTER_GET_FLOATINGWIDGETPIVOT_OFFSET UNITYSDK_OFFSET(0xD89610)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCCharacter_TypeDefinitionIndex = 9692;

	class UCCharacter : public Il2CppObject
	{
	public:
		::System::Single ColiderRadius; // 0x58
		::UnityEngine::CapsuleCollider* Collider; // 0x60
		::UnityEngine::Rigidbody* Rigidbody; // 0x68
		::UnityEngine::Transform* floatingWidgetPivot; // 0x70
		::UnityEngine::Vector3* floatingWidgetOffset; // 0x78
		::MXUnderCover::UCEntityMovement* movement; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCHARACTER_ONVALIDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_FloatingWidgetOffset()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCHARACTER_GET_FLOATINGWIDGETOFFSET_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntityMovement* get_Movement()
		{
			return ((::MXUnderCover::UCEntityMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCHARACTER_GET_MOVEMENT_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_FloatingWidgetPivot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCHARACTER_GET_FLOATINGWIDGETPIVOT_OFFSET))(nullptr);
		}

	};
}

