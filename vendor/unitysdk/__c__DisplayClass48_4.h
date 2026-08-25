#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define <>C__DISPLAYCLASS48_4_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFBB00)
#define <>C__DISPLAYCLASS48_4__.CTOR_B__4_OFFSET UNITYSDK_OFFSET(0xFFBB10)
#define <>C__DISPLAYCLASS48_4__.CTOR_B__5_OFFSET UNITYSDK_OFFSET(0xFFBB30)

	inline static constexpr unsigned int <>c__DisplayClass48_4_TypeDefinitionIndex = 12591;

	class <>c__DisplayClass48_4 : public Il2CppObject
	{
	public:
		::System::Int64 serverId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _.ctor_b__4(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_4__.CTOR_B__4_OFFSET))(arg, nullptr);
		}

		::System::Boolean _.ctor_b__5(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_4__.CTOR_B__5_OFFSET))(arg, nullptr);
		}

	};

