#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Jobs { class TransformAccessArray&; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA245F10)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA246020)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA245F90)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xA2460A0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2460F0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORMACCESSARRAYFORSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA2461A0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA2461B0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA246230)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_OFFSET UNITYSDK_OFFSET(0xA2462B0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0xA246330)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_CREATE_OFFSET UNITYSDK_OFFSET(0xA246060)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DESTROYTRANSFORMACCESSARRAY_OFFSET UNITYSDK_OFFSET(0xA246160)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA245FE0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_OFFSET UNITYSDK_OFFSET(0xA2462F0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0xA246370)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTRANSFORMACCESS_OFFSET UNITYSDK_OFFSET(0xA2463B0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTOUSERINDEX_OFFSET UNITYSDK_OFFSET(0xA2463F0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETLENGTH_OFFSET UNITYSDK_OFFSET(0xA246270)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2461F0)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int TransformAccessArray_TypeDefinitionIndex = 31246;

	class TransformAccessArray : public Il2CppObject
	{
	public:
		::System::Int32 m_TransformArray; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Allocate(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Jobs::TransformAccessArray&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Jobs::TransformAccessArray&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ALLOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_isCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ISCREATED_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 GetTransformAccessArrayForSchedule()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORMACCESSARRAYFORSCHEDULE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Item(::System::Int32 arg)
		{
			return (return (::UnityEngine::Transform*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void Add(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAtSwapBack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 Create(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroyTransformAccessArray(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DESTROYTRANSFORMACCESSARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransforms(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::System::Int32 arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAtSwapBack(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetSortedTransformAccess(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTRANSFORMACCESS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSortedToUserIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTOUSERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetLength(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETLENGTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* GetTransform(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Transform*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

	};
}

