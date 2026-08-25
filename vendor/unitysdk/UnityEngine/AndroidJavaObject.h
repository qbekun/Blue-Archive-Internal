#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GlobalJavaObjectRef; }
namespace UnityEngine { class AndroidJavaObject; }
namespace UnityEngine { class AndroidJavaClass; }

#define UNITYENGINE_ANDROIDJAVAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B74A0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1B67B0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_CALL_OFFSET UNITYSDK_OFFSET(0xA1B7AF0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJAVAOBJECT_GETSTATIC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWOBJECT_OFFSET UNITYSDK_OFFSET(0xA1B68B0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWCLASS_OFFSET UNITYSDK_OFFSET(0xA1B7DA0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_CALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJAVAOBJECT_CALLSTATIC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJAVAOBJECT_DEBUGPRINT_OFFSET UNITYSDK_OFFSET(0xA1B7DE0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__ANDROIDJAVAOBJECT_OFFSET UNITYSDK_OFFSET(0xA1B74E0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B5A50)
#define UNITYENGINE_ANDROIDJAVAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B74D0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1B80B0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1B8180)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CALL_OFFSET UNITYSDK_OFFSET(0xA1B7B00)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJAVAOBJECT__GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CALLSTATIC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJAVAOBJECT__GETSTATIC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVAOBJECTDELETELOCALREF_OFFSET UNITYSDK_OFFSET(0xA1B6D50)
#define UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVACLASSDELETELOCALREF_OFFSET UNITYSDK_OFFSET(0xA1B8300)
#define UNITYENGINE_ANDROIDJAVAOBJECT_FROMJAVAARRAYDELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWOBJECT_OFFSET UNITYSDK_OFFSET(0xA1B7D50)
#define UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWCLASS_OFFSET UNITYSDK_OFFSET(0xA1B7DC0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaObject_TypeDefinitionIndex = 37063;

	class AndroidJavaObject : public Il2CppObject
	{
	public:
		::System::Boolean enableDebugPrints; // 0x0
		::UnityEngine::GlobalJavaObjectRef* m_jobject; // 0x10
		::UnityEngine::GlobalJavaObjectRef* m_jclass; // 0x18

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Call(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_CALL_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Get(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_GET_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetStatic(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_GETSTATIC_OFFSET))(str, nullptr);
		}

		::System::Int32 GetRawObject()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWOBJECT_OFFSET))(nullptr);
		}

		::System::Int32 GetRawClass()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWCLASS_OFFSET))(nullptr);
		}

		Il2CppObject* Call(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_CALL_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* CallStatic(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_CALLSTATIC_OFFSET))(str, arg, nullptr);
		}

		::System::Void DebugPrint(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_DEBUGPRINT_OFFSET))(str, nullptr);
		}

		::System::Void _AndroidJavaObject(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__ANDROIDJAVAOBJECT_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void _Call(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CALL_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* _Call(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CALL_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* _Get(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__GET_OFFSET))(str, nullptr);
		}

		Il2CppObject* _CallStatic(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CALLSTATIC_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* _GetStatic(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__GETSTATIC_OFFSET))(str, nullptr);
		}

		::UnityEngine::AndroidJavaObject* AndroidJavaObjectDeleteLocalRef(::System::Int32 arg)
		{
			return (return (::UnityEngine::AndroidJavaObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVAOBJECTDELETELOCALREF_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AndroidJavaClass* AndroidJavaClassDeleteLocalRef(::System::Int32 arg)
		{
			return (return (::UnityEngine::AndroidJavaClass*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVACLASSDELETELOCALREF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FromJavaArrayDeleteLocalRef(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_FROMJAVAARRAYDELETELOCALREF_OFFSET))(arg, nullptr);
		}

		::System::Int32 _GetRawObject()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWOBJECT_OFFSET))(nullptr);
		}

		::System::Int32 _GetRawClass()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWCLASS_OFFSET))(nullptr);
		}

	};
}

