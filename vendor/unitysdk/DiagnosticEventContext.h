#pragma once
#include "unitysdk.h"

namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define DIAGNOSTICEVENTCONTEXT_GET_OPERATIONHANDLE_OFFSET UNITYSDK_OFFSET(0xA0E0EB0)
#define DIAGNOSTICEVENTCONTEXT_GET_EVENTVALUE_OFFSET UNITYSDK_OFFSET(0xA0E0ED0)
#define DIAGNOSTICEVENTCONTEXT_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xA0E0EE0)
#define DIAGNOSTICEVENTCONTEXT_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xA0E0EF0)
#define DIAGNOSTICEVENTCONTEXT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA0E0F00)
#define DIAGNOSTICEVENTCONTEXT_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xA0E0F10)
#define DIAGNOSTICEVENTCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E0F20)

	inline static constexpr unsigned int DiagnosticEventContext_TypeDefinitionIndex = 36350;

	class DiagnosticEventContext : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* _OperationHandle_k__BackingField; // 0x10
		DiagnosticEventType* _Type_k__BackingField; // 0x28
		::System::Int32 _EventValue_k__BackingField; // 0x2C
		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField; // 0x30
		::System::Object* _Context_k__BackingField; // 0x38
		::System::String* _Error_k__BackingField; // 0x40

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* get_OperationHandle()
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGNOSTICEVENTCONTEXT_GET_OPERATIONHANDLE_OFFSET))(nullptr);
		}

		::System::Int32 get_EventValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGNOSTICEVENTCONTEXT_GET_EVENTVALUE_OFFSET))(nullptr);
		}

		::System::String* get_Error()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGNOSTICEVENTCONTEXT_GET_ERROR_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGNOSTICEVENTCONTEXT_GET_LOCATION_OFFSET))(nullptr);
		}

		DiagnosticEventType* get_Type()
		{
			return (return (DiagnosticEventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGNOSTICEVENTCONTEXT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Object* get_Context()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGNOSTICEVENTCONTEXT_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, DiagnosticEventType* arg, ::System::Int32 arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, DiagnosticEventType*, ::System::Int32, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DIAGNOSTICEVENTCONTEXT_.CTOR_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

	};

