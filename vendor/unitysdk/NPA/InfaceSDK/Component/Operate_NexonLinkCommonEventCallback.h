#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkCommonEvent&; }

#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKCOMMONEVENTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D143C0)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKCOMMONEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B940)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKCOMMONEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B950)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKCOMMONEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B9F0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Operate_NexonLinkCommonEventCallback_TypeDefinitionIndex = 25960;

	class Operate_NexonLinkCommonEventCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKCOMMONEVENTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkCommonEvent&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkCommonEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKCOMMONEVENTCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkCommonEvent&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkCommonEvent&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKCOMMONEVENTCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::InfaceSDK::Component::NexonLinkCommonEvent&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::NexonLinkCommonEvent&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKCOMMONEVENTCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

