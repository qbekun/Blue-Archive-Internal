#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class Socket; }
namespace BestHTTP::SocketIO3 { class EmitBuilder; }

#define BESTHTTP_SOCKETIO3_EMITBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x50A110)
#define BESTHTTP_SOCKETIO3_EMITBUILDER_EXPECTACKNOWLEDGEMENT_OFFSET UNITYSDK_OFFSET(0x50A140)
#define BESTHTTP_SOCKETIO3_EMITBUILDER_EXPECTACKNOWLEDGEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_EMITBUILDER_VOLATILE_OFFSET UNITYSDK_OFFSET(0x50A320)
#define BESTHTTP_SOCKETIO3_EMITBUILDER_EMIT_OFFSET UNITYSDK_OFFSET(0x50A350)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int EmitBuilder_TypeDefinitionIndex = 21383;

	class EmitBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::Socket* socket; // 0x10
		::System::Boolean isVolatile; // 0x18
		::System::Int32 id; // 0x1C

		::System::Void .ctor(::BestHTTP::SocketIO3::Socket* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EMITBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::EmitBuilder* ExpectAcknowledgement(::System::Action* arg)
		{
			return (return (::BestHTTP::SocketIO3::EmitBuilder*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EMITBUILDER_EXPECTACKNOWLEDGEMENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::EmitBuilder* ExpectAcknowledgement(Il2CppObject* arg)
		{
			return (return (::BestHTTP::SocketIO3::EmitBuilder*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EMITBUILDER_EXPECTACKNOWLEDGEMENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::EmitBuilder* Volatile()
		{
			return (return (::BestHTTP::SocketIO3::EmitBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EMITBUILDER_VOLATILE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO3::Socket* Emit(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SocketIO3::Socket*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EMITBUILDER_EMIT_OFFSET))(str, arg, nullptr);
		}

	};
}

