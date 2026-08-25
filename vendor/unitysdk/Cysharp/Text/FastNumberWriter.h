#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_FASTNUMBERWRITER_TRYWRITEINT64_OFFSET UNITYSDK_OFFSET(0xA4CB950)
#define CYSHARP_TEXT_FASTNUMBERWRITER_TRYWRITEUINT64_OFFSET UNITYSDK_OFFSET(0xA4CC150)

namespace Cysharp::Text
{
	inline static constexpr unsigned int FastNumberWriter_TypeDefinitionIndex = 34671;

	class FastNumberWriter : public Il2CppObject
	{
	public:
		::System::Boolean TryWriteInt64(Il2CppObject* arg, int32_t&* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_FASTNUMBERWRITER_TRYWRITEINT64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryWriteUInt64(Il2CppObject* arg, int32_t&* arg, ::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_FASTNUMBERWRITER_TRYWRITEUINT64_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

