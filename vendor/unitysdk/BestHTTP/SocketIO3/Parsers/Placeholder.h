#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SOCKETIO3_PARSERS_PLACEHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x640620)

namespace BestHTTP::SocketIO3::Parsers
{
	inline static constexpr unsigned int Placeholder_TypeDefinitionIndex = 21408;

	class Placeholder : public Il2CppObject
	{
	public:
		::System::Boolean _placeholder; // 0x10
		::System::Int32 num; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_PLACEHOLDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

