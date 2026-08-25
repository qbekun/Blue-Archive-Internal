#pragma once
#include "../../unitysdk.h"

namespace AutoMapper { class MemberList; }

#define AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSIONBASE`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSIONBASE`3_INCLUDEALLDERIVED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper::Configuration
{
	inline static constexpr unsigned int MappingExpressionBase`3_TypeDefinitionIndex = 37655;

	class MappingExpressionBase`3 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::AutoMapper::MemberList* arg)
		{
			((::System::Void(*)(::AutoMapper::MemberList*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSIONBASE`3_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* IncludeAllDerived()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSIONBASE`3_INCLUDEALLDERIVED_OFFSET))(nullptr);
		}

	};
}

