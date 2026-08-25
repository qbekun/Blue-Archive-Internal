#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_IVALIDATABLE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int IValidatable_TypeDefinitionIndex = 13539;

	class IValidatable : public Il2CppObject
	{
	public:
		::System::Boolean Validate(::System::String&* arg)
		{
			return ((::System::Boolean(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IVALIDATABLE_VALIDATE_OFFSET))(arg, nullptr);
		}

	};
}

