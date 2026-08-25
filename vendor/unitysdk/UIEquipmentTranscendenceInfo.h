#pragma once
#include "unitysdk.h"

class UILabel;
class AssetObjectBase;

#define UIEQUIPMENTTRANSCENDENCEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x240E8B0)
#define UIEQUIPMENTTRANSCENDENCEINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x240E8C0)
#define UIEQUIPMENTTRANSCENDENCEINFO_SETSTARGREDE_OFFSET UNITYSDK_OFFSET(0x240EC10)

	inline static constexpr unsigned int UIEquipmentTranscendenceInfo_TypeDefinitionIndex = 5462;

	class UIEquipmentTranscendenceInfo : public Il2CppObject
	{
	public:
		UILabel* StatName; // 0x18
		::Il2CppArray<::System::Object*>* OriginalStar; // 0x20
		::Il2CppArray<::System::Object*>* EstimatedStar; // 0x28
		UILabel* OriginalLevelStatValue; // 0x30
		UILabel* EstimatedLevelStatValue; // 0x38
		UILabel* OriginalTranscendenceStatValue; // 0x40
		UILabel* EstimatedTranscendenceStatValue; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTTRANSCENDENCEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTTRANSCENDENCEINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetStarGrede(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTTRANSCENDENCEINFO_SETSTARGREDE_OFFSET))(arg, nullptr);
		}

	};

