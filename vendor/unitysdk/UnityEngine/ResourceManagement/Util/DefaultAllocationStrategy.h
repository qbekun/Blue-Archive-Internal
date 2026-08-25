#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEFAULTALLOCATIONSTRATEGY_RELEASE_OFFSET UNITYSDK_OFFSET(0xA0E5320)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEFAULTALLOCATIONSTRATEGY_NEW_OFFSET UNITYSDK_OFFSET(0xA0E5330)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEFAULTALLOCATIONSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E5340)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int DefaultAllocationStrategy_TypeDefinitionIndex = 36376;

	class DefaultAllocationStrategy : public Il2CppObject
	{
	public:
		::System::Void Release(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEFAULTALLOCATIONSTRATEGY_RELEASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* New(::System::Type* arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEFAULTALLOCATIONSTRATEGY_NEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEFAULTALLOCATIONSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

	};
}

