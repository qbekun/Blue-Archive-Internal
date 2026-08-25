#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_BUFFERSEXTENSIONS_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_BUFFERSEXTENSIONS_COPYTOMULTISEGMENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Buffers
{
	inline static constexpr unsigned int BuffersExtensions_TypeDefinitionIndex = 25200;

	class BuffersExtensions : public Il2CppObject
	{
	public:
		::System::Void CopyTo(Il2CppObject&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BUFFERSEXTENSIONS_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyToMultiSegment(Il2CppObject&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BUFFERSEXTENSIONS_COPYTOMULTISEGMENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

