#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }

#define MX_VISUAL_BATTLES_ENDINGSUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D76620)
#define MX_VISUAL_BATTLES_ENDINGSUBSCENE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1D76EA0)
#define MX_VISUAL_BATTLES_ENDINGSUBSCENE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1D76EB0)
#define MX_VISUAL_BATTLES_ENDINGSUBSCENE_GET_MAINSCENE_OFFSET UNITYSDK_OFFSET(0x1D76F70)
#define MX_VISUAL_BATTLES_ENDINGSUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D75C40)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int EndingSubScene_TypeDefinitionIndex = 20309;

	class EndingSubScene : public Il2CppObject
	{
	public:
		::MX::Visual::Battles::BattleSceneHandler* mainScene; // 0x10

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ENDINGSUBSCENE_ENTER_OFFSET))(nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ENDINGSUBSCENE_LEAVE_OFFSET))(nullptr);
		}

		::System::Void Advance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ENDINGSUBSCENE_ADVANCE_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleSceneHandler* get_MainScene()
		{
			return (return (::MX::Visual::Battles::BattleSceneHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ENDINGSUBSCENE_GET_MAINSCENE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ENDINGSUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

