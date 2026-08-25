#pragma once
#include "unitysdk.h"

#define INVENTORYSCROLLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2205C40)
#define INVENTORYSCROLLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2205C50)

	inline static constexpr unsigned int InventoryScrollInfo_TypeDefinitionIndex = 4309;

	class InventoryScrollInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* InventoryItems; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYSCROLLINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYSCROLLINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

