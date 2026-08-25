#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56E10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x9F56E90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x9F56EA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56E50)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchscreenState_TypeDefinitionIndex = 28768;

	class TouchscreenState : public Il2CppObject
	{
	public:
		::System::Int32 MaxTouches; // 0x0
		<primaryTouchData>e__FixedBuffer* primaryTouchData; // 0x10
		::System::Int32 kTouchDataOffset; // 0x0
		<touchData>e__FixedBuffer* touchData; // 0x48

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Object** get_primaryTouch()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_PRIMARYTOUCH_OFFSET))(nullptr);
		}

		::System::Object** get_touches()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_TOUCHES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

	};
}

