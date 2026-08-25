#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_REFLECTION_EMIT_UNMANAGEDMARSHAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9254BE0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int UnmanagedMarshal_TypeDefinitionIndex = 24942;

	class UnmanagedMarshal : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_UNMANAGEDMARSHAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

