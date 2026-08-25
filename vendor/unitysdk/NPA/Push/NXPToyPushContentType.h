#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class NXPToyPushContentType; }

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToyPushContentType_TypeDefinitionIndex = 27338;

	class NXPToyPushContentType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Push::NXPToyPushContentType* NORMAL; // 0x0
		::NPA::Push::NXPToyPushContentType* IMAGE; // 0x0
		::NPA::Push::NXPToyPushContentType* VIDEO; // 0x0
		::NPA::Push::NXPToyPushContentType* GIFS; // 0x0
		::NPA::Push::NXPToyPushContentType* BANNER; // 0x0

	};
}

