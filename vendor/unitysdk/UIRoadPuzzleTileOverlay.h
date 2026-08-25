#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UILabel;
class RoadPuzzleTileMap;
namespace UnityEngine { class Camera; }
class RoadPuzzleTrainStartMessage;
class RoadPuzzleTrainEndMessage;
class RoadPuzzleTrainPassedRewardTileMessage;

#define UIROADPUZZLETILEOVERLAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27C9F20)
#define UIROADPUZZLETILEOVERLAY_ONTRAINSTARTMESSAGE_OFFSET UNITYSDK_OFFSET(0x27CA160)
#define UIROADPUZZLETILEOVERLAY_REFRESH_OFFSET UNITYSDK_OFFSET(0x27CA320)
#define UIROADPUZZLETILEOVERLAY_SETUITOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x27CAA10)
#define UIROADPUZZLETILEOVERLAY_UPDATETRANSITTILEOVERLAYS_OFFSET UNITYSDK_OFFSET(0x27CA330)
#define UIROADPUZZLETILEOVERLAY_ONTRAINENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x27CAB60)
#define UIROADPUZZLETILEOVERLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CAD20)
#define UIROADPUZZLETILEOVERLAY_ONTRAINPASSEDREWARDTILEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27CADB0)
#define UIROADPUZZLETILEOVERLAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27CAE50)
#define UIROADPUZZLETILEOVERLAY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x27CB010)
#define UIROADPUZZLETILEOVERLAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x27CB0F0)
#define UIROADPUZZLETILEOVERLAY_CREATETRANSITTILEMARKS_OFFSET UNITYSDK_OFFSET(0x27CB2D0)
#define UIROADPUZZLETILEOVERLAY_INIT_OFFSET UNITYSDK_OFFSET(0x27C7D30)

	inline static constexpr unsigned int UIRoadPuzzleTileOverlay_TypeDefinitionIndex = 7592;

	class UIRoadPuzzleTileOverlay : public Il2CppObject
	{
	public:
		::System::Single YOffset; // 0x18
		::UnityEngine::Transform* StartTileMark; // 0x20
		::UnityEngine::Transform* EndTileMark; // 0x28
		::UnityEngine::Transform* TrainAnimStartMark; // 0x30
		::UnityEngine::Transform* TrainAnimEndMark; // 0x38
		::UnityEngine::Transform* TransitTileMarkRoot; // 0x40
		UILabel* TransitTileConnectedCountLabel; // 0x48
		UILabel* GoalConnectedCountLabel; // 0x50
		RoadPuzzleTileMap* tileMap; // 0x58
		::UnityEngine::Camera* camera3D; // 0x60
		::System::Boolean enableTileMark; // 0x68
		::System::Boolean enableTrainAnimMark; // 0x69
		Il2CppObject* connectedTransitTiles; // 0x70

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean OnTrainStartMessage(RoadPuzzleTrainStartMessage* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleTrainStartMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_ONTRAINSTARTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SetUIToWorldPosition(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_SETUITOWORLDPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void UpdateTransitTileOverlays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_UPDATETRANSITTILEOVERLAYS_OFFSET))(nullptr);
		}

		::System::Boolean OnTrainEndMessage(RoadPuzzleTrainEndMessage* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleTrainEndMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_ONTRAINENDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnTrainPassedRewardTileMessage(RoadPuzzleTrainPassedRewardTileMessage* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleTrainPassedRewardTileMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_ONTRAINPASSEDREWARDTILEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_CLEAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateTransitTileMarks()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_CREATETRANSITTILEMARKS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Init(RoadPuzzleTileMap* arg, ::UnityEngine::Camera* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(RoadPuzzleTileMap*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEOVERLAY_INIT_OFFSET))(arg, arg2, nullptr);
		}

	};

