#pragma once
#include "../../unitysdk.h"

#define MXFIELD_EVENTS_SPAWNCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC7ED0)
#define MXFIELD_EVENTS_SPAWNCONDITION_START_OFFSET UNITYSDK_OFFSET(0xEC7F40)
#define MXFIELD_EVENTS_SPAWNCONDITION_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEC7F60)
#define MXFIELD_EVENTS_SPAWNCONDITION_EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xEC7F70)

namespace MXField::Events
{
	inline static constexpr unsigned int SpawnCondition_TypeDefinitionIndex = 10888;

	class SpawnCondition : public Il2CppObject
	{
	public:
		::System::Boolean checkOnStartOnly; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_SPAWNCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_SPAWNCONDITION_START_OFFSET))(nullptr);
		}

		::System::Void Subscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_SPAWNCONDITION_SUBSCRIBE_OFFSET))(nullptr);
		}

		::System::Boolean ExecuteImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_SPAWNCONDITION_EXECUTEIMPL_OFFSET))(nullptr);
		}

	};
}

