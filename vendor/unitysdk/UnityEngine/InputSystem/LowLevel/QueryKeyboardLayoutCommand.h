#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class QueryKeyboardLayoutCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_READLAYOUTNAME_OFFSET UNITYSDK_OFFSET(0x9F553D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F553F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_WRITELAYOUTNAME_OFFSET UNITYSDK_OFFSET(0x9F55470)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F554A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55430)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryKeyboardLayoutCommand_TypeDefinitionIndex = 28727;

	class QueryKeyboardLayoutCommand : public Il2CppObject
	{
	public:
		::System::Int32 kMaxNameLength; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		<nameBuffer>e__FixedBuffer* nameBuffer; // 0x18

		::System::String* ReadLayoutName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_READLAYOUTNAME_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::System::Void WriteLayoutName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_WRITELAYOUTNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYBOARDLAYOUTCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

