#pragma once
#include "../../unitysdk.h"

#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E3FF0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E4010)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x90E45D0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_LARGEBUFFERMULTIPLE_OFFSET UNITYSDK_OFFSET(0x90E45E0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_USEEXPONENTIALLARGEBUFFER_OFFSET UNITYSDK_OFFSET(0x90E45F0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_SMALLPOOLFREESIZE_OFFSET UNITYSDK_OFFSET(0x90E4600)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_LARGEPOOLFREESIZE_OFFSET UNITYSDK_OFFSET(0x90E4610)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_LARGEPOOLINUSESIZE_OFFSET UNITYSDK_OFFSET(0x90E46A0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_SMALLBLOCKSFREE_OFFSET UNITYSDK_OFFSET(0x90E4730)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_LARGEBUFFERSFREE_OFFSET UNITYSDK_OFFSET(0x90E4780)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_MAXIMUMFREESMALLPOOLBYTES_OFFSET UNITYSDK_OFFSET(0x90E4800)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_SET_MAXIMUMFREESMALLPOOLBYTES_OFFSET UNITYSDK_OFFSET(0x90E4810)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_MAXIMUMFREELARGEPOOLBYTES_OFFSET UNITYSDK_OFFSET(0x90E4820)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_SET_MAXIMUMFREELARGEPOOLBYTES_OFFSET UNITYSDK_OFFSET(0x90E4830)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_MAXIMUMSTREAMCAPACITY_OFFSET UNITYSDK_OFFSET(0x90E4840)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_GENERATECALLSTACKS_OFFSET UNITYSDK_OFFSET(0x90E4850)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_AGGRESSIVEBUFFERRETURN_OFFSET UNITYSDK_OFFSET(0x90E4860)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_SET_AGGRESSIVEBUFFERRETURN_OFFSET UNITYSDK_OFFSET(0x90E4870)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_THROWEXCEPTIONONTOARRAY_OFFSET UNITYSDK_OFFSET(0x90E4880)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GETBLOCK_OFFSET UNITYSDK_OFFSET(0x90E4890)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GETLARGEBUFFER_OFFSET UNITYSDK_OFFSET(0x90E4A90)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_ROUNDTOLARGEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x90E4DA0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_ISLARGEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x90E4540)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GETPOOLINDEX_OFFSET UNITYSDK_OFFSET(0x90E4DF0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_RETURNLARGEBUFFER_OFFSET UNITYSDK_OFFSET(0x90E5130)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_RETURNBLOCKS_OFFSET UNITYSDK_OFFSET(0x90E5830)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_RETURNBLOCK_OFFSET UNITYSDK_OFFSET(0x90E5C20)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTBLOCKCREATED_OFFSET UNITYSDK_OFFSET(0x90E4940)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTLARGEBUFFERCREATED_OFFSET UNITYSDK_OFFSET(0x90E4E40)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTBUFFERDISCARDED_OFFSET UNITYSDK_OFFSET(0x90E54A0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMCREATED_OFFSET UNITYSDK_OFFSET(0x90E6700)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMDISPOSED_OFFSET UNITYSDK_OFFSET(0x90E6B80)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMDOUBLEDISPOSED_OFFSET UNITYSDK_OFFSET(0x90E7150)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMFINALIZED_OFFSET UNITYSDK_OFFSET(0x90E76D0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMLENGTH_OFFSET UNITYSDK_OFFSET(0x90E7B20)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMTOARRAY_OFFSET UNITYSDK_OFFSET(0x90E7C40)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMOVERCAPACITY_OFFSET UNITYSDK_OFFSET(0x90E8120)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTUSAGEREPORT_OFFSET UNITYSDK_OFFSET(0x90E8680)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x90E88F0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER__GETLARGEBUFFER_G__ALLOCATEARRAY|81_0_OFFSET UNITYSDK_OFFSET(0x90E89C0)

namespace Microsoft::IO
{
	inline static constexpr unsigned int RecyclableMemoryStreamManager_TypeDefinitionIndex = 37221;

