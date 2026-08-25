#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonContract; }

#define MX_CORE_SERVICES_SCRIPTABLEOBJECTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET UNITYSDK_OFFSET(0x10169F0)
#define MX_CORE_SERVICES_SCRIPTABLEOBJECTCONTRACTRESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1016B50)

namespace MX::Core::Services
{
	inline static constexpr unsigned int ScriptableObjectContractResolver_TypeDefinitionIndex = 12785;

	class ScriptableObjectContractResolver : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* arg)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SCRIPTABLEOBJECTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SCRIPTABLEOBJECTCONTRACTRESOLVER_.CTOR_OFFSET))(nullptr);
		}

	};
}

