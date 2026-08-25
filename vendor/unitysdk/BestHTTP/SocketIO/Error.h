#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO { class SocketIOErrors; }

#define BESTHTTP_SOCKETIO_ERROR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4F7160)
#define BESTHTTP_SOCKETIO_ERROR_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x4F71E0)
#define BESTHTTP_SOCKETIO_ERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F71F0)
#define BESTHTTP_SOCKETIO_ERROR_GET_CODE_OFFSET UNITYSDK_OFFSET(0x4F7230)
#define BESTHTTP_SOCKETIO_ERROR_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x4F7240)
#define BESTHTTP_SOCKETIO_ERROR_SET_CODE_OFFSET UNITYSDK_OFFSET(0x4F7250)

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 21345;

	class Error : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO::SocketIOErrors* _Code_k__BackingField; // 0x10
		::System::String* _Message_k__BackingField; // 0x18

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ERROR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_Message(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ERROR_SET_MESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SocketIO::SocketIOErrors* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOErrors*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ERROR_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SocketIO::SocketIOErrors* get_Code()
		{
			return (return (::BestHTTP::SocketIO::SocketIOErrors*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ERROR_GET_CODE_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ERROR_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_Code(::BestHTTP::SocketIO::SocketIOErrors* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOErrors*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_ERROR_SET_CODE_OFFSET))(arg, nullptr);
		}

	};
}

