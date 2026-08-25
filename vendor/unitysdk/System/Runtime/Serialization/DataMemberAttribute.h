#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x983DCA0)
#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x983DCB0)
#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ISREQUIRED_OFFSET UNITYSDK_OFFSET(0x983DCC0)
#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_EMITDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x983DCD0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DataMemberAttribute_TypeDefinitionIndex = 38096;

	class DataMemberAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 order; // 0x18
		::System::Boolean isRequired; // 0x1C
		::System::Boolean emitDefaultValue; // 0x1D

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRequired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ISREQUIRED_OFFSET))(nullptr);
		}

		::System::Boolean get_EmitDefaultValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_EMITDEFAULTVALUE_OFFSET))(nullptr);
		}

	};
}

