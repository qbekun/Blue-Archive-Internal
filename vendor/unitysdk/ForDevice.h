#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define FORDEVICE_ONNEXT_OFFSET UNITYSDK_OFFSET(0x9E86280)
#define FORDEVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E861C0)
#define FORDEVICE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9E86400)
#define FORDEVICE_ONERROR_OFFSET UNITYSDK_OFFSET(0x9E86410)

	inline static constexpr unsigned int ForDevice_TypeDefinitionIndex = 28936;

	class ForDevice : public Il2CppObject
	{
	public:
		Il2CppObject* m_Observer; // 0x10
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x18
		::System::Type* m_DeviceType; // 0x20

		::System::Void OnNext(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + FORDEVICE_ONNEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::UnityEngine::InputSystem::InputDevice* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, ::UnityEngine::InputSystem::InputDevice*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FORDEVICE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORDEVICE_ONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void OnError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + FORDEVICE_ONERROR_OFFSET))(arg, nullptr);
		}

	};

