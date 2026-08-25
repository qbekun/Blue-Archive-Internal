#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ResetableContentId; }
namespace MX::GameLogic::DBModel { class ResetableContentValueDB; }

#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_GET_RESETABLECONTENTID_OFFSET UNITYSDK_OFFSET(0x100A460)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_SET_RESETABLECONTENTID_OFFSET UNITYSDK_OFFSET(0x100A470)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_GET_CONTENTVALUE_OFFSET UNITYSDK_OFFSET(0x100A480)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_SET_CONTENTVALUE_OFFSET UNITYSDK_OFFSET(0x100A490)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_GET_LASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x100A4A0)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_SET_LASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x100A4B0)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100A4C0)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100A4D0)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_CLONE_OFFSET UNITYSDK_OFFSET(0x100A510)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_UPDATE_OFFSET UNITYSDK_OFFSET(0x100A580)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x100A8D0)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_MAXIMUMAMOUNT_OFFSET UNITYSDK_OFFSET(0x100A670)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_NEEDTORESETTIME_OFFSET UNITYSDK_OFFSET(0x100A7E0)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x100A960)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x100A9F0)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x100AAC0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ResetableContentValueDB_TypeDefinitionIndex = 12713;

	class ResetableContentValueDB : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ResetableContentId* _ResetableContentId_k__BackingField; // 0x10
		::System::Int64 _ContentValue_k__BackingField; // 0x20
		::System::DateTime* _LastUpdateTime_k__BackingField; // 0x28

		::MX::GameLogic::DBModel::ResetableContentId* get_ResetableContentId()
		{
			return ((::MX::GameLogic::DBModel::ResetableContentId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_GET_RESETABLECONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_ResetableContentId(::MX::GameLogic::DBModel::ResetableContentId* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ResetableContentId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_SET_RESETABLECONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ContentValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_GET_CONTENTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_ContentValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_SET_CONTENTVALUE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastUpdateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_GET_LASTUPDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_LastUpdateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_SET_LASTUPDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ResetableContentValueDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ResetableContentValueDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ResetableContentValueDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ResetableContentValueDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Update(::System::DateTime* arg, ::System::Int64 arg2, int64_t&* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::Int64, int64_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_UPDATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ResetValue(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 MaximumAmount(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_MAXIMUMAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedToResetTime(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_NEEDTORESETTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::DBModel::ResetableContentValueDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ResetableContentValueDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTVALUEDB_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

