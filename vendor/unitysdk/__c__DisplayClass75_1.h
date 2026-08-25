#pragma once
#include "unitysdk.h"

class FormationCharacter;

#define <>C__DISPLAYCLASS75_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x255D2D0)
#define <>C__DISPLAYCLASS75_1__ONCLICKSLOT_B__1_OFFSET UNITYSDK_OFFSET(0x255D2E0)

	inline static constexpr unsigned int <>c__DisplayClass75_1_TypeDefinitionIndex = 6103;

	class <>c__DisplayClass75_1 : public Il2CppObject
	{
	public:
		::System::Int64 serverId; // 0x10
		Il2CppObject* __9__1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS75_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickSlot_b__1(FormationCharacter* arg)
		{
			return ((::System::Boolean(*)(FormationCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS75_1__ONCLICKSLOT_B__1_OFFSET))(arg, nullptr);
		}

	};

