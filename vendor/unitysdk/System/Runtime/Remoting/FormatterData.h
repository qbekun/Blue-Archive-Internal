#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_FORMATTERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x91CC430)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int FormatterData_TypeDefinitionIndex = 24443;

	class FormatterData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_FORMATTERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

