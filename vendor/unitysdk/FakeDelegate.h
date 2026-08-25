#pragma once
#include "unitysdk.h"

#define FAKEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2DBC0)
#define FAKEDELEGATE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9E2EFB0)

	inline static constexpr unsigned int FakeDelegate_TypeDefinitionIndex = 37236;

	class FakeDelegate : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* _Method_k__BackingField; // 0x10

		::System::Void .ctor(::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + FAKEDELEGATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKEDELEGATE_GET_METHOD_OFFSET))(nullptr);
		}

	};

