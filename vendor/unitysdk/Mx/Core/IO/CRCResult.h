#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::IO { class CRCResult; }

namespace MX::Core::IO
{
	inline static constexpr unsigned int CRCResult_TypeDefinitionIndex = 12822;

	class CRCResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::IO::CRCResult* None; // 0x0
		::MX::Core::IO::CRCResult* FileNotExists; // 0x0
		::MX::Core::IO::CRCResult* Valid; // 0x0
		::MX::Core::IO::CRCResult* Invalid; // 0x0

	};
}

