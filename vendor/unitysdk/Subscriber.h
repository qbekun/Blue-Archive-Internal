#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class RemoteInputPlayerConnection; }

#define SUBSCRIBER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F00240)
#define SUBSCRIBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EFFF30)

	inline static constexpr unsigned int Subscriber_TypeDefinitionIndex = 28520;

	class Subscriber : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::RemoteInputPlayerConnection* owner; // 0x10
		Il2CppObject* observer; // 0x18

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBSCRIBER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBSCRIBER_.CTOR_OFFSET))(nullptr);
		}

	};

