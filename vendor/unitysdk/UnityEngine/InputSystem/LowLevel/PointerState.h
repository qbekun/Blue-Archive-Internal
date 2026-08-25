#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x9F56670)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F566B0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int PointerState_TypeDefinitionIndex = 28758;

	class PointerState : public Il2CppObject
	{
	public:
		::System::UInt32 pointerId; // 0x10
		::UnityEngine::Vector2* position; // 0x14
		::UnityEngine::Vector2* delta; // 0x1C
		::System::Single pressure; // 0x24
		::UnityEngine::Vector2* radius; // 0x28
		::System::UInt16 buttons; // 0x30
		::System::UInt16 displayIndex; // 0x32

		::UnityEngine::InputSystem::Utilities::FourCC* get_kFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_KFORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

	};
}

