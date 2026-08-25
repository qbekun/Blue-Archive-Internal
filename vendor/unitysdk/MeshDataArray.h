#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class MeshUpdateFlags; }

#define MESHDATAARRAY_ACQUIREREADONLYMESHDATA_OFFSET UNITYSDK_OFFSET(0xA20F9D0)
#define MESHDATAARRAY_ACQUIREREADONLYMESHDATAS_OFFSET UNITYSDK_OFFSET(0xA20FA10)
#define MESHDATAARRAY_RELEASEMESHDATAS_OFFSET UNITYSDK_OFFSET(0xA20FA60)
#define MESHDATAARRAY_CREATENEWMESHDATAS_OFFSET UNITYSDK_OFFSET(0xA20FAA0)
#define MESHDATAARRAY_APPLYTOMESHESIMPL_OFFSET UNITYSDK_OFFSET(0xA20FAE0)
#define MESHDATAARRAY_APPLYTOMESHIMPL_OFFSET UNITYSDK_OFFSET(0xA20FB30)
#define MESHDATAARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA20FB80)
#define MESHDATAARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA20FB90)
#define MESHDATAARRAY_APPLYTOMESHANDDISPOSE_OFFSET UNITYSDK_OFFSET(0xA20FBF0)
#define MESHDATAARRAY_APPLYTOMESHESANDDISPOSE_OFFSET UNITYSDK_OFFSET(0xA20FD40)
#define MESHDATAARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA20FFB0)
#define MESHDATAARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA210190)
#define MESHDATAARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2104B0)

	inline static constexpr unsigned int MeshDataArray_TypeDefinitionIndex = 31063;

	class MeshDataArray : public Il2CppObject
	{
	public:
		::System::Object** m_Ptrs; // 0x10
		::System::Int32 m_Length; // 0x18

		::System::Void AcquireReadOnlyMeshData(::UnityEngine::Mesh* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_ACQUIREREADONLYMESHDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AcquireReadOnlyMeshDatas(::Il2CppArray<::System::Object*>* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_ACQUIREREADONLYMESHDATAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReleaseMeshDatas(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_RELEASEMESHDATAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateNewMeshDatas(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_CREATENEWMESHDATAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyToMeshesImpl(::Il2CppArray<::System::Object*>* arg, ::System::Object** arg, ::System::Int32 arg, ::UnityEngine::Rendering::MeshUpdateFlags* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Object**, ::System::Int32, ::UnityEngine::Rendering::MeshUpdateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_APPLYTOMESHESIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ApplyToMeshImpl(::UnityEngine::Mesh* arg, ::System::Int32 arg, ::UnityEngine::Rendering::MeshUpdateFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Rendering::MeshUpdateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_APPLYTOMESHIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ApplyToMeshAndDispose(::UnityEngine::Mesh* arg, ::UnityEngine::Rendering::MeshUpdateFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Rendering::MeshUpdateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_APPLYTOMESHANDDISPOSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyToMeshesAndDispose(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::MeshUpdateFlags* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::MeshUpdateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_APPLYTOMESHESANDDISPOSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Mesh* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MESHDATAARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

	};

