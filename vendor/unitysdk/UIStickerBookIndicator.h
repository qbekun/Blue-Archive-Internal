#pragma once
#include "unitysdk.h"

class UIStickerBookIndicatorUnit;
class UIGrid;

#define UISTICKERBOOKINDICATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB33B20)
#define UISTICKERBOOKINDICATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xB33D70)
#define UISTICKERBOOKINDICATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xB33DA0)
#define UISTICKERBOOKINDICATOR_SET_OFFSET UNITYSDK_OFFSET(0xB33E20)

	inline static constexpr unsigned int UIStickerBookIndicator_TypeDefinitionIndex = 8302;

	class UIStickerBookIndicator : public Il2CppObject
	{
	public:
		UIStickerBookIndicatorUnit* IndicatorResource; // 0x18
		UIGrid* Grid; // 0x20
		Il2CppObject* indicatorList; // 0x28
		Il2CppObject* indicatorInfo; // 0x30

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKINDICATOR_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKINDICATOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKINDICATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKINDICATOR_SET_OFFSET))(arg, nullptr);
		}

	};

