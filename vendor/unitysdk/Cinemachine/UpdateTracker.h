#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }

#define CINEMACHINE_UPDATETRACKER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x2865010)
#define CINEMACHINE_UPDATETRACKER_GETPREFERREDUPDATE_OFFSET UNITYSDK_OFFSET(0x28596C0)
#define CINEMACHINE_UPDATETRACKER_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x28656F0)
#define CINEMACHINE_UPDATETRACKER_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0x28651A0)
#define CINEMACHINE_UPDATETRACKER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x28658B0)
#define CINEMACHINE_UPDATETRACKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x28659B0)

namespace Cinemachine
{
	inline static constexpr unsigned int UpdateTracker_TypeDefinitionIndex = 34343;

	class UpdateTracker : public Il2CppObject
	{
	public:
		Il2CppObject* mUpdateStatus; // 0x0
		Il2CppObject* sToDelete; // 0x8
		::System::Single mLastUpdateTime; // 0x10

		::System::Void OnUpdate(UpdateClock* arg)
		{
			((::System::Void(*)(UpdateClock*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_ONUPDATE_OFFSET))(arg, nullptr);
		}

		UpdateClock* GetPreferredUpdate(::UnityEngine::Transform* arg)
		{
			return (return (UpdateClock*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_GETPREFERREDUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_INITIALIZEMODULE_OFFSET))(nullptr);
		}

		::System::Void UpdateTargets(UpdateClock* arg)
		{
			((::System::Void(*)(UpdateClock*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATETARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

