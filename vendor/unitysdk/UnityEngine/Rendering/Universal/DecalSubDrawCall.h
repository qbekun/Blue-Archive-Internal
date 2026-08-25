#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSUBDRAWCALL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA03CCF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalSubDrawCall_TypeDefinitionIndex = 32603;

	class DecalSubDrawCall : public Il2CppObject
	{
	public:
		::System::Int32 start; // 0x10
		::System::Int32 end; // 0x14

		::System::Int32 get_count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSUBDRAWCALL_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

