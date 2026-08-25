#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_UTILITIES_SELECTBUCKETINDEX_OFFSET UNITYSDK_OFFSET(0x92DC010)
#define SYSTEM_BUFFERS_UTILITIES_GETMAXSIZEFORBUCKET_OFFSET UNITYSDK_OFFSET(0x92DC080)

namespace System::Buffers
{
	inline static constexpr unsigned int Utilities_TypeDefinitionIndex = 25199;

	class Utilities : public Il2CppObject
	{
	public:
		::System::Int32 SelectBucketIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_UTILITIES_SELECTBUCKETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxSizeForBucket(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_UTILITIES_GETMAXSIZEFORBUCKET_OFFSET))(arg, nullptr);
		}

	};
}

