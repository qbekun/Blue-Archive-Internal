#pragma once
#include "unitysdk.h"

class UIRoadPuzzle;
namespace UnityEngine { class Camera; }
class RoadPuzzleMapTileVisual;
namespace UnityEngine { class Vector3; }

#define UIROADPUZZLEINPUTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C96A0)
#define UIROADPUZZLEINPUTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x27C96B0)
#define UIROADPUZZLEINPUTHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27C9D40)

	inline static constexpr unsigned int UIRoadPuzzleInputHandler_TypeDefinitionIndex = 7586;

	class UIRoadPuzzleInputHandler : public Il2CppObject
	{
	public:
		UIRoadPuzzle* uiRoadPuzzle; // 0x10
		::UnityEngine::Camera* camera3D; // 0x18
		RoadPuzzleMapTileVisual* pressedMapTile; // 0x20
		::UnityEngine::Vector3* initialMouseDownPosition; // 0x28
		::System::Single DragThreshold; // 0x0
		::System::Boolean pressed; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLEINPUTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLEINPUTHANDLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIRoadPuzzle* arg, ::UnityEngine::Camera* arg2)
		{
			((::System::Void(*)(UIRoadPuzzle*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLEINPUTHANDLER_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

