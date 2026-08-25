#pragma once
#include "unitysdk.h"

namespace MX::Visual::Data { class AlignDirection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::BattleEntities { class IEntityBody; }

#define EFFECTLOOKAT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x120B490)
#define EFFECTLOOKAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x120B4F0)
#define EFFECTLOOKAT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x120B500)
#define EFFECTLOOKAT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x120BB80)

	inline static constexpr unsigned int EffectLookAt_TypeDefinitionIndex = 974;

	class EffectLookAt : public Il2CppObject
	{
	public:
		::MX::Visual::Data::AlignDirection* alignDirection; // 0x18
		::UnityEngine::Transform* casterTransform; // 0x20
		::UnityEngine::Transform* targetTransform; // 0x28
		::UnityEngine::Vector3* targetPosition; // 0x30
		::UnityEngine::Transform* boneTransform; // 0x40
		::MX::Logic::BattleEntities::IEntityBody* bulletBody; // 0x48
		::UnityEngine::Vector3* rotationOffset; // 0x50
		::UnityEngine::Vector3* lastCasterPosition; // 0x5C
		::UnityEngine::Vector3* lastCasterForward; // 0x68
		::System::Boolean isPlayed; // 0x74

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTLOOKAT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTLOOKAT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTLOOKAT_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Visual::Data::AlignDirection* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Transform* arg3, ::UnityEngine::Vector3* arg4, ::UnityEngine::Transform* arg5, ::MX::Logic::BattleEntities::IEntityBody* arg6, ::UnityEngine::Vector3* arg7)
		{
			((::System::Void(*)(::MX::Visual::Data::AlignDirection*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Transform*, ::MX::Logic::BattleEntities::IEntityBody*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTLOOKAT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

	};

