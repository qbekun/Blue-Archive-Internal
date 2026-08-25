#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Actions { class LockStatus; }

#define MX_LOGIC_ACTIONS_ACTIONLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x10E61B0)
#define MX_LOGIC_ACTIONS_ACTIONLOCK_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x10E61D0)
#define MX_LOGIC_ACTIONS_ACTIONLOCK_UNLOCK_OFFSET UNITYSDK_OFFSET(0x10E61E0)
#define MX_LOGIC_ACTIONS_ACTIONLOCK_LOCK_OFFSET UNITYSDK_OFFSET(0x10E61F0)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int ActionLock_TypeDefinitionIndex = 12994;

	class ActionLock : public Il2CppObject
	{
	public:
		::MX::Logic::Actions::LockStatus* lockStatus; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ACTIONLOCK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ACTIONLOCK_GET_ISLOCKED_OFFSET))(nullptr);
		}

		::System::Void Unlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ACTIONLOCK_UNLOCK_OFFSET))(nullptr);
		}

		::System::Void Lock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ACTIONLOCK_LOCK_OFFSET))(nullptr);
		}

	};
}

