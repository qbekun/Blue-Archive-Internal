#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class UIBase;
namespace UnityEngine { class Coroutine; }
namespace MX::GameLogic::Service { class OpenConditionLockReason; }
namespace FlatData { class OpenConditionContent; }

#define MULLIGANOPENCONDITIONBUTTONCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x24E33B0)
#define MULLIGANOPENCONDITIONBUTTONCONTROLLER_SET_LOCKREASON_OFFSET UNITYSDK_OFFSET(0x24E3470)
#define MULLIGANOPENCONDITIONBUTTONCONTROLLER__CHECKOPENCONDITION_G__LOCK|15_0_OFFSET UNITYSDK_OFFSET(0x24E3480)
#define MULLIGANOPENCONDITIONBUTTONCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24E34F0)
#define MULLIGANOPENCONDITIONBUTTONCONTROLLER_COPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x24E3530)
#define MULLIGANOPENCONDITIONBUTTONCONTROLLER_SET_ISBUTTONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x24E35C0)
#define MULLIGANOPENCONDITIONBUTTONCONTROLLER_GET_ISBUTTONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x24E35D0)
#define MULLIGANOPENCONDITIONBUTTONCONTROLLER_CHECKOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x24E35E0)
#define MULLIGANOPENCONDITIONBUTTONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E39E0)
#define MULLIGANOPENCONDITIONBUTTONCONTROLLER_GET_LOCKREASON_OFFSET UNITYSDK_OFFSET(0x24E39F0)

	inline static constexpr unsigned int MulliganOpenConditionButtonController_TypeDefinitionIndex = 6013;

	class MulliganOpenConditionButtonController : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* LockObject; // 0x18
		::UnityEngine::Animation* LockAnimation; // 0x20
		UIBase* uiParent; // 0x28
		::UnityEngine::Coroutine* unlockCoroutine; // 0x30
		::MX::GameLogic::Service::OpenConditionLockReason* _LockReason_k__BackingField; // 0x38
		::System::Boolean _IsButtonUnlocked_k__BackingField; // 0x3C
		::FlatData::OpenConditionContent* OpenConditionContentType; // 0x0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_LockReason(::MX::GameLogic::Service::OpenConditionLockReason* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Service::OpenConditionLockReason*, ::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER_SET_LOCKREASON_OFFSET))(arg, nullptr);
		}

		::System::Void _CheckOpenCondition_g__Lock|15_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER__CHECKOPENCONDITION_G__LOCK|15_0_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayUnlockAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER_COPLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void set_IsButtonUnlocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER_SET_ISBUTTONUNLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsButtonUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER_GET_ISBUTTONUNLOCKED_OFFSET))(nullptr);
		}

		::System::Void CheckOpenCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER_CHECKOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Service::OpenConditionLockReason* get_LockReason()
		{
			return ((::MX::GameLogic::Service::OpenConditionLockReason*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULLIGANOPENCONDITIONBUTTONCONTROLLER_GET_LOCKREASON_OFFSET))(nullptr);
		}

	};

