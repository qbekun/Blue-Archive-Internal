#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class FurnitureDB; }

#define <>C__DISPLAYCLASS17_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xFC3460)
#define <>C__DISPLAYCLASS17_2__CANCONSUME_B__2_OFFSET UNITYSDK_OFFSET(0xFC3470)

	inline static constexpr unsigned int <>c__DisplayClass17_2_TypeDefinitionIndex = 12395;

	class <>c__DisplayClass17_2 : public Il2CppObject
	{
	public:
		Il2CppObject* pair; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CanConsume_b__2(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_2__CANCONSUME_B__2_OFFSET))(arg, nullptr);
		}

	};

