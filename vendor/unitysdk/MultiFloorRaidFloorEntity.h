#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MultiFloorRaidStageExcel; }
namespace FlatData { class ArmorType; }
namespace FlatData { class BulletType; }

#define MULTIFLOORRAIDFLOORENTITY_GET_OPENCONDITIONFLOOR_OFFSET UNITYSDK_OFFSET(0x269F960)
#define MULTIFLOORRAIDFLOORENTITY_SET_STAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x269FA90)
#define MULTIFLOORRAIDFLOORENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x269FAB0)
#define MULTIFLOORRAIDFLOORENTITY_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x269FAE0)
#define MULTIFLOORRAIDFLOORENTITY_GET_ARMOR_OFFSET UNITYSDK_OFFSET(0x269FBD0)
#define MULTIFLOORRAIDFLOORENTITY_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x269FC80)
#define MULTIFLOORRAIDFLOORENTITY_GET_STAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x269FCA0)
#define MULTIFLOORRAIDFLOORENTITY_GET_TOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x269FCB0)
#define MULTIFLOORRAIDFLOORENTITY_GET_BULLET_OFFSET UNITYSDK_OFFSET(0x269FDB0)
#define MULTIFLOORRAIDFLOORENTITY_GET_FLOORNUMBER_OFFSET UNITYSDK_OFFSET(0x269FE60)

	inline static constexpr unsigned int MultiFloorRaidFloorEntity_TypeDefinitionIndex = 6836;

	class MultiFloorRaidFloorEntity : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MultiFloorRaidStageExcel* _StageExcel_k__BackingField; // 0x10
		Il2CppObject* openConditionFloor; // 0x20

		::System::Int32 get_OpenConditionFloor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_GET_OPENCONDITIONFLOOR_OFFSET))(nullptr);
		}

		::System::Void set_StageExcel(::MX::Data::Excel::MultiFloorRaidStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MultiFloorRaidStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_SET_STAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MultiFloorRaidStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MultiFloorRaidStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_RecommendLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_GET_RECOMMENDLEVEL_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_Armor()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_GET_ARMOR_OFFSET))(nullptr);
		}

		::System::String* get_PortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_GET_PORTRAITPATH_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidStageExcel* get_StageExcel()
		{
			return ((::MX::Data::Excel::MultiFloorRaidStageExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_GET_STAGEEXCEL_OFFSET))(nullptr);
		}

		::System::String* get_Topography()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_GET_TOPOGRAPHY_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_Bullet()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_GET_BULLET_OFFSET))(nullptr);
		}

		::System::Int32 get_FloorNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDFLOORENTITY_GET_FLOORNUMBER_OFFSET))(nullptr);
		}

	};

