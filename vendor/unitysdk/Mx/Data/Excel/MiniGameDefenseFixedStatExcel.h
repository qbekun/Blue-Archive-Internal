#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDefenseFixedStatExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA6C80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GETROOTASMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA6C90)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GETROOTASMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA6CF0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BA6D80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BA6D50)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_MINIGAMEDEFENSEFIXEDSTATID_OFFSET UNITYSDK_OFFSET(0x1BA6DA0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BA6DF0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_GRADE_OFFSET UNITYSDK_OFFSET(0x1BA6E40)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA6E90)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_NONEEXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA6EE0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT1TIER_OFFSET UNITYSDK_OFFSET(0x1BA6F30)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT1LEVEL_OFFSET UNITYSDK_OFFSET(0x1BA6F80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT2TIER_OFFSET UNITYSDK_OFFSET(0x1BA6FD0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT2LEVEL_OFFSET UNITYSDK_OFFSET(0x1BA7020)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT3TIER_OFFSET UNITYSDK_OFFSET(0x1BA7070)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT3LEVEL_OFFSET UNITYSDK_OFFSET(0x1BA70C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_CHARACTERWEAPONGRADE_OFFSET UNITYSDK_OFFSET(0x1BA7110)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_CHARACTERWEAPONLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA7160)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_CHARACTERGEARTIER_OFFSET UNITYSDK_OFFSET(0x1BA71B0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_CHARACTERGEARLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA7200)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_CREATEMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA7250)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_STARTMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA7810)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDMINIGAMEDEFENSEFIXEDSTATID_OFFSET UNITYSDK_OFFSET(0x1BA74F0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA7790)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDGRADE_OFFSET UNITYSDK_OFFSET(0x1BA7760)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA7730)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDNONEEXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA7700)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT1TIER_OFFSET UNITYSDK_OFFSET(0x1BA76D0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT1LEVEL_OFFSET UNITYSDK_OFFSET(0x1BA76A0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT2TIER_OFFSET UNITYSDK_OFFSET(0x1BA7670)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT2LEVEL_OFFSET UNITYSDK_OFFSET(0x1BA7640)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT3TIER_OFFSET UNITYSDK_OFFSET(0x1BA7610)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT3LEVEL_OFFSET UNITYSDK_OFFSET(0x1BA75E0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDCHARACTERWEAPONGRADE_OFFSET UNITYSDK_OFFSET(0x1BA75B0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDCHARACTERWEAPONLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA7580)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDCHARACTERGEARTIER_OFFSET UNITYSDK_OFFSET(0x1BA7550)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDCHARACTERGEARLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA7520)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ENDMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA77C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_FINISHMINIGAMEDEFENSEFIXEDSTATEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA7830)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_FINISHSIZEPREFIXEDMINIGAMEDEFENSEFIXEDSTATEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA7850)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDefenseFixedStatExcel_TypeDefinitionIndex = 18579;

	class MiniGameDefenseFixedStatExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseFixedStatExcel* GetRootAsMiniGameDefenseFixedStatExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseFixedStatExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GETROOTASMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseFixedStatExcel* GetRootAsMiniGameDefenseFixedStatExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDefenseFixedStatExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseFixedStatExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDefenseFixedStatExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GETROOTASMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseFixedStatExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseFixedStatExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_MinigameDefenseFixedStatId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_MINIGAMEDEFENSEFIXEDSTATID_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Grade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_GRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_ExSkillLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EXSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_NoneExSkillLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_NONEEXSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Equipment1Tier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT1TIER_OFFSET))(nullptr);
		}

		::System::Int32 get_Equipment1Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT1LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Equipment2Tier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT2TIER_OFFSET))(nullptr);
		}

		::System::Int32 get_Equipment2Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT2LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Equipment3Tier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT3TIER_OFFSET))(nullptr);
		}

		::System::Int32 get_Equipment3Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_EQUIPMENT3LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterWeaponGrade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_CHARACTERWEAPONGRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterWeaponLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_CHARACTERWEAPONLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterGearTier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_CHARACTERGEARTIER_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterGearLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_GET_CHARACTERGEARLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDefenseFixedStatExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_CREATEMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDefenseFixedStatExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_STARTMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddMinigameDefenseFixedStatId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDMINIGAMEDEFENSEFIXEDSTATID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEXSKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNoneExSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDNONEEXSKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipment1Tier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT1TIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipment1Level(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT1LEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipment2Tier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT2TIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipment2Level(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT2LEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipment3Tier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT3TIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipment3Level(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDEQUIPMENT3LEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterWeaponGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDCHARACTERWEAPONGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterWeaponLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDCHARACTERWEAPONLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterGearTier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDCHARACTERGEARTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterGearLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ADDCHARACTERGEARLEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDefenseFixedStatExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_ENDMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDefenseFixedStatExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_FINISHMINIGAMEDEFENSEFIXEDSTATEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDefenseFixedStatExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCEL_FINISHSIZEPREFIXEDMINIGAMEDEFENSEFIXEDSTATEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

