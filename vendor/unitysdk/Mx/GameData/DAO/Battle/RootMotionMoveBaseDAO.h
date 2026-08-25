#pragma once
#include "../../../../unitysdk.h"

#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEBASEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x176EC30)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEBASEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x176EE30)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEBASEDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x176EE40)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int RootMotionMoveBaseDAO_TypeDefinitionIndex = 15529;

	class RootMotionMoveBaseDAO : public Il2CppObject
	{
	public:
		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEBASEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEBASEDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEBASEDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

