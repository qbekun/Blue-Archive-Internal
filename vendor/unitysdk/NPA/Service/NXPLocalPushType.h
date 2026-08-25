#pragma once
#include "../../unitysdk.h"

namespace NPA::Service { class NXPLocalPushType; }

namespace NPA::Service
{
	inline static constexpr unsigned int NXPLocalPushType_TypeDefinitionIndex = 27291;

	class NXPLocalPushType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Service::NXPLocalPushType* LOCAL_PUSH_TYPE_ON; // 0x0
		::NPA::Service::NXPLocalPushType* LOCAL_PUSH_TYPE_AFTER; // 0x0
		::NPA::Service::NXPLocalPushType* LOCAL_PUSH_TYPE_NOW; // 0x0

	};
}

