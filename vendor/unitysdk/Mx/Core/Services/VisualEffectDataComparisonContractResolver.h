#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json { class MemberSerialization; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }

#define MX_CORE_SERVICES_VISUALEFFECTDATACOMPARISONCONTRACTRESOLVER_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1016BB0)
#define MX_CORE_SERVICES_VISUALEFFECTDATACOMPARISONCONTRACTRESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1016D20)
#define MX_CORE_SERVICES_VISUALEFFECTDATACOMPARISONCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET UNITYSDK_OFFSET(0x1016D70)

namespace MX::Core::Services
{
	inline static constexpr unsigned int VisualEffectDataComparisonContractResolver_TypeDefinitionIndex = 12788;

	class VisualEffectDataComparisonContractResolver : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::JsonProperty* CreateProperty(::System::Reflection::MemberInfo* arg, ::Newtonsoft::Json::MemberSerialization* arg2)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::System::Reflection::MemberInfo*, ::Newtonsoft::Json::MemberSerialization*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_VISUALEFFECTDATACOMPARISONCONTRACTRESOLVER_CREATEPROPERTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_VISUALEFFECTDATACOMPARISONCONTRACTRESOLVER_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* arg)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_VISUALEFFECTDATACOMPARISONCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET))(arg, nullptr);
		}

	};
}

