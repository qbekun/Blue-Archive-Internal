#pragma once
#include "unitysdk.h"

#define UIEXCHANGEITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x27015B0)
#define UIEXCHANGEITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2701510)

	inline static constexpr unsigned int UIExchangeItemInfo_TypeDefinitionIndex = 7076;

	class UIExchangeItemInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Items; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXCHANGEITEMINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEXCHANGEITEMINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

