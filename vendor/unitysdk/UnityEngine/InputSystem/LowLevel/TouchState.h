#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class TouchPhase; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_BEGANINSAMEFRAME_OFFSET UNITYSDK_OFFSET(0x9F4BED0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_BEGANINSAMEFRAME_OFFSET UNITYSDK_OFFSET(0x9F4BEC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAPRELEASE_OFFSET UNITYSDK_OFFSET(0x9F4BFA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAPPRESS_OFFSET UNITYSDK_OFFSET(0x9F56970)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISNONEENDEDORCANCELED_OFFSET UNITYSDK_OFFSET(0x9F56990)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x9F4EA80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISORPHANEDPRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x9F569B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F569C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISINDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x9F56CE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISINDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x9F56CF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56D10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISPRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x9F50280)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F56D90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAP_OFFSET UNITYSDK_OFFSET(0x9F4CA00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAP_OFFSET UNITYSDK_OFFSET(0x9F50290)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISORPHANEDPRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x9F56DC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISPRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x9F50260)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56D50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x9F56DE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAPRELEASE_OFFSET UNITYSDK_OFFSET(0x9F56DF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAPPRESS_OFFSET UNITYSDK_OFFSET(0x9F56DB0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchState_TypeDefinitionIndex = 28765;

	class TouchState : public Il2CppObject
	{
	public:
		::System::Int32 kSizeInBytes; // 0x0
		::System::Int32 touchId; // 0x10
		::UnityEngine::Vector2* position; // 0x14
		::UnityEngine::Vector2* delta; // 0x1C
		::System::Single pressure; // 0x24
		::UnityEngine::Vector2* radius; // 0x28
		::System::Byte phaseId; // 0x30
		::System::Byte tapCount; // 0x31
		::System::Byte displayIndex; // 0x32
		::System::Byte flags; // 0x33
		::System::UInt32 updateStepCount; // 0x34
		::System::Double startTime; // 0x38
		::UnityEngine::Vector2* startPosition; // 0x40

		::System::Void set_beganInSameFrame(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_BEGANINSAMEFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_beganInSameFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_BEGANINSAMEFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_isTapRelease()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAPRELEASE_OFFSET))(nullptr);
		}

		::System::Void set_isTapPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAPPRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isNoneEndedOrCanceled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISNONEENDEDORCANCELED_OFFSET))(nullptr);
		}

		::System::Void set_phase(::UnityEngine::InputSystem::TouchPhase* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::TouchPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_PHASE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isOrphanedPrimaryTouch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISORPHANEDPRIMARYTOUCH_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_isIndirectTouch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISINDIRECTTOUCH_OFFSET))(nullptr);
		}

		::System::Void set_isIndirectTouch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISINDIRECTTOUCH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Boolean get_isPrimaryTouch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISPRIMARYTOUCH_OFFSET))(nullptr);
		}

		::System::Boolean get_isInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISINPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_isTap()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAP_OFFSET))(nullptr);
		}

		::System::Void set_isTap(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAP_OFFSET))(arg, nullptr);
		}

		::System::Void set_isOrphanedPrimaryTouch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISORPHANEDPRIMARYTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Void set_isPrimaryTouch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISPRIMARYTOUCH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::TouchPhase* get_phase()
		{
			return (return (::UnityEngine::InputSystem::TouchPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Void set_isTapRelease(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_SET_ISTAPRELEASE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isTapPress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSTATE_GET_ISTAPPRESS_OFFSET))(nullptr);
		}

	};
}

