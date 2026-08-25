#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNERFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFC720)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNERFACTORY_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexRunnerFactory_TypeDefinitionIndex = 29235;

	class RegexRunnerFactory : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNERFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexRunner* CreateInstance()
		{
			return (return (::System::Text::RegularExpressions::RegexRunner*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNERFACTORY_CREATEINSTANCE_OFFSET))(nullptr);
		}

	};
}

