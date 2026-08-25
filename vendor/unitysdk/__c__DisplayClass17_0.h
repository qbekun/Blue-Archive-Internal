#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace FlatData { class LogicEffectCategory; }

#define <>C__DISPLAYCLASS17_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1223190)
#define <>C__DISPLAYCLASS17_0__CHECKLOGICEFFECTCATEGORY_B__0_OFFSET UNITYSDK_OFFSET(0x1224330)

	inline static constexpr unsigned int <>c__DisplayClass17_0_TypeDefinitionIndex = 13749;

	class <>c__DisplayClass17_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* entity; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CheckLogicEffectCategory_b__0(::FlatData::LogicEffectCategory* arg)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_0__CHECKLOGICEFFECTCATEGORY_B__0_OFFSET))(arg, nullptr);
		}

	};

