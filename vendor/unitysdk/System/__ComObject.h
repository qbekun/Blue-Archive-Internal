#pragma once
#include "../unitysdk.h"

#define SYSTEM___COMOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CBC50)

namespace System
{
	inline static constexpr unsigned int __ComObject_TypeDefinitionIndex = 24022;

	class __ComObject : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___COMOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