	class RecyclableMemoryStreamManager : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* largeBufferFreeSize; // 0x10
		::Il2CppArray<::System::Object*>* largeBufferInUseSize; // 0x18
		::Il2CppArray<::System::Object*>* largePools; // 0x20
		Il2CppObject* smallPool; // 0x28
		::System::Int64 smallPoolFreeSize; // 0x30
		::System::Int64 smallPoolInUseSize; // 0x38
		::System::Int32 _BlockSize_k__BackingField; // 0x40
		::System::Int32 _LargeBufferMultiple_k__BackingField; // 0x44
		::System::Boolean _UseExponentialLargeBuffer_k__BackingField; // 0x48
		::System::Int32 _MaximumBufferSize_k__BackingField; // 0x4C
		::System::Int64 _MaximumFreeSmallPoolBytes_k__BackingField; // 0x50
		::System::Int64 _MaximumFreeLargePoolBytes_k__BackingField; // 0x58
		::System::Int64 _MaximumStreamCapacity_k__BackingField; // 0x60
		::System::Boolean _GenerateCallStacks_k__BackingField; // 0x68
		::System::Boolean _AggressiveBufferReturn_k__BackingField; // 0x69
		::System::Boolean _ThrowExceptionOnToArray_k__BackingField; // 0x6A
		Il2CppObject* BlockCreated; // 0x70
		Il2CppObject* LargeBufferCreated; // 0x78
		Il2CppObject* StreamCreated; // 0x80
		Il2CppObject* StreamDisposed; // 0x88
		Il2CppObject* StreamDoubleDisposed; // 0x90
		Il2CppObject* StreamFinalized; // 0x98
		Il2CppObject* StreamLength; // 0xA0
		Il2CppObject* StreamConvertedToArray; // 0xA8
		Il2CppObject* StreamOverCapacity; // 0xB0
		Il2CppObject* BufferDiscarded; // 0xB8
		Il2CppObject* UsageReport; // 0xC0

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_LargeBufferMultiple()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_LARGEBUFFERMULTIPLE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseExponentialLargeBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_USEEXPONENTIALLARGEBUFFER_OFFSET))(nullptr);
		}

		::System::Int64 get_SmallPoolFreeSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_SMALLPOOLFREESIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_LargePoolFreeSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_LARGEPOOLFREESIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_LargePoolInUseSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_LARGEPOOLINUSESIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_SmallBlocksFree()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_SMALLBLOCKSFREE_OFFSET))(nullptr);
		}

		::System::Int64 get_LargeBuffersFree()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_LARGEBUFFERSFREE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaximumFreeSmallPoolBytes()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_MAXIMUMFREESMALLPOOLBYTES_OFFSET))(nullptr);
		}

		::System::Void set_MaximumFreeSmallPoolBytes(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_SET_MAXIMUMFREESMALLPOOLBYTES_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaximumFreeLargePoolBytes()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_MAXIMUMFREELARGEPOOLBYTES_OFFSET))(nullptr);
		}

		::System::Void set_MaximumFreeLargePoolBytes(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_SET_MAXIMUMFREELARGEPOOLBYTES_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaximumStreamCapacity()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_MAXIMUMSTREAMCAPACITY_OFFSET))(nullptr);
		}

		::System::Boolean get_GenerateCallStacks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_GENERATECALLSTACKS_OFFSET))(nullptr);
		}

		::System::Boolean get_AggressiveBufferReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_AGGRESSIVEBUFFERRETURN_OFFSET))(nullptr);
		}

		::System::Void set_AggressiveBufferReturn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_SET_AGGRESSIVEBUFFERRETURN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ThrowExceptionOnToArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GET_THROWEXCEPTIONONTOARRAY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBlock()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GETBLOCK_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetLargeBuffer(::System::Int64 arg, ::System::Guid* arg, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int64, ::System::Guid*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GETLARGEBUFFER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Int64 RoundToLargeBufferSize(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_ROUNDTOLARGEBUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLargeBufferSize(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_ISLARGEBUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPoolIndex(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GETPOOLINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ReturnLargeBuffer(::Il2CppArray<::System::Object*>* arg, ::System::Guid* arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Guid*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_RETURNLARGEBUFFER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void ReturnBlocks(Il2CppObject* arg, ::System::Guid* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Guid*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_RETURNBLOCKS_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void ReturnBlock(::Il2CppArray<::System::Object*>* arg, ::System::Guid* arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Guid*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_RETURNBLOCK_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void ReportBlockCreated()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTBLOCKCREATED_OFFSET))(nullptr);
		}

		::System::Void ReportLargeBufferCreated(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTLARGEBUFFERCREATED_OFFSET))(arg, str, arg, arg, str, nullptr);
		}

		::System::Void ReportBufferDiscarded(::System::Guid* arg, ::System::String* str, MemoryStreamBufferType* arg, MemoryStreamDiscardReason* arg)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, MemoryStreamBufferType*, MemoryStreamDiscardReason*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTBUFFERDISCARDED_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void ReportStreamCreated(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMCREATED_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void ReportStreamDisposed(::System::Guid* arg, ::System::String* str, ::System::TimeSpan* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::TimeSpan*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMDISPOSED_OFFSET))(arg, str, arg, str, str, nullptr);
		}

		::System::Void ReportStreamDoubleDisposed(::System::Guid* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMDOUBLEDISPOSED_OFFSET))(arg, str, str, str, str, nullptr);
		}

		::System::Void ReportStreamFinalized(::System::Guid* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMFINALIZED_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void ReportStreamLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void ReportStreamToArray(::System::Guid* arg, ::System::String* str, ::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMTOARRAY_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void ReportStreamOverCapacity(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTSTREAMOVERCAPACITY_OFFSET))(arg, str, arg, str, nullptr);
		}

		::System::Void ReportUsageReport()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_REPORTUSAGEREPORT_OFFSET))(nullptr);
		}

		::System::IO::MemoryStream* GetStream()
		{
			return (return (::System::IO::MemoryStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER_GETSTREAM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* _GetLargeBuffer_g__AllocateArray|81_0(::System::Int64 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAMMANAGER__GETLARGEBUFFER_G__ALLOCATEARRAY|81_0_OFFSET))(arg, nullptr);
		}

	};
}

