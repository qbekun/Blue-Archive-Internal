#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ServerStatus; }

namespace MX::Data
{
	inline static constexpr unsigned int ServerStatus_TypeDefinitionIndex = 15857;

	class ServerStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Data::ServerStatus* None; // 0x0
		::MX::Data::ServerStatus* Open; // 0x0
		::MX::Data::ServerStatus* WhiteListOnly; // 0x0
		::MX::Data::ServerStatus* Error; // 0x0
		::MX::Data::ServerStatus* Maintenance; // 0x0

	};
}

