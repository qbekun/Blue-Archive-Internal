#pragma once
#include "../../unitysdk.h"

#define MX_DATA_UIENUMTYPES_.CTOR_OFFSET UNITYSDK_OFFSET(0x1982050)

namespace MX::Data
{
	inline static constexpr unsigned int UIEnumTypes_TypeDefinitionIndex = 16523;

	class UIEnumTypes : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIENUMTYPES_.CTOR_OFFSET))(nullptr);
		}

	};
}

