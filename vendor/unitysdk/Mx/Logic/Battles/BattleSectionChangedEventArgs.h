#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_BATTLESECTIONCHANGEDEVENTARGS_GET_SETCONDITIONCOMMANDONLY_OFFSET UNITYSDK_OFFSET(0x126E7C0)
#define MX_LOGIC_BATTLES_BATTLESECTIONCHANGEDEVENTARGS_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x126E7D0)
#define MX_LOGIC_BATTLES_BATTLESECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x125A390)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleSectionChangedEventArgs_TypeDefinitionIndex = 14002;

	class BattleSectionChangedEventArgs : public Il2CppObject
	{
	public:
		::System::Int32 _SectionId_k__BackingField; // 0x10
		::System::Boolean _SetConditionCommandOnly_k__BackingField; // 0x14

		::System::Boolean get_SetConditionCommandOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLESECTIONCHANGEDEVENTARGS_GET_SETCONDITIONCOMMANDONLY_OFFSET))(nullptr);
		}

		::System::Int32 get_SectionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLESECTIONCHANGEDEVENTARGS_GET_SECTIONID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLESECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

