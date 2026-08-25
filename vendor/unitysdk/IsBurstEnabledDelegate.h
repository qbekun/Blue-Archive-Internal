#pragma once
#include "unitysdk.h"

#define ISBURSTENABLEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E2EC80)
#define ISBURSTENABLEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2E8B0)

	inline static constexpr unsigned int IsBurstEnabledDelegate_TypeDefinitionIndex = 37232;

	class IsBurstEnabledDelegate : public Il2CppObject
	{
	public:
		::System::Boolean Invoke()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLEDDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ISBURSTENABLEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

