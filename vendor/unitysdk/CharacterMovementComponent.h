#pragma once
#include "unitysdk.h"

class CharacterMovementSystem;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define CHARACTERMOVEMENTCOMPONENT_GET_ROTATEBODYONLYINVISUALTRANSFORMGAPCORRECTION_OFFSET UNITYSDK_OFFSET(0x10B5C80)
#define CHARACTERMOVEMENTCOMPONENT_SET_HASLOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0x10B5C90)
#define CHARACTERMOVEMENTCOMPONENT_GET_TIMELINEACTIONROTATESPEED_OFFSET UNITYSDK_OFFSET(0x10B5CA0)
#define CHARACTERMOVEMENTCOMPONENT_SET_TIMELINEACTIONROTATESPEED_OFFSET UNITYSDK_OFFSET(0x10B5CB0)
#define CHARACTERMOVEMENTCOMPONENT_GET_HASLOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0x10B5CC0)
#define CHARACTERMOVEMENTCOMPONENT_OA361DD478FEE83086E225E0EBF3A223AC1DC3D249FF436BDD146F0ABCA68F748_OFFSET UNITYSDK_OFFSET(0x10B5CD0)
#define CHARACTERMOVEMENTCOMPONENT_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10B5CE0)
#define CHARACTERMOVEMENTCOMPONENT_SET_ROTATEBODYONLYINVISUALTRANSFORMGAPCORRECTION_OFFSET UNITYSDK_OFFSET(0x10B5CF0)
#define CHARACTERMOVEMENTCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B5D00)
#define CHARACTERMOVEMENTCOMPONENT_SET_BODYBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x10B5D10)
#define CHARACTERMOVEMENTCOMPONENT_GET_BODYBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x10B5D20)
#define CHARACTERMOVEMENTCOMPONENT_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10B5D30)
#define CHARACTERMOVEMENTCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x10B5D40)
#define CHARACTERMOVEMENTCOMPONENT_OF2C9BBB62ECDDC451F0220B1D2E6DD93D1FA90D70279D6E0C759C4C80BA35AE5_OFFSET UNITYSDK_OFFSET(0x10B5D90)
#define CHARACTERMOVEMENTCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x10B5DA0)

	inline static constexpr unsigned int CharacterMovementComponent_TypeDefinitionIndex = 924;

	class CharacterMovementComponent : public Il2CppObject
	{
	public:
		CharacterMovementSystem* movementSystem; // 0x18
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* Ob8a40a7d89037185fae1b55b11355379e790fed240eac9fc79d03823262b6fba; // 0x20
		::UnityEngine::Transform* _BodyBoneTransform_k__BackingField; // 0x28
		::System::Boolean _HasLookAtController_k__BackingField; // 0x30
		::System::Single _TimeLineActionRotateSpeed_k__BackingField; // 0x34
		::System::Boolean _IsActive_k__BackingField; // 0x38
		::UnityEngine::Vector3* DampVelocity; // 0x3C
		::System::Boolean _RotateBodyOnlyInVisualTransformGapCorrection_k__BackingField; // 0x48

		::System::Boolean get_RotateBodyOnlyInVisualTransformGapCorrection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_GET_ROTATEBODYONLYINVISUALTRANSFORMGAPCORRECTION_OFFSET))(nullptr);
		}

		::System::Void set_HasLookAtController(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_SET_HASLOOKATCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Single get_TimeLineActionRotateSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_GET_TIMELINEACTIONROTATESPEED_OFFSET))(nullptr);
		}

		::System::Void set_TimeLineActionRotateSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_SET_TIMELINEACTIONROTATESPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasLookAtController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_GET_HASLOOKATCONTROLLER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* Oa361dd478fee83086e225e0ebf3a223ac1dc3d249ff436bdd146f0abca68f748()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_OA361DD478FEE83086E225E0EBF3A223AC1DC3D249FF436BDD146F0ABCA68F748_OFFSET))(nullptr);
		}

		::System::Void set_IsActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_SET_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RotateBodyOnlyInVisualTransformGapCorrection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_SET_ROTATEBODYONLYINVISUALTRANSFORMGAPCORRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BodyBoneTransform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_SET_BODYBONETRANSFORM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_BodyBoneTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_GET_BODYBONETRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Of2c9bbb62ecddc451f0220b1d2e6dd93d1fa90d70279d6e0c759c4c80ba35ae5(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_OF2C9BBB62ECDDC451F0220B1D2E6DD93D1FA90D70279D6E0C759C4C80BA35AE5_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOVEMENTCOMPONENT_AWAKE_OFFSET))(nullptr);
		}

	};

