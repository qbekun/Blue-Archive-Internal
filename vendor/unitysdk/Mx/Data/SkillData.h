#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class InteractiveWorldRaidCarrierExcel; }
namespace MX::Data::Excel { class InteractiveWorldRaidCarrierExcel&; }
namespace MX::Data::Excel { class SkillExcel; }
namespace FlatData { class BulletType; }
namespace MX::Data::Excel { class LogicEffectCommonVisualExcel; }
namespace FlatData { class TacticEntityType; }
namespace MX::Data::Excel { class SkillExcel&; }
namespace FlatData { class FeverBattleType; }

#define MX_DATA_SKILLDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x195B2F0)
#define MX_DATA_SKILLDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x195B3D0)
#define MX_DATA_SKILLDATA_GETINTERACTIVEWORLDRAIDCARRIERDATA_OFFSET UNITYSDK_OFFSET(0x195D090)
#define MX_DATA_SKILLDATA_TRYGETINTERACTIVEWORLDRAIDCARRIERDATA_OFFSET UNITYSDK_OFFSET(0x195D120)
#define MX_DATA_SKILLDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x195D230)
#define MX_DATA_SKILLDATA_GETSKILLBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x195D340)
#define MX_DATA_SKILLDATA_GETLOGICEFFECTVISUALEXCEL_OFFSET UNITYSDK_OFFSET(0x195D3B0)
#define MX_DATA_SKILLDATA_ISSHOWEFFECTBYTACTICENTITYEFFECTFILTER_OFFSET UNITYSDK_OFFSET(0x195D440)
#define MX_DATA_SKILLDATA_GETLOGICEFFECTCOMMONVISUALEXCELS_OFFSET UNITYSDK_OFFSET(0x195D4D0)
#define MX_DATA_SKILLDATA_FINDLOGICEFFECTCOMMONVISUALEXCEL_OFFSET UNITYSDK_OFFSET(0x195D560)
#define MX_DATA_SKILLDATA_FINDLOGICEFFECTCOMMONVISUALEXCEL_OFFSET UNITYSDK_OFFSET(0x195D610)
#define MX_DATA_SKILLDATA_GETMAXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x195D6E0)
#define MX_DATA_SKILLDATA_HASSKILLDATA_OFFSET UNITYSDK_OFFSET(0x195D800)
#define MX_DATA_SKILLDATA_TRYGETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x195D890)
#define MX_DATA_SKILLDATA_TRYGETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x195D930)
#define MX_DATA_SKILLDATA_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x195D9D0)
#define MX_DATA_SKILLDATA_GETALLSKILLEXCELS_OFFSET UNITYSDK_OFFSET(0x195DB00)
#define MX_DATA_SKILLDATA_GETFEVEREXCEL_OFFSET UNITYSDK_OFFSET(0x195DB90)
#define MX_DATA_SKILLDATA_TRYGETINTERACTIVEWORLDRAIDSKILLDESCRIPTIONLIST_OFFSET UNITYSDK_OFFSET(0x195DC60)
#define MX_DATA_SKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x195DCC0)

namespace MX::Data
{
	inline static constexpr unsigned int SkillData_TypeDefinitionIndex = 16406;

	class SkillData : public Il2CppObject
	{
	public:
		Il2CppObject* skillData; // 0x28
		Il2CppObject* commonVisualTable; // 0x30
		Il2CppObject* tacticEntityEffectFilterTable; // 0x38
		Il2CppObject* contentsFeverTable; // 0x40
		Il2CppObject* skillBulletTypeTable; // 0x48
		Il2CppObject* interactiveWorldRaidCarrierTable; // 0x50
		Il2CppObject* interactiveWorldRaidSkillDescriptionTable; // 0x58

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierExcel* GetInteractiveWorldRaidCarrierData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_GETINTERACTIVEWORLDRAIDCARRIERDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetInteractiveWorldRaidCarrierData(::System::Int64 arg, ::MX::Data::Excel::InteractiveWorldRaidCarrierExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::InteractiveWorldRaidCarrierExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_TRYGETINTERACTIVEWORLDRAIDCARRIERDATA_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SkillExcel* GetData(::System::String* str, ::System::Int32 arg)
		{
			return (return (::MX::Data::Excel::SkillExcel*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_GETDATA_OFFSET))(str, arg, nullptr);
		}

		::FlatData::BulletType* GetSkillBulletType(::System::String* str)
		{
			return (return (::FlatData::BulletType*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_GETSKILLBULLETTYPE_OFFSET))(str, nullptr);
		}

		::MX::Data::Excel::LogicEffectCommonVisualExcel* GetLogicEffectVisualExcel(::System::UInt32 arg)
		{
			return (return (::MX::Data::Excel::LogicEffectCommonVisualExcel*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_GETLOGICEFFECTVISUALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsShowEffectByTacticEntityEffectFilter(::System::String* str, ::FlatData::TacticEntityType* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_ISSHOWEFFECTBYTACTICENTITYEFFECTFILTER_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetLogicEffectCommonVisualExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_GETLOGICEFFECTCOMMONVISUALEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* FindLogicEffectCommonVisualExcel(::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_FINDLOGICEFFECTCOMMONVISUALEXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindLogicEffectCommonVisualExcel(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_FINDLOGICEFFECTCOMMONVISUALEXCEL_OFFSET))(str, nullptr);
		}

		::System::Int32 GetMaxSkillLevel(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_GETMAXSKILLLEVEL_OFFSET))(str, nullptr);
		}

		::System::Boolean HasSkillData(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_HASSKILLDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetSkillData(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_TRYGETSKILLDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetSkillData(::System::String* str, ::System::Int32 arg, ::MX::Data::Excel::SkillExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::MX::Data::Excel::SkillExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_TRYGETSKILLDATA_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean IsMaxLevel(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_ISMAXLEVEL_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetAllSkillExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_GETALLSKILLEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* GetFeverExcel(::FlatData::FeverBattleType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::FeverBattleType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_GETFEVEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetInteractiveWorldRaidSkillDescriptionList(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_TRYGETINTERACTIVEWORLDRAIDSKILLDESCRIPTIONLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

