#pragma once
#include "../unitysdk.h"

#define NPA_NXPOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBAC60)

namespace NPA
{
	inline static constexpr unsigned int NXPObject_TypeDefinitionIndex = 25538;

	class NXPObject : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

