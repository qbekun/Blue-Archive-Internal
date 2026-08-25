#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class EventBlackboardRuntime; }

#define SAVEDATAINTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAC740)

	inline static constexpr unsigned int SaveDataInternal_TypeDefinitionIndex = 9901;

	class SaveDataInternal : public Il2CppObject
	{
	public:
		::MXUnderCover::EventBlackboardRuntime* EventBlackboard; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAVEDATAINTERNAL_.CTOR_OFFSET))(nullptr);
		}

	};

