#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IALLOCATIONSTRATEGY_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IALLOCATIONSTRATEGY_NEW_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int IAllocationStrategy_TypeDefinitionIndex = 36375;

	class IAllocationStrategy : public Il2CppObject
	{
	public:
		::System::Void Release(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IALLOCATIONSTRATEGY_RELEASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* New(::System::Type* arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IALLOCATIONSTRATEGY_NEW_OFFSET))(arg, arg, nullptr);
		}

	};
}

