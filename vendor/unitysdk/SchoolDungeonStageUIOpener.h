#pragma once
#include "unitysdk.h"

class TooltipTargetParcelTracker;
class UISchoolDungeonStageSelect;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define SCHOOLDUNGEONSTAGEUIOPENER__OPENUI_B__5_0_OFFSET UNITYSDK_OFFSET(0x26C0140)
#define SCHOOLDUNGEONSTAGEUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C0170)
#define SCHOOLDUNGEONSTAGEUIOPENER__OPENUI_B__5_1_OFFSET UNITYSDK_OFFSET(0x26C0350)
#define SCHOOLDUNGEONSTAGEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C0380)
#define SCHOOLDUNGEONSTAGEUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C0420)
#define SCHOOLDUNGEONSTAGEUIOPENER_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x26C0430)

	inline static constexpr unsigned int SchoolDungeonStageUIOpener_TypeDefinitionIndex = 6940;

	class SchoolDungeonStageUIOpener : public Il2CppObject
	{
	public:
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x18

		::System::Void _OpenUI_b__5_0(UISchoolDungeonStageSelect* arg)
		{
			((::System::Void(*)(UISchoolDungeonStageSelect*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONSTAGEUIOPENER__OPENUI_B__5_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONSTAGEUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__5_1(UISchoolDungeonStageSelect* arg)
		{
			((::System::Void(*)(UISchoolDungeonStageSelect*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONSTAGEUIOPENER__OPENUI_B__5_1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONSTAGEUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONSTAGEUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONSTAGEUIOPENER_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

	};

