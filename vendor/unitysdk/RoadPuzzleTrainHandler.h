#pragma once
#include "unitysdk.h"

class RoadPuzzleRailConnectionHandler;
class RoadPuzzleTrainMovementHandler;
class RoadPuzzleLeverStateChangedMessage;
namespace UnityEngine { class GameObject; }

#define ROADPUZZLETRAINHANDLER_STARTTRAIN_OFFSET UNITYSDK_OFFSET(0x27BA440)
#define ROADPUZZLETRAINHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27BA4E0)
#define ROADPUZZLETRAINHANDLER_GET_TRAINREACHEDEND_OFFSET UNITYSDK_OFFSET(0x27BA570)
#define ROADPUZZLETRAINHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27BA5A0)
#define ROADPUZZLETRAINHANDLER_CHANGETRAINSPEED_OFFSET UNITYSDK_OFFSET(0x27BA6E0)
#define ROADPUZZLETRAINHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x27BA790)
#define ROADPUZZLETRAINHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27BA7A0)
#define ROADPUZZLETRAINHANDLER__LOADTRAIN_B__14_0_OFFSET UNITYSDK_OFFSET(0x27BA870)
#define ROADPUZZLETRAINHANDLER_LOADTRAIN_OFFSET UNITYSDK_OFFSET(0x27BAAD0)

	inline static constexpr unsigned int RoadPuzzleTrainHandler_TypeDefinitionIndex = 7546;

	class RoadPuzzleTrainHandler : public Il2CppObject
	{
	public:
		::System::Single trainYOffset; // 0x18
		::System::Single rotationSpeed; // 0x1C
		Il2CppObject* splinePoints; // 0x20
		RoadPuzzleRailConnectionHandler* connectionHandler; // 0x28
		::Il2CppArray<::System::Object*>* movementHandlers; // 0x30
		RoadPuzzleTrainMovementHandler* trainEngine; // 0x38
		::System::Boolean isLoaded; // 0x40

		::System::Collections::IEnumerator* StartTrain(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINHANDLER_STARTTRAIN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_TrainReachedEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINHANDLER_GET_TRAINREACHEDEND_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINHANDLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean ChangeTrainSpeed(RoadPuzzleLeverStateChangedMessage* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleLeverStateChangedMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINHANDLER_CHANGETRAINSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void Init(RoadPuzzleRailConnectionHandler* arg)
		{
			((::System::Void(*)(RoadPuzzleRailConnectionHandler*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINHANDLER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINHANDLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void _LoadTrain_b__14_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINHANDLER__LOADTRAIN_B__14_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadTrain()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINHANDLER_LOADTRAIN_OFFSET))(nullptr);
		}

	};

