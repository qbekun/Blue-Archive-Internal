#pragma once
#include "unitysdk.h"

#define EMPTYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA5CD0)

	inline static constexpr unsigned int EmptyStream_TypeDefinitionIndex = 29668;

	class EmptyStream : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPTYSTREAM_.CTOR_OFFSET))(nullptr);
		}

	};

