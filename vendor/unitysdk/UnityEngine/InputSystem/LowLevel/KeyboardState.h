#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem { class Key; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56380)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F563C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F56400)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_SET_OFFSET UNITYSDK_OFFSET(0x9F564B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_PRESS_OFFSET UNITYSDK_OFFSET(0x9F564C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_RELEASE_OFFSET UNITYSDK_OFFSET(0x9F564D0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int KeyboardState_TypeDefinitionIndex = 28754;

	class KeyboardState : public Il2CppObject
	{
	public:
		::System::Int32 kSizeInBits; // 0x0
		::System::Int32 kSizeInBytes; // 0x0
		<keys>e__FixedBuffer* keys; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::UnityEngine::InputSystem::Key* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Key*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Press(::UnityEngine::InputSystem::Key* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Key*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_PRESS_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::UnityEngine::InputSystem::Key* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Key*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_KEYBOARDSTATE_RELEASE_OFFSET))(arg, nullptr);
		}

	};
}

