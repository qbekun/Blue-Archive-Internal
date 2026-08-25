#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXLog; }

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXLog_TypeDefinitionIndex = 37449;

	class NXLog : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Nexon::Pub::NXLog* Verbose; // 0x0
		::Nexon::Pub::NXLog* Debug; // 0x0
		::Nexon::Pub::NXLog* Info; // 0x0
		::Nexon::Pub::NXLog* Warn; // 0x0
		::Nexon::Pub::NXLog* Error; // 0x0

	};
}

