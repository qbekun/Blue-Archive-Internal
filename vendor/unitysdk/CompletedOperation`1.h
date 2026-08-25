#pragma once
#include "unitysdk.h"

#define COMPLETEDOPERATION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPLETEDOPERATION`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPLETEDOPERATION`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPLETEDOPERATION`1_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPLETEDOPERATION`1_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPLETEDOPERATION`1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CompletedOperation`1_TypeDefinitionIndex = 36352;

	class CompletedOperation`1 : public ::FlatData::GroundNodeLayerFlat
	{
	public:
		::System::Boolean m_Success; // 0x0
		::System::Exception* m_Exception; // 0x0
		::System::Boolean m_ReleaseDependenciesOnFailure; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPLETEDOPERATION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(Il2CppObject* arg, ::System::Boolean arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COMPLETEDOPERATION`1_INIT_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void Init(Il2CppObject* arg, ::System::Boolean arg, ::System::Exception* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Exception*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COMPLETEDOPERATION`1_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* get_DebugName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPLETEDOPERATION`1_GET_DEBUGNAME_OFFSET))(nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPLETEDOPERATION`1_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPLETEDOPERATION`1_EXECUTE_OFFSET))(nullptr);
		}

	};

