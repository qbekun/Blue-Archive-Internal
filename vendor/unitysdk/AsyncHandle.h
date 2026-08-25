#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define ASYNCHANDLE_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCHANDLE_ONLOADFINISHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCHANDLE_GET_ISUSING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCHANDLE_SET_ISUSING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCHANDLE_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCHANDLE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCHANDLE_ASYNCAPPLY_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int AsyncHandle_TypeDefinitionIndex = 8821;

	class AsyncHandle : public Il2CppObject
	{
	public:
		::System::String* Path; // 0x0
		Il2CppObject* pool; // 0x0
		Il2CppObject* instance; // 0x0
		::UnityEngine::Transform* InstantiateParent; // 0x0
		Il2CppObject* asyncActions; // 0x0
		::System::Boolean isUsing; // 0x0

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void OnLoadFinished(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLE_ONLOADFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUsing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLE_GET_ISUSING_OFFSET))(nullptr);
		}

		::System::Void set_IsUsing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLE_SET_ISUSING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::String* str, ::UnityEngine::Transform* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLE_.CTOR_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLE_GET_ISLOADED_OFFSET))(nullptr);
		}

		Il2CppObject* get_Instance()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLE_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void AsyncApply(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLE_ASYNCAPPLY_OFFSET))(arg, nullptr);
		}

	};

