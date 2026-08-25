#pragma once
#include "unitysdk.h"

class DiceRaceNodeController;
class DiceRacePlayer;
namespace UnityEngine { class Vector3; }

#define DICERACECONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23D3AC0)
#define DICERACECONTROLLER_SETDESTINATIONPATHPOINT_OFFSET UNITYSDK_OFFSET(0x23D3E00)
#define DICERACECONTROLLER_BACKSTADIUMLOAD_OFFSET UNITYSDK_OFFSET(0x23D40A0)
#define DICERACECONTROLLER_PLAYERMOVE_OFFSET UNITYSDK_OFFSET(0x23D4030)
#define DICERACECONTROLLER__DESTINATIONARRIVALCHECK_B__26_0_OFFSET UNITYSDK_OFFSET(0x23D4160)
#define DICERACECONTROLLER_MOVEREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x23D4190)
#define DICERACECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D4240)
#define DICERACECONTROLLER_ONDICEPLAYRESULT_OFFSET UNITYSDK_OFFSET(0x23D42D0)
#define DICERACECONTROLLER_DESTINATIONARRIVALCHECK_OFFSET UNITYSDK_OFFSET(0x23D42E0)
#define DICERACECONTROLLER_PLAYERLOAD_OFFSET UNITYSDK_OFFSET(0x23D4590)
#define DICERACECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23D4640)
#define DICERACECONTROLLER_SETNODEINFOS_OFFSET UNITYSDK_OFFSET(0x23D47D0)
#define DICERACECONTROLLER_GETNEXTMOVEPATHPOINT_OFFSET UNITYSDK_OFFSET(0x23D4990)
#define DICERACECONTROLLER__DESTINATIONARRIVALCHECK_B__26_1_OFFSET UNITYSDK_OFFSET(0x23D4B60)

	inline static constexpr unsigned int DiceRaceController_TypeDefinitionIndex = 5320;

	class DiceRaceController : public Il2CppObject
	{
	public:
		::System::Single playerSpeedMove; // 0x18
		::System::Single playerSpeedRotate; // 0x1C
		DiceRaceNodeController* diceRaceNodeController; // 0x20
		DiceRacePlayer* diceRacePlayer; // 0x28
		::Il2CppArray<::System::Object*>* movePathPoints; // 0x30
		::UnityEngine::Vector3* currentMovePathPoint; // 0x38
		::System::Int32 movePathPointIndex; // 0x44
		::Il2CppArray<::System::Object*>* destinationPathPoints; // 0x48
		::System::Int32 destinationPointIndex; // 0x50
		::System::Boolean run; // 0x54
		::System::Boolean finsh; // 0x55
		::System::Int32 diceNum; // 0x58
		::System::Int32 moveCount; // 0x5C
		Il2CppObject* destinationToMovePathPointIndex; // 0x60
		::System::Action* onTrackFinishProduction; // 0x68
		::System::Action* onTrackNodeReward; // 0x70
		::System::Action* onTrackSpecialReward; // 0x78
		::System::String* loadDiceraceBackGroundPrefab; // 0x80
		::System::String* loadDiceRacePawnPrefab; // 0x88

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDestinationPathPoint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_SETDESTINATIONPATHPOINT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* BackStadiumLoad(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_BACKSTADIUMLOAD_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayerMove()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_PLAYERMOVE_OFFSET))(nullptr);
		}

		::System::Void _DestinationArrivalCheck_b__26_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER__DESTINATIONARRIVALCHECK_B__26_0_OFFSET))(nullptr);
		}

		::System::Boolean MoveRemainCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_MOVEREMAINCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDicePlayResult(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_ONDICEPLAYRESULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean DestinationArrivalCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_DESTINATIONARRIVALCHECK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayerLoad(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_PLAYERLOAD_OFFSET))(str, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetNodeInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_SETNODEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void GetNextMovePathPoint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER_GETNEXTMOVEPATHPOINT_OFFSET))(nullptr);
		}

		::System::Void _DestinationArrivalCheck_b__26_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACECONTROLLER__DESTINATIONARRIVALCHECK_B__26_1_OFFSET))(nullptr);
		}

	};

