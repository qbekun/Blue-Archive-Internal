#pragma once
#include "unitysdk.h"

namespace MX::Data { class ConquestCondition; }

#define <>C__48`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__48`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__48`1__TRYGETSTEPOPENCONDITION_B__48_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__48`1_TypeDefinitionIndex = 15754;

	class <>c__48`1 : public Il2CppObject
	{
	public:
		Il2CppObject* __9; // 0x0
		Il2CppObject* __9__48_0; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__48`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__48`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _TryGetStepOpenCondition_b__48_0(::MX::Data::ConquestCondition* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__48`1__TRYGETSTEPOPENCONDITION_B__48_0_OFFSET))(arg, nullptr);
		}

	};

