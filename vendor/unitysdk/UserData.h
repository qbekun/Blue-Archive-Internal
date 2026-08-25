#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class IInputActionCollection; }

	inline static constexpr unsigned int UserData_TypeDefinitionIndex = 28611;

	class UserData : public Il2CppObject
	{
	public:
		Il2CppObject* platformUserAccountHandle; // 0x10
		::System::String* platformUserAccountName; // 0x28
		::System::String* platformUserAccountId; // 0x30
		::System::Int32 deviceCount; // 0x38
		::System::Int32 deviceStartIndex; // 0x3C
		::UnityEngine::InputSystem::IInputActionCollection* actions; // 0x40
		Il2CppObject* controlScheme; // 0x48
		MatchResult* controlSchemeMatch; // 0x68
		::System::Int32 lostDeviceCount; // 0xB8
		::System::Int32 lostDeviceStartIndex; // 0xBC
		UserFlags* flags; // 0xC0

	};

