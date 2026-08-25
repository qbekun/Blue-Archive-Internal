#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonContract; }

#define NEWTONSOFT_JSON_SERIALIZATION_ICONTRACTRESOLVER_RESOLVECONTRACT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int IContractResolver_TypeDefinitionIndex = 31927;

	class IContractResolver : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ICONTRACTRESOLVER_RESOLVECONTRACT_OFFSET))(arg, nullptr);
		}

	};
}

