#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::EventSystems { class MoveDirection; }
namespace UnityEngine::EventSystems { class AxisEventData; }

#define UNITYENGINE_INPUTSYSTEM_UI_NAVIGATIONMODEL_RESET_OFFSET UNITYSDK_OFFSET(0x9F34830)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int NavigationModel_TypeDefinitionIndex = 28630;

	class NavigationModel : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* move; // 0x10
		::System::Int32 consecutiveMoveCount; // 0x18
		::UnityEngine::EventSystems::MoveDirection* lastMoveDirection; // 0x1C
		::System::Single lastMoveTime; // 0x20
		::UnityEngine::EventSystems::AxisEventData* eventData; // 0x28

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_NAVIGATIONMODEL_RESET_OFFSET))(nullptr);
		}

	};
}

