#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }

#define MX_VISUAL_BATTLES_NULLSUBSCENE_GET_MAINSCENE_OFFSET UNITYSDK_OFFSET(0x1D78F50)
#define MX_VISUAL_BATTLES_NULLSUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D75B70)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int NullSubScene_TypeDefinitionIndex = 20315;

	class NullSubScene : public Il2CppObject
	{
	public:
		::MX::Visual::Battles::BattleSceneHandler* get_MainScene()
		{
			return (return (::MX::Visual::Battles::BattleSceneHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_NULLSUBSCENE_GET_MAINSCENE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_NULLSUBSCENE_.CTOR_OFFSET))(nullptr);
		}

	};
}

