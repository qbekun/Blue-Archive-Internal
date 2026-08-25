#pragma once
#include "../unitysdk.h"

namespace AutoMapper { class PascalCaseNamingConvention; }

#define AUTOMAPPER_PASCALCASENAMINGCONVENTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D0D30)
#define AUTOMAPPER_PASCALCASENAMINGCONVENTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4D0D40)

namespace AutoMapper
{
	inline static constexpr unsigned int PascalCaseNamingConvention_TypeDefinitionIndex = 37626;

	class PascalCaseNamingConvention : public Il2CppObject
	{
	public:
		::AutoMapper::PascalCaseNamingConvention* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_PASCALCASENAMINGCONVENTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_PASCALCASENAMINGCONVENTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

