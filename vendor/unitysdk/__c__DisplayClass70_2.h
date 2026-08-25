#pragma once
#include "unitysdk.h"

class From;
class UIInteractiveWorldRaidDifficultyUI;
class UIFormation;

#define <>C__DISPLAYCLASS70_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x2620E40)
#define <>C__DISPLAYCLASS70_2__ENTEREVENTCONTENTSTAGE_B__7_OFFSET UNITYSDK_OFFSET(0x2620E50)

	inline static constexpr unsigned int <>c__DisplayClass70_2_TypeDefinitionIndex = 6525;

	class <>c__DisplayClass70_2 : public Il2CppObject
	{
	public:
		From* from; // 0x10
		Il2CppObject* action; // 0x18
		UIInteractiveWorldRaidDifficultyUI* __4__this; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _EnterEventContentStage_b__7(UIFormation* arg)
		{
			((::System::Void(*)(UIFormation*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_2__ENTEREVENTCONTENTSTAGE_B__7_OFFSET))(arg, nullptr);
		}

	};

