#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json { class MemberSerialization; }

#define MX_CORE_SERVICES_SKILLDATACOMPARISONCONTRACTRESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1016F80)
#define MX_CORE_SERVICES_SKILLDATACOMPARISONCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET UNITYSDK_OFFSET(0x10170D0)
#define MX_CORE_SERVICES_SKILLDATACOMPARISONCONTRACTRESOLVER_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1017230)

namespace MX::Core::Services
{
	inline static constexpr unsigned int SkillDataComparisonContractResolver_TypeDefinitionIndex = 12791;

	class SkillDataComparisonContractResolver : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* BlackList; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SKILLDATACOMPARISONCONTRACTRESOLVER_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* arg)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SKILLDATACOMPARISONCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreateProperty(::System::Reflection::MemberInfo* arg, ::Newtonsoft::Json::MemberSerialization* arg2)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::System::Reflection::MemberInfo*, ::Newtonsoft::Json::MemberSerialization*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SKILLDATACOMPARISONCONTRACTRESOLVER_CREATEPROPERTY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

