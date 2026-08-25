#pragma once
#include "unitysdk.h"

#define UISHOPMAXMINBUTTONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xAB99F0)
#define UISHOPMAXMINBUTTONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xAB9B60)
#define UISHOPMAXMINBUTTONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB9D90)

	inline static constexpr unsigned int UIShopMaxMinButtonController_TypeDefinitionIndex = 8015;

	class UIShopMaxMinButtonController : public Il2CppObject
	{
	public:
		::System::Int32 CAN_INPUT_COUNT_LIMIT; // 0x0

		::System::Void Init(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPMAXMINBUTTONCONTROLLER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int64 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPMAXMINBUTTONCONTROLLER_INIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPMAXMINBUTTONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

