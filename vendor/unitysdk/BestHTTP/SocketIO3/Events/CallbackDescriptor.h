#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SOCKETIO3_EVENTS_CALLBACKDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x643B60)

namespace BestHTTP::SocketIO3::Events
{
	inline static constexpr unsigned int CallbackDescriptor_TypeDefinitionIndex = 21414;

	class CallbackDescriptor : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ParamTypes; // 0x10
		Il2CppObject* Callback; // 0x18
		::System::Boolean Once; // 0x20

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_CALLBACKDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

