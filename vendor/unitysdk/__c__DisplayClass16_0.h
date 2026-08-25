#pragma once
#include "unitysdk.h"

#define <>C__DISPLAYCLASS16_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x141DC80)
#define <>C__DISPLAYCLASS16_0__FINDLOGICEFFECTTYPEBYNAME_B__0_OFFSET UNITYSDK_OFFSET(0x141DC90)
#define <>C__DISPLAYCLASS16_0__FINDLOGICEFFECTTYPEBYNAME_B__3_OFFSET UNITYSDK_OFFSET(0x141DCD0)

	inline static constexpr unsigned int <>c__DisplayClass16_0_TypeDefinitionIndex = 14774;

	class <>c__DisplayClass16_0 : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS16_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindLogicEffectTypeByName_b__0(::System::Type* arg)
		{
			return ((::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS16_0__FINDLOGICEFFECTTYPEBYNAME_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _FindLogicEffectTypeByName_b__3(::System::Type* arg)
		{
			return ((::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS16_0__FINDLOGICEFFECTTYPEBYNAME_B__3_OFFSET))(arg, nullptr);
		}

	};

