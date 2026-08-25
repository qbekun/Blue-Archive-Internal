#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class HighlightOption; }

#define MX_LOGIC_DATA_HIGHLIGHTSERVICE_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x11F3D00)
#define MX_LOGIC_DATA_HIGHLIGHTSERVICE_ISFACTOR_OFFSET UNITYSDK_OFFSET(0x11F3D10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HighlightService_TypeDefinitionIndex = 13525;

	class HighlightService : public Il2CppObject
	{
	public:
		::System::Boolean IsHighlight(::MX::Logic::Data::HighlightOption* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::HighlightOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HIGHLIGHTSERVICE_ISHIGHLIGHT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFactor(::MX::Logic::Data::HighlightOption* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::HighlightOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HIGHLIGHTSERVICE_ISFACTOR_OFFSET))(arg, nullptr);
		}

	};
}

