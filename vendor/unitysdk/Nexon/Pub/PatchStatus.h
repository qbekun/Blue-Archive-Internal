#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_PATCHSTATUS_GET_STATE_OFFSET UNITYSDK_OFFSET(0x954C5B0)
#define NEXON_PUB_PATCHSTATUS_SET_STATE_OFFSET UNITYSDK_OFFSET(0x954C5C0)
#define NEXON_PUB_PATCHSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C5D0)
#define NEXON_PUB_PATCHSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C5E0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int PatchStatus_TypeDefinitionIndex = 37549;

	class PatchStatus : public Il2CppObject
	{
	public:
		Patch* state; // 0x10

		Patch* get_State()
		{
			return (return (Patch*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCHSTATUS_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(Patch* arg)
		{
			((::System::Void(*)(Patch*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCHSTATUS_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCHSTATUS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCHSTATUS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

