#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define PARCELTOOLTIPINFO_GET_SHOWMULTISWEEP_OFFSET UNITYSDK_OFFSET(0x275E460)
#define PARCELTOOLTIPINFO_SET_SHOWMULTISWEEP_OFFSET UNITYSDK_OFFSET(0x275E470)
#define PARCELTOOLTIPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x275E480)
#define PARCELTOOLTIPINFO_GET_PARCEL_OFFSET UNITYSDK_OFFSET(0x275E4C0)
#define PARCELTOOLTIPINFO_GETPARCELDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x275E4D0)
#define PARCELTOOLTIPINFO_GETPARCELNAME_OFFSET UNITYSDK_OFFSET(0x275E6D0)
#define PARCELTOOLTIPINFO_SET_PARCEL_OFFSET UNITYSDK_OFFSET(0x275E8D0)

	inline static constexpr unsigned int ParcelTooltipInfo_TypeDefinitionIndex = 7289;

	class ParcelTooltipInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* _Parcel_k__BackingField; // 0x18
		::System::Boolean _ShowMultiSweep_k__BackingField; // 0x28

		::System::Boolean get_ShowMultiSweep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPINFO_GET_SHOWMULTISWEEP_OFFSET))(nullptr);
		}

		::System::Void set_ShowMultiSweep(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPINFO_SET_SHOWMULTISWEEP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelKeyPair* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Parcel()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPINFO_GET_PARCEL_OFFSET))(nullptr);
		}

		::System::String* GetParcelDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPINFO_GETPARCELDESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* GetParcelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPINFO_GETPARCELNAME_OFFSET))(nullptr);
		}

		::System::Void set_Parcel(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPINFO_SET_PARCEL_OFFSET))(arg, nullptr);
		}

	};

