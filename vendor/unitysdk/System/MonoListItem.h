#pragma once
#include "../unitysdk.h"

#define SYSTEM_MONOLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BCBB0)

namespace System
{
	inline static constexpr unsigned int MonoListItem_TypeDefinitionIndex = 23981;

	class MonoListItem : public Il2CppObject
	{
	public:
		::System::MonoListItem* next; // 0x10
		::System::Object* data; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOLISTITEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

