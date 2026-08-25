#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SOCKETIO3_EVENTS_SUBSCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x643BA0)
#define BESTHTTP_SOCKETIO3_EVENTS_SUBSCRIPTION_ADD_OFFSET UNITYSDK_OFFSET(0x643C20)
#define BESTHTTP_SOCKETIO3_EVENTS_SUBSCRIPTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x643D30)

namespace BestHTTP::SocketIO3::Events
{
	inline static constexpr unsigned int Subscription_TypeDefinitionIndex = 21415;

	class Subscription : public Il2CppObject
	{
	public:
		Il2CppObject* callbacks; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_SUBSCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_SUBSCRIPTION_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_SUBSCRIPTION_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

