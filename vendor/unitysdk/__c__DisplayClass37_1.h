#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidCharacterDB; }

#define <>C__DISPLAYCLASS37_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA780)
#define <>C__DISPLAYCLASS37_1__UPDATE_B__2_OFFSET UNITYSDK_OFFSET(0x1EEA790)

	inline static constexpr unsigned int <>c__DisplayClass37_1_TypeDefinitionIndex = 1870;

	class <>c__DisplayClass37_1 : public Il2CppObject
	{
	public:
		::System::Int32 i; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS37_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Update_b__2(::MX::GameLogic::DBModel::RaidCharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::RaidCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS37_1__UPDATE_B__2_OFFSET))(arg, nullptr);
		}

	};

