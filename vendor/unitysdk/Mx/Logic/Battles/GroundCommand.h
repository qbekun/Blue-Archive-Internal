#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroundEvent; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMAND_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12A1960)
#define MX_LOGIC_BATTLES_GROUNDCOMMAND_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12A1970)
#define MX_LOGIC_BATTLES_GROUNDCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A1B70)
#define MX_LOGIC_BATTLES_GROUNDCOMMAND_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12A1B80)
#define MX_LOGIC_BATTLES_GROUNDCOMMAND_GET_WAITEXECUTEEND_OFFSET UNITYSDK_OFFSET(0x12A1B90)
#define MX_LOGIC_BATTLES_GROUNDCOMMAND_SET_WAITEXECUTEEND_OFFSET UNITYSDK_OFFSET(0x12A1BA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMAND_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x12A1BB0)
#define MX_LOGIC_BATTLES_GROUNDCOMMAND_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x12A1BC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12A1BD0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommand_TypeDefinitionIndex = 14109;

	class GroundCommand : public Il2CppObject
	{
	public:
		::System::String* CommandID; // 0x10
		::System::Boolean _WaitExecuteEnd_k__BackingField; // 0x18
		::System::Boolean _Progress_k__BackingField; // 0x19
		::MX::Logic::Battles::GroundEvent* Event; // 0x20
		Il2CppObject* VisualizeDelegate; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMAND_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMAND_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::GroundEvent* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMAND_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_WaitExecuteEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMAND_GET_WAITEXECUTEEND_OFFSET))(nullptr);
		}

		::System::Void set_WaitExecuteEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMAND_SET_WAITEXECUTEEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Progress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMAND_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::Void set_Progress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMAND_SET_PROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

