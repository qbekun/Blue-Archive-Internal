#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkMouseEvent&; }

#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKMOUSEEVENTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D14560)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKMOUSEEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BAE0)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKMOUSEEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BAF0)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKMOUSEEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BB90)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Operate_NexonLinkMouseEventCallback_TypeDefinitionIndex = 25962;

	class Operate_NexonLinkMouseEventCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKMOUSEEVENTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkMouseEvent&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkMouseEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKMOUSEEVENTCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkMouseEvent&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkMouseEvent&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKMOUSEEVENTCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::InfaceSDK::Component::NexonLinkMouseEvent&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::NexonLinkMouseEvent&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKMOUSEEVENTCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

