#pragma once
#include "../../unitysdk.h"

#define MX_TIMELINE_VICTORYTIMELINEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE252A0)

namespace Mx::Timeline
{
	inline static constexpr unsigned int VictoryTimelineMessage_TypeDefinitionIndex = 10380;

	class VictoryTimelineMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_VICTORYTIMELINEMESSAGE_.CTOR_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

	};
}

