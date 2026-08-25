#pragma once
#include "../unitysdk.h"

namespace SQLite { class NotifyTableChangedAction; }

namespace SQLite
{
	inline static constexpr unsigned int NotifyTableChangedAction_TypeDefinitionIndex = 36592;

	class NotifyTableChangedAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::SQLite::NotifyTableChangedAction* Insert; // 0x0
		::SQLite::NotifyTableChangedAction* Update; // 0x0
		::SQLite::NotifyTableChangedAction* Delete; // 0x0

	};
}

