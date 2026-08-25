#pragma once
#include "unitysdk.h"

namespace FlatData { class AnimationBlendTable; }
namespace FlatData { class WeaponType; }

#define ANIMATIONBLENDDATA_LOADBLENDDATA_OFFSET UNITYSDK_OFFSET(0x214A8B0)
#define ANIMATIONBLENDDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x214AF40)
#define ANIMATIONBLENDDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x214AF80)
#define ANIMATIONBLENDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x214B030)
#define ANIMATIONBLENDDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x214B0B0)
#define ANIMATIONBLENDDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x214B0C0)
#define ANIMATIONBLENDDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x214B0D0)
#define ANIMATIONBLENDDATA_GETBLENDLIST_OFFSET UNITYSDK_OFFSET(0x214B240)

	inline static constexpr unsigned int AnimationBlendData_TypeDefinitionIndex = 3958;

	class AnimationBlendData : public Il2CppObject
	{
	public:
		Il2CppObject* blendInfos; // 0x18

		Il2CppObject* LoadBlendData(::FlatData::AnimationBlendTable* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::AnimationBlendTable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONBLENDDATA_LOADBLENDDATA_OFFSET))(arg, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONBLENDDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONBLENDDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONBLENDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONBLENDDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONBLENDDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONBLENDDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		Il2CppObject* GetBlendList(::FlatData::WeaponType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONBLENDDATA_GETBLENDLIST_OFFSET))(arg, nullptr);
		}

	};

