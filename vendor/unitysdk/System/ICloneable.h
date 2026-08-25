#pragma once
#include "../unitysdk.h"

#define SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int ICloneable_TypeDefinitionIndex = 23767;

	class ICloneable : public Il2CppObject
	{
	public:
		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICLONEABLE_CLONE_OFFSET))(nullptr);
		}

	};
}

