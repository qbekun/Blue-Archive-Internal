#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_SOCKETIO3_ERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x5091B0)
#define BESTHTTP_SOCKETIO3_ERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x5091C0)
#define BESTHTTP_SOCKETIO3_ERROR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x5091F0)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 21373;

	class Error : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ERROR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ERROR_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_ERROR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

