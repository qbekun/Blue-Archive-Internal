#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ArenaNPCExcel; }

#define MX_DATA_ARENANPCINFO_GET_NPCSTARGRADE_OFFSET UNITYSDK_OFFSET(0x180F600)
#define MX_DATA_ARENANPCINFO_SET_NPCLEVEL_OFFSET UNITYSDK_OFFSET(0x180F610)
#define MX_DATA_ARENANPCINFO_GET_NPCLEVELDEVIATION_OFFSET UNITYSDK_OFFSET(0x180F620)
#define MX_DATA_ARENANPCINFO_SET_NPCSTARGRADE_OFFSET UNITYSDK_OFFSET(0x180F630)
#define MX_DATA_ARENANPCINFO_SET_EXCEPTIONRAIRITIES_OFFSET UNITYSDK_OFFSET(0x180F640)
#define MX_DATA_ARENANPCINFO_GET_EXCEPTIONTSSIDS_OFFSET UNITYSDK_OFFSET(0x180F650)
#define MX_DATA_ARENANPCINFO_SET_EXCEPTIONTSSIDS_OFFSET UNITYSDK_OFFSET(0x180F660)
#define MX_DATA_ARENANPCINFO_SET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x180F670)
#define MX_DATA_ARENANPCINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x180F680)
#define MX_DATA_ARENANPCINFO_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x180F690)
#define MX_DATA_ARENANPCINFO_GET_EXCEPTIONRAIRITIES_OFFSET UNITYSDK_OFFSET(0x180F6A0)
#define MX_DATA_ARENANPCINFO_GET_EXCEPTIONSUPPORTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x180F6B0)
#define MX_DATA_ARENANPCINFO_SET_EXCEPTIONSUPPORTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x180F6C0)
#define MX_DATA_ARENANPCINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x180F6D0)
#define MX_DATA_ARENANPCINFO_GET_EXCEPTIONMAINCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x180FAE0)
#define MX_DATA_ARENANPCINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0x180FAF0)
#define MX_DATA_ARENANPCINFO_SET_EXCEPTIONMAINCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x180FB00)
#define MX_DATA_ARENANPCINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x180FB10)
#define MX_DATA_ARENANPCINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x180FB20)
#define MX_DATA_ARENANPCINFO_GET_NPCLEVEL_OFFSET UNITYSDK_OFFSET(0x180FB30)
#define MX_DATA_ARENANPCINFO_SET_NPCLEVELDEVIATION_OFFSET UNITYSDK_OFFSET(0x180FB40)

namespace MX::Data
{
	inline static constexpr unsigned int ArenaNPCInfo_TypeDefinitionIndex = 15711;

	class ArenaNPCInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int64 _Rank_k__BackingField; // 0x18
		::System::Int64 _AccountLevel_k__BackingField; // 0x20
		::System::Int64 _NPCLevel_k__BackingField; // 0x28
		::System::Int64 _NPCLevelDeviation_k__BackingField; // 0x30
		::System::Int64 _NPCStarGrade_k__BackingField; // 0x38
		Il2CppObject* _ExceptionRairities_k__BackingField; // 0x40
		Il2CppObject* _ExceptionMainCharacterIds_k__BackingField; // 0x48
		Il2CppObject* _ExceptionSupportCharacterIds_k__BackingField; // 0x50
		Il2CppObject* _ExceptionTSSIds_k__BackingField; // 0x58

		::System::Int64 get_NPCStarGrade()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_NPCSTARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_NPCLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_NPCLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NPCLevelDeviation()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_NPCLEVELDEVIATION_OFFSET))(nullptr);
		}

		::System::Void set_NPCStarGrade(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_NPCSTARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExceptionRairities(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_EXCEPTIONRAIRITIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExceptionTSSIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_EXCEPTIONTSSIDS_OFFSET))(nullptr);
		}

		::System::Void set_ExceptionTSSIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_EXCEPTIONTSSIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_ACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExceptionRairities()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_EXCEPTIONRAIRITIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExceptionSupportCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_EXCEPTIONSUPPORTCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Void set_ExceptionSupportCharacterIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_EXCEPTIONSUPPORTCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ArenaNPCExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ArenaNPCExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExceptionMainCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_EXCEPTIONMAINCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Void set_Rank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExceptionMainCharacterIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_EXCEPTIONMAINCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Rank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_RANK_OFFSET))(nullptr);
		}

		::System::Int64 get_NPCLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_GET_NPCLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_NPCLevelDeviation(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENANPCINFO_SET_NPCLEVELDEVIATION_OFFSET))(arg, nullptr);
		}

	};
}

