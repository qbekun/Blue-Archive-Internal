#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class BattleCommand; }

#define MX_LOGIC_BATTLES_BATTLECOMMAND_GET_EXECUTERTAG_OFFSET UNITYSDK_OFFSET(0x1273CA0)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_GET_ISSUEDFRAME_OFFSET UNITYSDK_OFFSET(0x1273CB0)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_SET_ISSUEDFRAME_OFFSET UNITYSDK_OFFSET(0x1273CC0)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_GET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x1273CD0)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_SET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x1273CE0)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273BC0)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1273CF0)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1273D80)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1273DB0)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1273E20)
#define MX_LOGIC_BATTLES_BATTLECOMMAND_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1273E90)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleCommand_TypeDefinitionIndex = 14056;

	class BattleCommand : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* _ExecuterTag_k__BackingField; // 0x10
		::System::Int32 _IssuedFrame_k__BackingField; // 0x14
		::System::Int32 _ExecuteFrame_k__BackingField; // 0x18

		::MX::Logic::Battles::GroupTag* get_ExecuterTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_GET_EXECUTERTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_IssuedFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_GET_ISSUEDFRAME_OFFSET))(nullptr);
		}

		::System::Void set_IssuedFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_SET_ISSUEDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExecuteFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_GET_EXECUTEFRAME_OFFSET))(nullptr);
		}

		::System::Void set_ExecuteFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_SET_EXECUTEFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::BattleCommand* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::BattleCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::BattleCommand* arg, ::MX::Logic::Battles::BattleCommand* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::BattleCommand*, ::MX::Logic::Battles::BattleCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::BattleCommand* arg, ::MX::Logic::Battles::BattleCommand* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::BattleCommand*, ::MX::Logic::Battles::BattleCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMAND_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

