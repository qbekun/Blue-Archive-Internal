#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_POLYGONCOLLIDER2D_GETTOTALPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0xA29DB00)
#define UNITYENGINE_POLYGONCOLLIDER2D_GET_PATHCOUNT_OFFSET UNITYSDK_OFFSET(0xA29DB40)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_OFFSET UNITYSDK_OFFSET(0xA29DB80)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29DC90)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_OFFSET UNITYSDK_OFFSET(0xA29DCD0)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29DDA0)
#define UNITYENGINE_POLYGONCOLLIDER2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA29DDF0)

namespace UnityEngine
{
	inline static constexpr unsigned int PolygonCollider2D_TypeDefinitionIndex = 37713;

	class PolygonCollider2D : public Il2CppObject
	{
	public:
		::System::Int32 GetTotalPointCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETTOTALPOINTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_pathCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GET_PATHCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPath(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPath_Internal(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetPath(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPath_Internal(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_.CTOR_OFFSET))(nullptr);
		}

	};
}

