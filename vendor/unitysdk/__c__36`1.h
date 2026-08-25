#pragma once
#include "unitysdk.h"

namespace MX::Data { class ConquestCondition; }

#define <>C__36`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__36`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__36`1__TRYGETPHASEOPENCONDITION_B__36_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__36`1_TypeDefinitionIndex = 15767;

	class <>c__36`1 : public Il2CppObject
	{
	public:
		Il2CppObject* __9; // 0x0
		Il2CppObject* __9__36_0; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__36`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__36`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _TryGetPhaseOpenCondition_b__36_0(::MX::Data::ConquestCondition* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__36`1__TRYGETPHASEOPENCONDITION_B__36_0_OFFSET))(arg, nullptr);
		}

	};

