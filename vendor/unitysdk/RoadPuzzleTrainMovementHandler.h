#pragma once
#include "unitysdk.h"

class RoadPuzzleTrainMovementHandler;
namespace UnityEngine { class Transform; }

#define ROADPUZZLETRAINMOVEMENTHANDLER_CHANGESPEED_OFFSET UNITYSDK_OFFSET(0x27BA750)
#define ROADPUZZLETRAINMOVEMENTHANDLER__MOVEALONGSPLINE_G__MOVETRAINWITHSPEED|24_0_OFFSET UNITYSDK_OFFSET(0x27BB4E0)
#define ROADPUZZLETRAINMOVEMENTHANDLER_UPDATETRAINPOSITION_OFFSET UNITYSDK_OFFSET(0x27BB620)
#define ROADPUZZLETRAINMOVEMENTHANDLER_ROTATETOWARDSNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x27BB810)
#define ROADPUZZLETRAINMOVEMENTHANDLER_STARTTRAIN_OFFSET UNITYSDK_OFFSET(0x27BB260)
#define ROADPUZZLETRAINMOVEMENTHANDLER_MOVEALONGSPLINE_OFFSET UNITYSDK_OFFSET(0x27BBB50)
#define ROADPUZZLETRAINMOVEMENTHANDLER_GET_REACHEDEND_OFFSET UNITYSDK_OFFSET(0x27BBC50)
#define ROADPUZZLETRAINMOVEMENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27BBC60)
#define ROADPUZZLETRAINMOVEMENTHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x27BAFA0)
#define ROADPUZZLETRAINMOVEMENTHANDLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x27BBEB0)
#define ROADPUZZLETRAINMOVEMENTHANDLER__MOVEALONGSPLINE_G__FINALDISTANCE|24_1_OFFSET UNITYSDK_OFFSET(0x27BB610)
#define ROADPUZZLETRAINMOVEMENTHANDLER__INIT_G__GETTOTALSPLINELENGTH|20_0_OFFSET UNITYSDK_OFFSET(0x27BBCE0)

	inline static constexpr unsigned int RoadPuzzleTrainMovementHandler_TypeDefinitionIndex = 7547;

	class RoadPuzzleTrainMovementHandler : public Il2CppObject
	{
	public:
		RoadPuzzleTrainMovementHandler* FrontCar; // 0x18
		::System::Single DistanceOffset; // 0x20
		::System::Single FrontDistanceOffset; // 0x24
		::System::Single EndDistanceOffset; // 0x28
		::System::Boolean isFrontCar; // 0x2C
		::System::Single WorldToLocalOffset; // 0x0
		::System::Boolean reachedEnd; // 0x2D
		Il2CppObject* splinePoints; // 0x30
		::System::Single defaultSpeed; // 0x38
		::System::Single speed; // 0x3C
		::System::Single rotationSpeed; // 0x40
		::System::Int32 currentPointIndex; // 0x44
		::System::Boolean isMoving; // 0x48
		::System::Single distanceTraveled; // 0x4C
		::System::Single totalSplineLength; // 0x50
		Il2CppObject* segmentDistance; // 0x58
		::System::Boolean reachedAnimationEnd; // 0x60
		::UnityEngine::Transform* standardTransform; // 0x68

		::System::Void ChangeSpeed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER_CHANGESPEED_OFFSET))(arg, nullptr);
		}

		::System::Void _MoveAlongSpline_g__MoveTrainWithSpeed|24_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER__MOVEALONGSPLINE_G__MOVETRAINWITHSPEED|24_0_OFFSET))(nullptr);
		}

		::System::Void UpdateTrainPosition(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER_UPDATETRAINPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void RotateTowardsNextPoint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER_ROTATETOWARDSNEXTPOINT_OFFSET))(nullptr);
		}

		::System::Void StartTrain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER_STARTTRAIN_OFFSET))(nullptr);
		}

		::System::Void MoveAlongSpline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER_MOVEALONGSPLINE_OFFSET))(nullptr);
		}

		::System::Boolean get_ReachedEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER_GET_REACHEDEND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::UnityEngine::Transform* arg, Il2CppObject* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Transform*, Il2CppObject*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER_INIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Single _MoveAlongSpline_g__FinalDistance|24_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER__MOVEALONGSPLINE_G__FINALDISTANCE|24_1_OFFSET))(nullptr);
		}

		::System::Single _Init_g__GetTotalSplineLength|20_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINMOVEMENTHANDLER__INIT_G__GETTOTALSPLINELENGTH|20_0_OFFSET))(nullptr);
		}

	};

