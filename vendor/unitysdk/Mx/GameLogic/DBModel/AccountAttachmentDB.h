#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }

#define MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE1170)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_SET_EMBLEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE1180)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFE1190)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1200)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_GET_EMBLEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE1210)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE1220)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountAttachmentDB_TypeDefinitionIndex = 12469;

	class AccountAttachmentDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::Int64 _EmblemUniqueId_k__BackingField; // 0x18

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_EmblemUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_SET_EMBLEMUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountAttachmentDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::AccountAttachmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EmblemUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_GET_EMBLEMUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTATTACHMENTDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

	};
}

