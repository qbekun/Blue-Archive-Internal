#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define DESCTOOLTIPINFO_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x275E2E0)
#define DESCTOOLTIPINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x275E2F0)
#define DESCTOOLTIPINFO_SET_PARCEL_OFFSET UNITYSDK_OFFSET(0x275E300)
#define DESCTOOLTIPINFO_GET_PARCEL_OFFSET UNITYSDK_OFFSET(0x275E310)
#define DESCTOOLTIPINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x275E320)
#define DESCTOOLTIPINFO_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x275E330)
#define DESCTOOLTIPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x275E340)

	inline static constexpr unsigned int DescTooltipInfo_TypeDefinitionIndex = 7286;

	class DescTooltipInfo : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _Description_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelKeyPair* _Parcel_k__BackingField; // 0x20

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCTOOLTIPINFO_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DESCTOOLTIPINFO_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Parcel(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + DESCTOOLTIPINFO_SET_PARCEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Parcel()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCTOOLTIPINFO_GET_PARCEL_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESCTOOLTIPINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Description(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DESCTOOLTIPINFO_SET_DESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str2, ::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + DESCTOOLTIPINFO_.CTOR_OFFSET))(str, str2, arg, nullptr);
		}

	};

