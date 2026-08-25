#pragma once
#include "../../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Push { class NXPToySendEventPushResult; }

#define NPA_INFACESDK_COMPONENT_SENDEVENTPUSHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D16F00)
#define NPA_INFACESDK_COMPONENT_SENDEVENTPUSHRESPONSE_TOPUBLICRESULT_OFFSET UNITYSDK_OFFSET(0x9D17210)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int SendEventPushResponse_TypeDefinitionIndex = 25971;

	class SendEventPushResponse : public Il2CppObject
	{
	public:
		ResultSet* _result; // 0x28

		::System::Void .ctor(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_SENDEVENTPUSHRESPONSE_.CTOR_OFFSET))(arg, nullptr);
		}

		::NPA::Push::NXPToySendEventPushResult* ToPublicResult()
		{
			return (return (::NPA::Push::NXPToySendEventPushResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_SENDEVENTPUSHRESPONSE_TOPUBLICRESULT_OFFSET))(nullptr);
		}

	};
}

