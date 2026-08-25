#pragma once
#include "../unitysdk.h"

#define SYSTEM_DELEGATEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B5A10)

namespace System
{
	inline static constexpr unsigned int DelegateData_TypeDefinitionIndex = 23961;

	class DelegateData : public Il2CppObject
	{
	public:
		::System::Type* target_type; // 0x10
		::System::String* method_name; // 0x18
		::System::Boolean curried_first_arg; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

