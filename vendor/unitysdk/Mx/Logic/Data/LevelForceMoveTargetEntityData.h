#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MX_LOGIC_DATA_LEVELFORCEMOVETARGETENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBDA0)
#define MX_LOGIC_DATA_LEVELFORCEMOVETARGETENTITYDATA_SHOULDSERIALIZEAREAABILITIES_OFFSET UNITYSDK_OFFSET(0x11FBDB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelForceMoveTargetEntityData_TypeDefinitionIndex = 13699;

	class LevelForceMoveTargetEntityData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* WorldPositionToMove; // 0x150
		::System::Int32 MoveDelay; // 0x158
		::System::Boolean SpawnSameGridLayerAsInvoker; // 0x15C
		Il2CppObject* Abilities; // 0x160

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELFORCEMOVETARGETENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAreaAbilities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELFORCEMOVETARGETENTITYDATA_SHOULDSERIALIZEAREAABILITIES_OFFSET))(nullptr);
		}

	};
}

