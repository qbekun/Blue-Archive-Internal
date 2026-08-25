#pragma once
#include "../unitysdk.h"

#define SYSTEM_CONTEXTBOUNDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93955D0)

namespace System
{
	inline static constexpr unsigned int ContextBoundObject_TypeDefinitionIndex = 23920;

	class ContextBoundObject : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONTEXTBOUNDOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

