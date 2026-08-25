#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Visual::Battles { class BattleActorComponent; }
class GroundVisualFactory;
namespace MX::Logic::Battles { class Ground; }
class GroundStageVisual;
namespace MX::Logic::Battles { class GroundStage; }
namespace MX::Logic::Battles { class GroundFormation; }

#define GROUNDVISUALFACTORY_LOADOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1815D50)
#define GROUNDVISUALFACTORY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1815F90)
#define GROUNDVISUALFACTORY_CREATEGROUNDVISUAL_OFFSET UNITYSDK_OFFSET(0x1815FE0)
#define GROUNDVISUALFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x18172C0)
#define GROUNDVISUALFACTORY_CREATESTAGEVISUAL_OFFSET UNITYSDK_OFFSET(0x18162E0)
#define GROUNDVISUALFACTORY_CREATEEVENTSVISUALS_OFFSET UNITYSDK_OFFSET(0x18172D0)
#define GROUNDVISUALFACTORY_CREATEFORMATIONVISUAL_OFFSET UNITYSDK_OFFSET(0x1817A50)

	inline static constexpr unsigned int GroundVisualFactory_TypeDefinitionIndex = 1261;

	class GroundVisualFactory : public Il2CppObject
	{
	public:
		::System::Void LoadObstacle(::UnityEngine::Transform* arg, ::MX::Logic::BattleEntities::GroundObstacle* arg2, ::MX::Visual::Battles::BattleActorComponent* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::MX::Logic::BattleEntities::GroundObstacle*, ::MX::Visual::Battles::BattleActorComponent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVISUALFACTORY_LOADOBSTACLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		GroundVisualFactory* get_Instance()
		{
			return ((GroundVisualFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDVISUALFACTORY_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void CreateGroundVisual(::MX::Logic::Battles::Ground* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Ground*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVISUALFACTORY_CREATEGROUNDVISUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDVISUALFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CreateStageVisual(GroundStageVisual* arg, ::MX::Logic::Battles::GroundStage* arg2, ::MX::Visual::Battles::BattleActorComponent* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(GroundStageVisual*, ::MX::Logic::Battles::GroundStage*, ::MX::Visual::Battles::BattleActorComponent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVISUALFACTORY_CREATESTAGEVISUAL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CreateEventsVisuals(Il2CppObject* arg, ::UnityEngine::Transform* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVISUALFACTORY_CREATEEVENTSVISUALS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CreateFormationVisual(::MX::Logic::Battles::GroundFormation* arg, ::UnityEngine::Transform* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundFormation*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVISUALFACTORY_CREATEFORMATIONVISUAL_OFFSET))(arg, arg2, nullptr);
		}

	};

