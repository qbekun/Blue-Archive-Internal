#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_MESSAGEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24DAD0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int MessageEventArgs_TypeDefinitionIndex = 31463;

	class MessageEventArgs : public Il2CppObject
	{
	public:
		::System::Int32 playerId; // 0x10
		::Il2CppArray<::System::Object*>* data; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_MESSAGEEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

