#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int ParameterAttributes_TypeDefinitionIndex = 24871;

	class ParameterAttributes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::ParameterAttributes* None; // 0x0
		::System::Reflection::ParameterAttributes* In; // 0x0
		::System::Reflection::ParameterAttributes* Out; // 0x0
		::System::Reflection::ParameterAttributes* Lcid; // 0x0
		::System::Reflection::ParameterAttributes* Retval; // 0x0
		::System::Reflection::ParameterAttributes* Optional; // 0x0
		::System::Reflection::ParameterAttributes* HasDefault; // 0x0
		::System::Reflection::ParameterAttributes* HasFieldMarshal; // 0x0
		::System::Reflection::ParameterAttributes* Reserved3; // 0x0
		::System::Reflection::ParameterAttributes* Reserved4; // 0x0
		::System::Reflection::ParameterAttributes* ReservedMask; // 0x0

	};
}

