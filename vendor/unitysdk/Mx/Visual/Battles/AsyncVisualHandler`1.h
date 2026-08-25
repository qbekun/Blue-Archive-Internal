#pragma once
#include "../../../unitysdk.h"

#define MX_VISUAL_BATTLES_ASYNCVISUALHANDLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int AsyncVisualHandler`1_TypeDefinitionIndex = 20240;

	class AsyncVisualHandler`1 : public Il2CppObject
	{
	public:
		::System::Boolean IsDone; // 0x0
		Il2CppObject* Result; // 0x0
		Il2CppObject* Completed; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ASYNCVISUALHANDLER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

