#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_BUILDSTATUS_GET_STATE_OFFSET UNITYSDK_OFFSET(0x954BFB0)
#define NEXON_PUB_BUILDSTATUS_SET_STATE_OFFSET UNITYSDK_OFFSET(0x954BFC0)
#define NEXON_PUB_BUILDSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x954BFD0)
#define NEXON_PUB_BUILDSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x954BFE0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int BuildStatus_TypeDefinitionIndex = 37539;

	class BuildStatus : public Il2CppObject
	{
	public:
		Build* state; // 0x10

		Build* get_State()
		{
			return (return (Build*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_BUILDSTATUS_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(Build* arg)
		{
			((::System::Void(*)(Build*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_BUILDSTATUS_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_BUILDSTATUS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_BUILDSTATUS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

