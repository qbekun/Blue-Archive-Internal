#pragma once
#include "unitysdk.h"

#define DROPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DA740)

	inline static constexpr unsigned int DropData_TypeDefinitionIndex = 30440;

	class DropData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* draggedIds; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPDATA_.CTOR_OFFSET))(nullptr);
		}

	};

