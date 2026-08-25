#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ItemDB; }

#define <>C__DISPLAYCLASS17_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xFC33F0)
#define <>C__DISPLAYCLASS17_1__CANCONSUME_B__1_OFFSET UNITYSDK_OFFSET(0xFC3400)

	inline static constexpr unsigned int <>c__DisplayClass17_1_TypeDefinitionIndex = 12394;

	class <>c__DisplayClass17_1 : public Il2CppObject
	{
	public:
		Il2CppObject* pair; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CanConsume_b__1(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_1__CANCONSUME_B__1_OFFSET))(arg, nullptr);
		}

	};

