#pragma once
#include "unitysdk.h"

class FormationCharacter;

#define <>C__DISPLAYCLASS99_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x23846D0)
#define <>C__DISPLAYCLASS99_0__ONCLICKSLOT_B__0_OFFSET UNITYSDK_OFFSET(0x23846E0)

	inline static constexpr unsigned int <>c__DisplayClass99_0_TypeDefinitionIndex = 5118;

	class <>c__DisplayClass99_0 : public Il2CppObject
	{
	public:
		::System::Int64 serverId; // 0x10
		Il2CppObject* __9__0; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS99_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickSlot_b__0(FormationCharacter* arg)
		{
			return ((::System::Boolean(*)(FormationCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS99_0__ONCLICKSLOT_B__0_OFFSET))(arg, nullptr);
		}

	};

