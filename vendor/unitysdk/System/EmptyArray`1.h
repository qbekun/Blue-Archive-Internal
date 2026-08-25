#pragma once
#include "../unitysdk.h"

#define SYSTEM_EMPTYARRAY`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int EmptyArray`1_TypeDefinitionIndex = 23965;

	class EmptyArray`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Value; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EMPTYARRAY`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

