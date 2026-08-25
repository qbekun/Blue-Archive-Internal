#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::GameLogic::DBModel { class CharacterDB; }

#define <>C__DISPLAYCLASS73_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF6530)
#define <>C__DISPLAYCLASS73_0__.CTOR_B__4_OFFSET UNITYSDK_OFFSET(0xFF6540)

	inline static constexpr unsigned int <>c__DisplayClass73_0_TypeDefinitionIndex = 12576;

	class <>c__DisplayClass73_0 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountDB* accountDB; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS73_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _.ctor_b__4(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS73_0__.CTOR_B__4_OFFSET))(arg, nullptr);
		}

	};

