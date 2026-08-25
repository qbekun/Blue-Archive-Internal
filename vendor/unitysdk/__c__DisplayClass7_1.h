#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Core::Services { class Hash64; }

#define <>C__DISPLAYCLASS7_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x122BC40)
#define <>C__DISPLAYCLASS7_1__GETCHECKCOUNT_B__2_OFFSET UNITYSDK_OFFSET(0x122BC50)

	inline static constexpr unsigned int <>c__DisplayClass7_1_TypeDefinitionIndex = 13791;

	class <>c__DisplayClass7_1 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* a; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS7_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetCheckCount_b__2(::MX::Core::Services::Hash64* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS7_1__GETCHECKCOUNT_B__2_OFFSET))(arg, nullptr);
		}

	};

