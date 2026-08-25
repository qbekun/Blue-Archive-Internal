#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RemoteConfigSettings; }

#define UNITYENGINE_REMOTECONFIGSETTINGS_REMOTECONFIGSETTINGSUPDATED_OFFSET UNITYSDK_OFFSET(0xA49EEA0)

namespace UnityEngine
{
	inline static constexpr unsigned int RemoteConfigSettings_TypeDefinitionIndex = 38012;

	class RemoteConfigSettings : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		Il2CppObject* Updated; // 0x18

		::System::Void RemoteConfigSettingsUpdated(::UnityEngine::RemoteConfigSettings* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::RemoteConfigSettings*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTECONFIGSETTINGS_REMOTECONFIGSETTINGSUPDATED_OFFSET))(arg, arg, nullptr);
		}

	};
}

