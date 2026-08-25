#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }

#define MX_VISUAL_BATTLES_SUBSCENE_RESET_OFFSET UNITYSDK_OFFSET(0x1D86AE0)
#define MX_VISUAL_BATTLES_SUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C810)
#define MX_VISUAL_BATTLES_SUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D86AF0)
#define MX_VISUAL_BATTLES_SUBSCENE_GET_MAINSCENE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_VISUAL_BATTLES_SUBSCENE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1D86B00)
#define MX_VISUAL_BATTLES_SUBSCENE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1D86B10)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int SubScene_TypeDefinitionIndex = 20343;

	class SubScene : public Il2CppObject
	{
	public:
		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SUBSCENE_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SUBSCENE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SUBSCENE_ENTER_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleSceneHandler* get_MainScene()
		{
			return (return (::MX::Visual::Battles::BattleSceneHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SUBSCENE_GET_MAINSCENE_OFFSET))(nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SUBSCENE_LEAVE_OFFSET))(nullptr);
		}

		::System::Void Advance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SUBSCENE_ADVANCE_OFFSET))(nullptr);
		}

	};
}

