#pragma once
#include "unitysdk.h"

class StatFeature;
namespace FlatData { class StatType; }
namespace MX::Data::Excel { class CharacterStatExcel; }
namespace MX::Data::Excel { class ObstacleStatExcel; }

#define STATEXCELEXTENSION_GET_IGNORESTATTYPEERROR_OFFSET UNITYSDK_OFFSET(0x21507D0)
#define STATEXCELEXTENSION_SET_IGNORESTATTYPEERROR_OFFSET UNITYSDK_OFFSET(0x21507E0)
#define STATEXCELEXTENSION_GETSTATFEATUREASCHARACTER_OFFSET UNITYSDK_OFFSET(0x21507F0)
#define STATEXCELEXTENSION_GETLV1STAT_OFFSET UNITYSDK_OFFSET(0x2150810)
#define STATEXCELEXTENSION_GETLV100STAT_OFFSET UNITYSDK_OFFSET(0x2150860)
#define STATEXCELEXTENSION_GETSTATFIXED_OFFSET UNITYSDK_OFFSET(0x21508B0)
#define STATEXCELEXTENSION_GETSTATFEATUREASOBSTACLE_OFFSET UNITYSDK_OFFSET(0x2150C20)
#define STATEXCELEXTENSION_GETLV1STAT_OFFSET UNITYSDK_OFFSET(0x2150C40)
#define STATEXCELEXTENSION_GETLV100STAT_OFFSET UNITYSDK_OFFSET(0x2150C50)
#define STATEXCELEXTENSION_GETSTATFIXED_OFFSET UNITYSDK_OFFSET(0x2150C60)

	inline static constexpr unsigned int StatExcelExtension_TypeDefinitionIndex = 3964;

	class StatExcelExtension : public Il2CppObject
	{
	public:
		::System::Boolean get_IgnoreStatTypeError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_GET_IGNORESTATTYPEERROR_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreStatTypeError(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_SET_IGNORESTATTYPEERROR_OFFSET))(arg, nullptr);
		}

		StatFeature* GetStatFeatureAsCharacter(::FlatData::StatType* arg)
		{
			return ((StatFeature*(*)(::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_GETSTATFEATUREASCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLv1Stat(::MX::Data::Excel::CharacterStatExcel* arg, ::FlatData::StatType* arg2)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::CharacterStatExcel*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_GETLV1STAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLv100Stat(::MX::Data::Excel::CharacterStatExcel* arg, ::FlatData::StatType* arg2)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::CharacterStatExcel*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_GETLV100STAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetStatFixed(::MX::Data::Excel::CharacterStatExcel* arg, ::FlatData::StatType* arg2)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::CharacterStatExcel*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_GETSTATFIXED_OFFSET))(arg, arg2, nullptr);
		}

		StatFeature* GetStatFeatureAsObstacle(::FlatData::StatType* arg)
		{
			return ((StatFeature*(*)(::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_GETSTATFEATUREASOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLv1Stat(::MX::Data::Excel::ObstacleStatExcel* arg, ::FlatData::StatType* arg2)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::ObstacleStatExcel*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_GETLV1STAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLv100Stat(::MX::Data::Excel::ObstacleStatExcel* arg, ::FlatData::StatType* arg2)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::ObstacleStatExcel*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_GETLV100STAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetStatFixed(::MX::Data::Excel::ObstacleStatExcel* arg, ::FlatData::StatType* arg2)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::ObstacleStatExcel*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + STATEXCELEXTENSION_GETSTATFIXED_OFFSET))(arg, arg2, nullptr);
		}

	};

