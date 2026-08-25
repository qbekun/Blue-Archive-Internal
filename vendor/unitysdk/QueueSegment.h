#pragma once
#include "unitysdk.h"

#define QUEUESEGMENT_GETINDEXES_OFFSET UNITYSDK_OFFSET(0x93E7D60)
#define QUEUESEGMENT_COMPAREEXCHANGEINDEXES_OFFSET UNITYSDK_OFFSET(0x93E7D90)
#define QUEUESEGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E5A90)
#define QUEUESEGMENT_ISUSEDUP_OFFSET UNITYSDK_OFFSET(0x93E72D0)
#define QUEUESEGMENT_TRYENQUEUE_OFFSET UNITYSDK_OFFSET(0x93E6680)
#define QUEUESEGMENT_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x93E7170)

	inline static constexpr unsigned int QueueSegment_TypeDefinitionIndex = 24109;

	class QueueSegment : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* nodes; // 0x10
		::System::Int32 indexes; // 0x18
		QueueSegment* Next; // 0x20

		::System::Void GetIndexes(int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUESEGMENT_GETINDEXES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareExchangeIndexes(int32_t&* arg, ::System::Int32 arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::System::Int32, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUEUESEGMENT_COMPAREEXCHANGEINDEXES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUESEGMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsUsedUp()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUESEGMENT_ISUSEDUP_OFFSET))(nullptr);
		}

		::System::Boolean TryEnqueue(::System::Threading::IThreadPoolWorkItem* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::IThreadPoolWorkItem*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUESEGMENT_TRYENQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryDequeue(::System::Threading::IThreadPoolWorkItem&* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::IThreadPoolWorkItem&*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUESEGMENT_TRYDEQUEUE_OFFSET))(arg, nullptr);
		}

	};

