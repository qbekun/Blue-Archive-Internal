#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }

#define MX_GAMELOGIC_DBMODEL_FRIENDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFF850)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int FriendDB_TypeDefinitionIndex = 12629;

	class FriendDB : public Il2CppObject
	{
	public:
		::System::Int64 AccountId; // 0x10
		::System::Int32 Level; // 0x18
		::System::String* Nickname; // 0x20
		::System::DateTime* LastConnectTime; // 0x28
		::System::Int64 RepresentCharacterUniqueId; // 0x30
		::System::Int64 RepresentCharacterCostumeId; // 0x38
		::System::Int64 ComfortValue; // 0x40
		::System::Int64 FriendCount; // 0x48
		::MX::GameLogic::DBModel::AccountAttachmentDB* AttachmentDB; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FRIENDDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

