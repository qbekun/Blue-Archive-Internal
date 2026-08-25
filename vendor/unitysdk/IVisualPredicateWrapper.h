#pragma once
#include "unitysdk.h"

#define IVISUALPREDICATEWRAPPER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IVisualPredicateWrapper_TypeDefinitionIndex = 30226;

	class IVisualPredicateWrapper : public Il2CppObject
	{
	public:
		::System::Boolean Predicate(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + IVISUALPREDICATEWRAPPER_PREDICATE_OFFSET))(arg, nullptr);
		}

	};

