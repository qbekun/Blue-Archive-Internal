#pragma once
#include "unitysdk.h"

#define EVENTARCHIVEITEMGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2468B50)

	inline static constexpr unsigned int EventArchiveItemGroup_TypeDefinitionIndex = 5618;

	class EventArchiveItemGroup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EventArchiveItems; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTARCHIVEITEMGROUP_.CTOR_OFFSET))(nullptr);
		}

	};

