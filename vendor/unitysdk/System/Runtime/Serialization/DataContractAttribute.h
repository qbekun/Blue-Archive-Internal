#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x983DC90)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DataContractAttribute_TypeDefinitionIndex = 38095;

	class DataContractAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean isReference; // 0x10

		::System::Boolean get_IsReference()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE_GET_ISREFERENCE_OFFSET))(nullptr);
		}

	};
}

