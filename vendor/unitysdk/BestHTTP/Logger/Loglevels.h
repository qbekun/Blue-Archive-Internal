#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class Loglevels; }

namespace BestHTTP::Logger
{
	inline static constexpr unsigned int Loglevels_TypeDefinitionIndex = 23290;

	class Loglevels : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Logger::Loglevels* All; // 0x0
		::BestHTTP::Logger::Loglevels* Information; // 0x0
		::BestHTTP::Logger::Loglevels* Warning; // 0x0
		::BestHTTP::Logger::Loglevels* Error; // 0x0
		::BestHTTP::Logger::Loglevels* Exception; // 0x0
		::BestHTTP::Logger::Loglevels* None; // 0x0

	};
}

