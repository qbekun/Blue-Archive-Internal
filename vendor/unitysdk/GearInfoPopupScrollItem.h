#pragma once
#include "unitysdk.h"

class CharacterObject;
class GearObject;
namespace MX::Data { class GearOptionDataInfo; }

#define GEARINFOPOPUPSCROLLITEM_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x22C78E0)
#define GEARINFOPOPUPSCROLLITEM_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x22C78F0)
#define GEARINFOPOPUPSCROLLITEM_GET_GEAR_OFFSET UNITYSDK_OFFSET(0x22C7900)
#define GEARINFOPOPUPSCROLLITEM_SET_GEAR_OFFSET UNITYSDK_OFFSET(0x22C7910)
#define GEARINFOPOPUPSCROLLITEM_GET_DATAINFO_OFFSET UNITYSDK_OFFSET(0x22C7920)
#define GEARINFOPOPUPSCROLLITEM_SET_DATAINFO_OFFSET UNITYSDK_OFFSET(0x22C7930)
#define GEARINFOPOPUPSCROLLITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C7940)
#define GEARINFOPOPUPSCROLLITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C77C0)

	inline static constexpr unsigned int GearInfoPopupScrollItem_TypeDefinitionIndex = 4812;

	class GearInfoPopupScrollItem : public Il2CppObject
	{
	public:
		CharacterObject* _Character_k__BackingField; // 0x10
		GearObject* _Gear_k__BackingField; // 0x18
		::MX::Data::GearOptionDataInfo* _DataInfo_k__BackingField; // 0x20

		CharacterObject* get_Character()
		{
			return ((CharacterObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEARINFOPOPUPSCROLLITEM_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_Character(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + GEARINFOPOPUPSCROLLITEM_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		GearObject* get_Gear()
		{
			return ((GearObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEARINFOPOPUPSCROLLITEM_GET_GEAR_OFFSET))(nullptr);
		}

		::System::Void set_Gear(GearObject* arg)
		{
			((::System::Void(*)(GearObject*, ::PVOID))((::PBYTE)hIl2Cpp + GEARINFOPOPUPSCROLLITEM_SET_GEAR_OFFSET))(arg, nullptr);
		}

		::MX::Data::GearOptionDataInfo* get_DataInfo()
		{
			return ((::MX::Data::GearOptionDataInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEARINFOPOPUPSCROLLITEM_GET_DATAINFO_OFFSET))(nullptr);
		}

		::System::Void set_DataInfo(::MX::Data::GearOptionDataInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GearOptionDataInfo*, ::PVOID))((::PBYTE)hIl2Cpp + GEARINFOPOPUPSCROLLITEM_SET_DATAINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEARINFOPOPUPSCROLLITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(CharacterObject* arg, GearObject* arg2, ::MX::Data::GearOptionDataInfo* arg3)
		{
			((::System::Void(*)(CharacterObject*, GearObject*, ::MX::Data::GearOptionDataInfo*, ::PVOID))((::PBYTE)hIl2Cpp + GEARINFOPOPUPSCROLLITEM_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

