#pragma once
#include "unitysdk.h"

class CharacterObject;
namespace MX::GameLogic::DBModel { class ClanAssistRentHistoryDB; }

#define <>C__DISPLAYCLASS74_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x255CE50)
#define <>C__DISPLAYCLASS74_1__ONSORT_B__8_OFFSET UNITYSDK_OFFSET(0x255CE60)

	inline static constexpr unsigned int <>c__DisplayClass74_1_TypeDefinitionIndex = 6100;

	class <>c__DisplayClass74_1 : public Il2CppObject
	{
	public:
		CharacterObject* character; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS74_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _OnSort_b__8(::MX::GameLogic::DBModel::ClanAssistRentHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ClanAssistRentHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS74_1__ONSORT_B__8_OFFSET))(arg, nullptr);
		}

	};

