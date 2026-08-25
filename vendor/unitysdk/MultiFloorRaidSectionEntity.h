#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MultiFloorRaidStageExcel; }
class MultiFloorRaidFloorEntity;

#define MULTIFLOORRAIDSECTIONENTITY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x269FE80)
#define MULTIFLOORRAIDSECTIONENTITY_GET_OPENCONDITIONFLOOR_OFFSET UNITYSDK_OFFSET(0x269FE90)
#define MULTIFLOORRAIDSECTIONENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x269FEA0)
#define MULTIFLOORRAIDSECTIONENTITY_GETFLOOR_OFFSET UNITYSDK_OFFSET(0x26A00C0)
#define MULTIFLOORRAIDSECTIONENTITY_GET_ISLASTSECTION_OFFSET UNITYSDK_OFFSET(0x26A0230)
#define MULTIFLOORRAIDSECTIONENTITY_SET_LOWESTFLOOR_OFFSET UNITYSDK_OFFSET(0x26A0240)
#define MULTIFLOORRAIDSECTIONENTITY_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x26A0250)
#define MULTIFLOORRAIDSECTIONENTITY_SET_ISLASTSECTION_OFFSET UNITYSDK_OFFSET(0x26A0260)
#define MULTIFLOORRAIDSECTIONENTITY_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x26A0270)
#define MULTIFLOORRAIDSECTIONENTITY_GETALLSTAGEEXCELSINSECTION_OFFSET UNITYSDK_OFFSET(0x26A0280)
#define MULTIFLOORRAIDSECTIONENTITY_GET_HIGHESTFLOOR_OFFSET UNITYSDK_OFFSET(0x26A0330)
#define MULTIFLOORRAIDSECTIONENTITY_SET_OPENCONDITIONFLOOR_OFFSET UNITYSDK_OFFSET(0x26A0340)
#define MULTIFLOORRAIDSECTIONENTITY_SET_HIGHESTFLOOR_OFFSET UNITYSDK_OFFSET(0x26A0350)
#define MULTIFLOORRAIDSECTIONENTITY_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x26A0360)
#define MULTIFLOORRAIDSECTIONENTITY_GETFLOORRANGETEXT_OFFSET UNITYSDK_OFFSET(0x26A0370)
#define MULTIFLOORRAIDSECTIONENTITY_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x26A0420)
#define MULTIFLOORRAIDSECTIONENTITY_SET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x26A0430)
#define MULTIFLOORRAIDSECTIONENTITY_GET_LOWESTFLOOR_OFFSET UNITYSDK_OFFSET(0x26A0440)
#define MULTIFLOORRAIDSECTIONENTITY_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x26A0450)
#define MULTIFLOORRAIDSECTIONENTITY_GETALLFLOORSINSECTION_OFFSET UNITYSDK_OFFSET(0x26A0460)

	inline static constexpr unsigned int MultiFloorRaidSectionEntity_TypeDefinitionIndex = 6838;

	class MultiFloorRaidSectionEntity : public Il2CppObject
	{
	public:
		::System::Boolean _isOpen_k__BackingField; // 0x10
		::System::Int32 _LowestFloor_k__BackingField; // 0x14
		::System::Int32 _HighestFloor_k__BackingField; // 0x18
		::System::Int32 _OpenConditionFloor_k__BackingField; // 0x1C
		::System::String* _PortraitPath_k__BackingField; // 0x20
		::System::String* _Description_k__BackingField; // 0x28
		::System::Boolean _IsLastSection_k__BackingField; // 0x30

		::System::Boolean Contains(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OpenConditionFloor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GET_OPENCONDITIONFLOOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::Data::Excel::MultiFloorRaidStageExcel* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::MX::Data::Excel::MultiFloorRaidStageExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		MultiFloorRaidFloorEntity* GetFloor(::System::Int32 arg)
		{
			return ((MultiFloorRaidFloorEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GETFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLastSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GET_ISLASTSECTION_OFFSET))(nullptr);
		}

		::System::Void set_LowestFloor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_SET_LOWESTFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void set_IsLastSection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_SET_ISLASTSECTION_OFFSET))(arg, nullptr);
		}

		::System::String* get_PortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GET_PORTRAITPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllStageExcelsInSection()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GETALLSTAGEEXCELSINSECTION_OFFSET))(nullptr);
		}

		::System::Int32 get_HighestFloor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GET_HIGHESTFLOOR_OFFSET))(nullptr);
		}

		::System::Void set_OpenConditionFloor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_SET_OPENCONDITIONFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_HighestFloor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_SET_HIGHESTFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Description(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_SET_DESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::String* GetFloorRangeText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GETFLOORRANGETEXT_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_PortraitPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_SET_PORTRAITPATH_OFFSET))(str, nullptr);
		}

		::System::Int32 get_LowestFloor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GET_LOWESTFLOOR_OFFSET))(nullptr);
		}

		::System::Void set_isOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllFloorsInSection()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSECTIONENTITY_GETALLFLOORSINSECTION_OFFSET))(nullptr);
		}

	};

