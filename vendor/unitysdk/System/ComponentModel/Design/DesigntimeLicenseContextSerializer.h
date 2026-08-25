#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXTSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9B7D5D0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesigntimeLicenseContextSerializer_TypeDefinitionIndex = 29539;

	class DesigntimeLicenseContextSerializer : public Il2CppObject
	{
	public:
		::System::Void Deserialize(::System::IO::Stream* arg, ::System::String* str, ::System::ComponentModel::Design::RuntimeLicenseContext* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::System::ComponentModel::Design::RuntimeLicenseContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXTSERIALIZER_DESERIALIZE_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

