#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements::UIR { class GPUBufferAllocator; }

#define DATASET`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_REGISTERUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_HASMAPPEDBUFFERRANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_SENDUPDATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_SENDFULLRANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_SENDPARTIALRANGES_OFFSET UNITYSDK_OFFSET(0x000000)
#define DATASET`1_RESETUPDATESTATE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int DataSet`1_TypeDefinitionIndex = 30777;

	class DataSet`1 : public Il2CppObject
	{
	public:
		::System::Boolean _disposed_k__BackingField; // 0x0
		Il2CppObject* gpuData; // 0x0
		Il2CppObject* cpuData; // 0x0
		Il2CppObject* updateRanges; // 0x0
		::UnityEngine::UIElements::UIR::GPUBufferAllocator* allocator; // 0x0
		::System::UInt32 m_UpdateRangePoolSize; // 0x0
		::System::UInt32 m_ElemStride; // 0x0
		::System::UInt32 m_UpdateRangeMin; // 0x0
		::System::UInt32 m_UpdateRangeMax; // 0x0
		::System::UInt32 m_UpdateRangesEnqueued; // 0x0
		::System::UInt32 m_UpdateRangesBatchStart; // 0x0
		::System::Boolean m_UpdateRangesSaturated; // 0x0

		::System::Void .ctor(GPUBufferType* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(GPUBufferType*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterUpdate(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_REGISTERUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasMappedBufferRange()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_HASMAPPEDBUFFERRANGE_OFFSET))(nullptr);
		}

		::System::Void SendUpdates()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_SENDUPDATES_OFFSET))(nullptr);
		}

		::System::Void SendFullRange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_SENDFULLRANGE_OFFSET))(nullptr);
		}

		::System::Void SendPartialRanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_SENDPARTIALRANGES_OFFSET))(nullptr);
		}

		::System::Void ResetUpdateState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASET`1_RESETUPDATESTATE_OFFSET))(nullptr);
		}

	};

