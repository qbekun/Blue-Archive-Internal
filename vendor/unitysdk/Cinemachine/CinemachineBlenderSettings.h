#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineBlendDefinition; }

#define CINEMACHINE_CINEMACHINEBLENDERSETTINGS_GETBLENDFORVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x2856C20)
#define CINEMACHINE_CINEMACHINEBLENDERSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2856E40)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlenderSettings_TypeDefinitionIndex = 34286;

	class CinemachineBlenderSettings : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_CustomBlends; // 0x18
		::System::String* kBlendFromAnyCameraLabel; // 0x0

		::Cinemachine::CinemachineBlendDefinition* GetBlendForVirtualCameras(::System::String* str, ::System::String* str, ::Cinemachine::CinemachineBlendDefinition* arg)
		{
			return (return (::Cinemachine::CinemachineBlendDefinition*(*)(::System::String*, ::System::String*, ::Cinemachine::CinemachineBlendDefinition*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDERSETTINGS_GETBLENDFORVIRTUALCAMERAS_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDERSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

