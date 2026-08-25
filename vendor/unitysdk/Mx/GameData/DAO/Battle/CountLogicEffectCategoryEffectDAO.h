#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14D51C0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14D5210)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14D5580)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14D9070)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14DB6D0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14DB730)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountLogicEffectCategoryEffectDAO_TypeDefinitionIndex = 15214;

	class CountLogicEffectCategoryEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* CountCategory; // 0x58
		::System::Int32 Color0; // 0x5C
		::System::Int32 Color1; // 0x60
		::System::Int32 Color2; // 0x64
		::System::Int32 Color3; // 0x68
		::System::Int32 Color4; // 0x6C
		::System::Int32 Color5; // 0x70
		::System::Int32 Color6; // 0x74
		::System::Int32 Color7; // 0x78
		::System::Int32 Color8; // 0x7C
		::System::Int32 Color9; // 0x80
		::System::Int32 ColorOver10; // 0x84
		::FlatData::EndCondition* EndCondition; // 0x88
		::System::String* EndConditionArgument; // 0x90
		::System::String* EndConditionArgumentSecond; // 0x98
		::System::Boolean Dispellable; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTCATEGORYEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

