#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLEENTITIES_ENTITYMOVEDBYMOVINGAREAEVENTARGS_GET_OLDPOSITION_OFFSET UNITYSDK_OFFSET(0x112DBA0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYMOVEDBYMOVINGAREAEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112DBB0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYMOVEDBYMOVINGAREAEVENTARGS_GET_OLDDIRECTION_OFFSET UNITYSDK_OFFSET(0x112DC10)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EntityMovedByMovingAreaEventArgs_TypeDefinitionIndex = 13048;

	class EntityMovedByMovingAreaEventArgs : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* _oldPosition_k__BackingField; // 0x10
		::UnityEngine::Vector2* _oldDirection_k__BackingField; // 0x18

		::UnityEngine::Vector2* get_oldPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYMOVEDBYMOVINGAREAEVENTARGS_GET_OLDPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYMOVEDBYMOVINGAREAEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* get_oldDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYMOVEDBYMOVINGAREAEVENTARGS_GET_OLDDIRECTION_OFFSET))(nullptr);
		}

	};
}

