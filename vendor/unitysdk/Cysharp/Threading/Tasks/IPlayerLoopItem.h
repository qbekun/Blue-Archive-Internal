#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_IPLAYERLOOPITEM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int IPlayerLoopItem_TypeDefinitionIndex = 35890;

	class IPlayerLoopItem : public Il2CppObject
	{
	public:
		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IPLAYERLOOPITEM_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

