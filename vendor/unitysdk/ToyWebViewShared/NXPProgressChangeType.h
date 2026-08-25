#pragma once
#include "../unitysdk.h"

namespace ToyWebViewShared { class NXPProgressChangeType; }

namespace ToyWebViewShared
{
	inline static constexpr unsigned int NXPProgressChangeType_TypeDefinitionIndex = 25395;

	class NXPProgressChangeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::ToyWebViewShared::NXPProgressChangeType* Started; // 0x0
		::ToyWebViewShared::NXPProgressChangeType* Finished; // 0x0
		::ToyWebViewShared::NXPProgressChangeType* Failed; // 0x0
		::ToyWebViewShared::NXPProgressChangeType* Updated; // 0x0

	};
}

