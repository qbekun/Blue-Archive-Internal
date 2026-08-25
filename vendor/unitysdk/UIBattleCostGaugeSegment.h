#pragma once
#include "unitysdk.h"

class UIWidget;
class UISprite;
class TweenAlpha;
class CostSign;

#define UIBATTLECOSTGAUGESEGMENT_GETWIDTH_OFFSET UNITYSDK_OFFSET(0xAD6300)
#define UIBATTLECOSTGAUGESEGMENT_SETFRACTIONALCOST_OFFSET UNITYSDK_OFFSET(0xAD6320)
#define UIBATTLECOSTGAUGESEGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD6490)
#define UIBATTLECOSTGAUGESEGMENT_SETWIDTH_OFFSET UNITYSDK_OFFSET(0xAD6520)
#define UIBATTLECOSTGAUGESEGMENT_SETREGENBAN_OFFSET UNITYSDK_OFFSET(0xAD65C0)
#define UIBATTLECOSTGAUGESEGMENT_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xAD6600)

	inline static constexpr unsigned int UIBattleCostGaugeSegment_TypeDefinitionIndex = 8064;

	class UIBattleCostGaugeSegment : public Il2CppObject
	{
	public:
		UIWidget* rootWidget; // 0x18
		UISprite* frontGauge; // 0x20
		UISprite* fxFull; // 0x28
		TweenAlpha* fxFullTween; // 0x30
		UISprite* bgGauge; // 0x38
		UISprite* costRegenBan; // 0x40
		::Il2CppArray<::System::Object*>* costColorBySign; // 0x48
		::Il2CppArray<::System::Object*>* bgColorByValidMax; // 0x50
		::System::Single maxCost; // 0x58
		::System::Int32 gaugeSize; // 0x5C
		::System::Single totalSize; // 0x60
		::System::Single leftGap; // 0x64
		::System::Boolean isActiveFullFxCache; // 0x68
		CostSign* signCache; // 0x6C

		::System::Int32 GetWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECOSTGAUGESEGMENT_GETWIDTH_OFFSET))(nullptr);
		}

		::System::Void SetFractionalCost(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECOSTGAUGESEGMENT_SETFRACTIONALCOST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECOSTGAUGESEGMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetWidth(::System::Int32 arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECOSTGAUGESEGMENT_SETWIDTH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetRegenBan(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECOSTGAUGESEGMENT_SETREGENBAN_OFFSET))(arg, nullptr);
		}

		::System::Void SetColor(CostSign* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(CostSign*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLECOSTGAUGESEGMENT_SETCOLOR_OFFSET))(arg, arg2, nullptr);
		}

	};

