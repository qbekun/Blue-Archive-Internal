#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkResolutionChangeEvent&; }

#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKRESOLUTIONCHANGEEVENTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D14490)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKRESOLUTIONCHANGEEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BA10)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKRESOLUTIONCHANGEEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BA20)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKRESOLUTIONCHANGEEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BAC0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Operate_NexonLinkResolutionChangeEventCallback_TypeDefinitionIndex = 25961;

	class Operate_NexonLinkResolutionChangeEventCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKRESOLUTIONCHANGEEVENTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKRESOLUTIONCHANGEEVENTCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKRESOLUTIONCHANGEEVENTCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKRESOLUTIONCHANGEEVENTCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

