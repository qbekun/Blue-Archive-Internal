#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AndroidJavaProxy; }
namespace UnityEngine { class AndroidJavaRunnable; }
namespace UnityEngine { class AndroidJavaObject; }

#define UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET UNITYSDK_OFFSET(0xA1BA7C0)
#define UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET UNITYSDK_OFFSET(0xA1BA840)
#define UNITYENGINE__ANDROIDJNIHELPER_INVOKEJAVAPROXYMETHOD_OFFSET UNITYSDK_OFFSET(0xA1BA8F0)
#define UNITYENGINE__ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0xA1BB1A0)
#define UNITYENGINE__ANDROIDJNIHELPER_UNBOXARRAY_OFFSET UNITYSDK_OFFSET(0xA1BCE10)
#define UNITYENGINE__ANDROIDJNIHELPER_UNBOX_OFFSET UNITYSDK_OFFSET(0xA1B5FF0)
#define UNITYENGINE__ANDROIDJNIHELPER_BOX_OFFSET UNITYSDK_OFFSET(0xA1B4DF0)
#define UNITYENGINE__ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0xA1BD4E0)
#define UNITYENGINE__ANDROIDJNIHELPER_CONVERTTOJNIARRAY_OFFSET UNITYSDK_OFFSET(0xA1BBA30)
#define UNITYENGINE__ANDROIDJNIHELPER_CONVERTFROMJNIARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET UNITYSDK_OFFSET(0xA1BE010)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0xA1BE110)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE__ANDROIDJNIHELPER_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET UNITYSDK_OFFSET(0xA1BE150)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0xA1BE570)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODIDFALLBACK_OFFSET UNITYSDK_OFFSET(0xA1BE8D0)
#define UNITYENGINE__ANDROIDJNIHELPER_GETFIELDID_OFFSET UNITYSDK_OFFSET(0xA1BEB40)
#define UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0xA1BF220)
#define UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0xA1BE030)
#define UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int _AndroidJNIHelper_TypeDefinitionIndex = 37066;

	class _AndroidJNIHelper : public Il2CppObject
	{
	public:
		::System::Int32 CreateJavaProxy(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::AndroidJavaProxy* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::UnityEngine::AndroidJavaProxy*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AndroidJavaRunnable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AndroidJavaProxy*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_INVOKEJAVAPROXYMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateJNIArgArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET))(arg, nullptr);
		}

		::System::Object* UnboxArray(::UnityEngine::AndroidJavaObject* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::AndroidJavaObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_UNBOXARRAY_OFFSET))(arg, nullptr);
		}

		::System::Object* Unbox(::UnityEngine::AndroidJavaObject* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::AndroidJavaObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_UNBOX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AndroidJavaObject* Box(::System::Object* arg)
		{
			return (return (::UnityEngine::AndroidJavaObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_BOX_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteJNIArgArray(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ConvertToJNIArray(::System::Array* arg)
		{
			return (return (::System::Int32(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CONVERTTOJNIARRAY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ConvertFromJNIArray(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CONVERTFROMJNIARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetConstructorID(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetMethodID(::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Int32 GetMethodID(::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Int32 GetFieldID(::System::Int32 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETFIELDID_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 GetConstructorID(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetMethodID(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Int32 GetMethodIDFallback(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODIDFALLBACK_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Int32 GetFieldID(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETFIELDID_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::String* GetSignature(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::String* GetSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::String* GetSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET))(arg, nullptr);
		}

	};
}

