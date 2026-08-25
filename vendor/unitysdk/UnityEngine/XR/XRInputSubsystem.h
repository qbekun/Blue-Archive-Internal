#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKETRACKINGORIGINUPDATEDEVENT_OFFSET UNITYSDK_OFFSET(0xA4AC6D0)
#define UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKEBOUNDARYCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0xA4AC780)
#define UNITYENGINE_XR_XRINPUTSUBSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AC830)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRInputSubsystem_TypeDefinitionIndex = 37607;

	class XRInputSubsystem : public ::MX::MinigameCCG::Procedures::SearchTargets
	{
	public:
		Il2CppObject* trackingOriginUpdated; // 0x20
		Il2CppObject* boundaryChanged; // 0x28

		::System::Void InvokeTrackingOriginUpdatedEvent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKETRACKINGORIGINUPDATEDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeBoundaryChangedEvent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKEBOUNDARYCHANGEDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

