#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_COMPOSITECOLLIDER2D_GET_PATHCOUNT_OFFSET UNITYSDK_OFFSET(0xA29DE00)
#define UNITYENGINE_COMPOSITECOLLIDER2D_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0xA29DE40)
#define UNITYENGINE_COMPOSITECOLLIDER2D_GETPATH_OFFSET UNITYSDK_OFFSET(0xA29DE80)
#define UNITYENGINE_COMPOSITECOLLIDER2D_GETPATHARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29E010)

namespace UnityEngine
{
	inline static constexpr unsigned int CompositeCollider2D_TypeDefinitionIndex = 37714;

	class CompositeCollider2D : public Il2CppObject
	{
	public:
		::System::Int32 get_pathCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_GET_PATHCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_pointCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_GET_POINTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetPath(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_GETPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPathArray_Internal(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_GETPATHARRAY_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

