#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0xA1AE010)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0xA1AE030)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0xA1AE070)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0xA1AE0C0)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0xA1AE120)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int HashUtility_TypeDefinitionIndex = 36333;

	class HashUtility : public Il2CppObject
	{
	public:
		::System::Int32 CombineHash(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CombineHash(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CombineHash(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CombineHash(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CombineHash(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

