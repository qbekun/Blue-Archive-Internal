#pragma once
#include "unitysdk.h"

class TooltipTargetParcelTracker;
class UIWeekDungeonStageSelect;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define WEEKDUNGEONSTAGEUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26BF9C0)
#define WEEKDUNGEONSTAGEUIOPENER__OPENUI_B__5_0_OFFSET UNITYSDK_OFFSET(0x26BFE90)
#define WEEKDUNGEONSTAGEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26BFEC0)
#define WEEKDUNGEONSTAGEUIOPENER_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x26BFF60)
#define WEEKDUNGEONSTAGEUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26BFF70)
#define WEEKDUNGEONSTAGEUIOPENER__OPENUI_B__5_1_OFFSET UNITYSDK_OFFSET(0x26C0020)

	inline static constexpr unsigned int WeekDungeonStageUIOpener_TypeDefinitionIndex = 6939;

	class WeekDungeonStageUIOpener : public Il2CppObject
	{
	public:
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x18

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONSTAGEUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__5_0(UIWeekDungeonStageSelect* arg)
		{
			((::System::Void(*)(UIWeekDungeonStageSelect*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONSTAGEUIOPENER__OPENUI_B__5_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONSTAGEUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONSTAGEUIOPENER_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONSTAGEUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__5_1(UIWeekDungeonStageSelect* arg)
		{
			((::System::Void(*)(UIWeekDungeonStageSelect*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONSTAGEUIOPENER__OPENUI_B__5_1_OFFSET))(arg, nullptr);
		}

	};

