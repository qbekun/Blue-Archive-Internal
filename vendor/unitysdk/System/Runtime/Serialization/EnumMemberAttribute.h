#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x983DCE0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int EnumMemberAttribute_TypeDefinitionIndex = 38097;

	class EnumMemberAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* value; // 0x10

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

