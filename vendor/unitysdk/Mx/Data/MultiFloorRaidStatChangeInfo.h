#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MultiFloorRaidStatChangeExcel; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x18566C0)
#define MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_GETMAXHPSTATADDVALUE_OFFSET UNITYSDK_OFFSET(0x18566D0)
#define MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_TOSTATCHANGEEFFECTS_OFFSET UNITYSDK_OFFSET(0x1856770)
#define MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_NEEDAPPLYSTATCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x1856940)
#define MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_GET_APPLYCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1856A20)
#define MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_GETMAXHPSTATMULTIPLYVALUE_OFFSET UNITYSDK_OFFSET(0x1856A30)
#define MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1856AD0)

namespace MX::Data
{
	inline static constexpr unsigned int MultiFloorRaidStatChangeInfo_TypeDefinitionIndex = 15868;

	class MultiFloorRaidStatChangeInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MultiFloorRaidStatChangeExcel* _Excel_k__BackingField; // 0x10
		Il2CppObject* _ApplyCharacterIds_k__BackingField; // 0x20

		::MX::Data::Excel::MultiFloorRaidStatChangeExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MultiFloorRaidStatChangeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Int64 GetMaxHPStatAddValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_GETMAXHPSTATADDVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* ToStatChangeEffects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_TOSTATCHANGEEFFECTS_OFFSET))(nullptr);
		}

		::System::Boolean NeedApplyStatChangeInfo(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_NEEDAPPLYSTATCHANGEINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ApplyCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_GET_APPLYCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Int64 GetMaxHPStatMultiplyValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_GETMAXHPSTATMULTIPLYVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MultiFloorRaidStatChangeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MultiFloorRaidStatChangeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDSTATCHANGEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

