#pragma once
#include "unitysdk.h"

#define ISOFTYPE`1_PREDICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISOFTYPE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISOFTYPE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IsOfType`1_TypeDefinitionIndex = 30227;

	class IsOfType`1 : public Il2CppObject
	{
	public:
		Il2CppObject* s_Instance; // 0x0

		::System::Boolean Predicate(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ISOFTYPE`1_PREDICATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ISOFTYPE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ISOFTYPE`1_.CCTOR_OFFSET))(nullptr);
		}

	};

