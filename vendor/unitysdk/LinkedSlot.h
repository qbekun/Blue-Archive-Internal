#pragma once
#include "unitysdk.h"

#define LINKEDSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int LinkedSlot_TypeDefinitionIndex = 24078;

	class LinkedSlot : public Il2CppObject
	{
	public:
		Il2CppObject* Next; // 0x0
		Il2CppObject* Previous; // 0x0
		::Il2CppArray<::System::Object*>* SlotArray; // 0x0
		Il2CppObject* Value; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + LINKEDSLOT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

