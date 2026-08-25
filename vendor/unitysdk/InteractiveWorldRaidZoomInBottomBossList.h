#pragma once
#include "unitysdk.h"

class UIGrid;

#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSLIST_SETBOSSBUTTONS_OFFSET UNITYSDK_OFFSET(0x26095D0)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2609B40)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSLIST_SETSELECTEDBUTTON_OFFSET UNITYSDK_OFFSET(0x2609B50)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSLIST_REFRESHBOSSSTATE_OFFSET UNITYSDK_OFFSET(0x2609D20)

	inline static constexpr unsigned int InteractiveWorldRaidZoomInBottomBossList_TypeDefinitionIndex = 6487;

	class InteractiveWorldRaidZoomInBottomBossList : public Il2CppObject
	{
	public:
		UIGrid* grid; // 0x18
		::Il2CppArray<::System::Object*>* bossButtons; // 0x20

		::System::Void SetBossButtons(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSLIST_SETBOSSBUTTONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSelectedButton(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSLIST_SETSELECTEDBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshBossState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSLIST_REFRESHBOSSSTATE_OFFSET))(arg, nullptr);
		}

	};

