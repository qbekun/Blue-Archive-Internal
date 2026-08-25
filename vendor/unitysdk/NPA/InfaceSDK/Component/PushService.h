#pragma once
#include "../../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Push { class NXPToyPushInfo; }
namespace NPA::Push { class NXPToySendEventPushResultDelegate; }

#define NPA_INFACESDK_COMPONENT_PUSHSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D158D0)
#define NPA_INFACESDK_COMPONENT_PUSHSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D15A10)
#define NPA_INFACESDK_COMPONENT_PUSHSERVICE_REQUESTGETPUSHPOLICY_OFFSET UNITYSDK_OFFSET(0x9D15B70)
#define NPA_INFACESDK_COMPONENT_PUSHSERVICE_REQUESTSETPUSHPOLICY_OFFSET UNITYSDK_OFFSET(0x9D15E90)
#define NPA_INFACESDK_COMPONENT_PUSHSERVICE_SENDEVENTPUSH_OFFSET UNITYSDK_OFFSET(0x9D161E0)
#define NPA_INFACESDK_COMPONENT_PUSHSERVICE_SENDEVENTPUSHBYGUID_OFFSET UNITYSDK_OFFSET(0x9D16540)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int PushService_TypeDefinitionIndex = 25909;

	class PushService : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PUSHSERVICE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PUSHSERVICE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void RequestGetPushPolicy(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PUSHSERVICE_REQUESTGETPUSHPOLICY_OFFSET))(str, arg, nullptr);
		}

		::System::Void RequestSetPushPolicy(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PUSHSERVICE_REQUESTSETPUSHPOLICY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SendEventPush(::NPA::Push::NXPToyPushInfo* arg, ::System::String* str, ::NPA::Push::NXPToySendEventPushResultDelegate* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToyPushInfo*, ::System::String*, ::NPA::Push::NXPToySendEventPushResultDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PUSHSERVICE_SENDEVENTPUSH_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SendEventPushByGuid(::NPA::Push::NXPToyPushInfo* arg, ::System::String* str, ::NPA::Push::NXPToySendEventPushResultDelegate* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToyPushInfo*, ::System::String*, ::NPA::Push::NXPToySendEventPushResultDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PUSHSERVICE_SENDEVENTPUSHBYGUID_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

