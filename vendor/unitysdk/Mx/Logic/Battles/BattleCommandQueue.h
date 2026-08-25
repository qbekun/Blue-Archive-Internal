#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class BattleCommand; }

#define MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_GET_QUEUE_OFFSET UNITYSDK_OFFSET(0x1274270)
#define MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1274280)
#define MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_DELIVER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x12742D0)
#define MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1274320)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleCommandQueue_TypeDefinitionIndex = 14059;

	class BattleCommandQueue : public Il2CppObject
	{
	public:
		Il2CppObject* _Queue_k__BackingField; // 0x10

		Il2CppObject* get_Queue()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_GET_QUEUE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Deliver(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_DELIVER_OFFSET))(arg, nullptr);
		}

		::System::Void Enqueue(::MX::Logic::Battles::BattleCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_ENQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDQUEUE_.CTOR_OFFSET))(nullptr);
		}

	};
}

