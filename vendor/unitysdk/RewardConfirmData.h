#pragma once
#include "unitysdk.h"

namespace FlatData { class ParcelType; }

#define REWARDCONFIRMDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x27ADE30)
#define REWARDCONFIRMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x27AE2D0)
#define REWARDCONFIRMDATA_TOPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x27AE380)

	inline static constexpr unsigned int RewardConfirmData_TypeDefinitionIndex = 7509;

	class RewardConfirmData : public Il2CppObject
	{
	public:
		::FlatData::ParcelType* Type; // 0x10
		::System::Int64 Id; // 0x18
		::System::Boolean IsNew; // 0x20
		::System::Boolean IsPickup; // 0x21
		Il2CppObject* DuplicateBonusParcelDictionary; // 0x28

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDCONFIRMDATA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REWARDCONFIRMDATA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* ToParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDCONFIRMDATA_TOPARCELINFOS_OFFSET))(nullptr);
		}

	};

