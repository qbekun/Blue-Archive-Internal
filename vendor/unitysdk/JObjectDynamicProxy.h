#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Linq { class JObject; }

#define JOBJECTDYNAMICPROXY_TRYGETMEMBER_OFFSET UNITYSDK_OFFSET(0x9505860)
#define JOBJECTDYNAMICPROXY_TRYSETMEMBER_OFFSET UNITYSDK_OFFSET(0x95058F0)
#define JOBJECTDYNAMICPROXY_GETDYNAMICMEMBERNAMES_OFFSET UNITYSDK_OFFSET(0x95059B0)
#define JOBJECTDYNAMICPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9505820)

	inline static constexpr unsigned int JObjectDynamicProxy_TypeDefinitionIndex = 32023;

	class JObjectDynamicProxy : public ::MX::NetworkProtocol::RaidGiveUpRequest
	{
	public:
		::System::Boolean TryGetMember(::Newtonsoft::Json::Linq::JObject* arg, ::System::Dynamic::GetMemberBinder* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JObject*, ::System::Dynamic::GetMemberBinder*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + JOBJECTDYNAMICPROXY_TRYGETMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TrySetMember(::Newtonsoft::Json::Linq::JObject* arg, ::System::Dynamic::SetMemberBinder* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JObject*, ::System::Dynamic::SetMemberBinder*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + JOBJECTDYNAMICPROXY_TRYSETMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetDynamicMemberNames(::Newtonsoft::Json::Linq::JObject* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JObject*, ::PVOID))((::PBYTE)hIl2Cpp + JOBJECTDYNAMICPROXY_GETDYNAMICMEMBERNAMES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBJECTDYNAMICPROXY_.CTOR_OFFSET))(nullptr);
		}

	};

