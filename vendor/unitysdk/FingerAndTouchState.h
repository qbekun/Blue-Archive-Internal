#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }
namespace UnityEngine::InputSystem { class Touchscreen; }

#define FINGERANDTOUCHSTATE_UPDATEACTIVETOUCHES_OFFSET UNITYSDK_OFFSET(0x9F4CCD0)
#define FINGERANDTOUCHSTATE_ADDFINGERS_OFFSET UNITYSDK_OFFSET(0x9F4E400)
#define FINGERANDTOUCHSTATE_REMOVEFINGERS_OFFSET UNITYSDK_OFFSET(0x9F4E510)
#define FINGERANDTOUCHSTATE_UPDATEACTIVEFINGERS_OFFSET UNITYSDK_OFFSET(0x9F4D570)
#define FINGERANDTOUCHSTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0x9F4A0C0)

	inline static constexpr unsigned int FingerAndTouchState_TypeDefinitionIndex = 28681;

	class FingerAndTouchState : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* updateMask; // 0x10
		::Il2CppArray<::System::Object*>* fingers; // 0x18
		::Il2CppArray<::System::Object*>* activeFingers; // 0x20
		::Il2CppArray<::System::Object*>* activeTouches; // 0x28
		::System::Int32 activeFingerCount; // 0x30
		::System::Int32 activeTouchCount; // 0x34
		::System::Int32 totalFingerCount; // 0x38
		::System::UInt32 lastId; // 0x3C
		::System::Boolean haveBuiltActiveTouches; // 0x40
		::System::Boolean haveActiveTouchesNeedingRefreshNextUpdate; // 0x41
		Il2CppObject* activeTouchState; // 0x48

		::System::Void UpdateActiveTouches()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINGERANDTOUCHSTATE_UPDATEACTIVETOUCHES_OFFSET))(nullptr);
		}

		::System::Void AddFingers(::UnityEngine::InputSystem::Touchscreen* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*, ::PVOID))((::PBYTE)hIl2Cpp + FINGERANDTOUCHSTATE_ADDFINGERS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveFingers(::UnityEngine::InputSystem::Touchscreen* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*, ::PVOID))((::PBYTE)hIl2Cpp + FINGERANDTOUCHSTATE_REMOVEFINGERS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateActiveFingers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINGERANDTOUCHSTATE_UPDATEACTIVEFINGERS_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINGERANDTOUCHSTATE_DESTROY_OFFSET))(nullptr);
		}

	};

