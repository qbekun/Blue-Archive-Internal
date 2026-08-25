#pragma once
#include "../../../../unitysdk.h"

#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_METADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA245620)

namespace UnityEngine::Profiling::Memory::Experimental
{
	inline static constexpr unsigned int MetaData_TypeDefinitionIndex = 31238;

	class MetaData : public Il2CppObject
	{
	public:
		::System::String* content; // 0x10
		::System::String* platform; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_METADATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

