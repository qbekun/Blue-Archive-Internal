#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::PlatformSupport::IL2CPP { class Option; }

namespace BestHTTP::PlatformSupport::IL2CPP
{
	inline static constexpr unsigned int Option_TypeDefinitionIndex = 23283;

	class Option : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::PlatformSupport::IL2CPP::Option* NullChecks; // 0x0
		::BestHTTP::PlatformSupport::IL2CPP::Option* ArrayBoundsChecks; // 0x0
		::BestHTTP::PlatformSupport::IL2CPP::Option* DivideByZeroChecks; // 0x0

	};
}

