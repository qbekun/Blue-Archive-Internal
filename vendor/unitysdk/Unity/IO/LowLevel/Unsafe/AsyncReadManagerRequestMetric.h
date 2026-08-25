#pragma once
#include "../../../../unitysdk.h"

namespace Unity::IO::LowLevel::Unsafe { class ProcessingState; }
namespace Unity::IO::LowLevel::Unsafe { class FileReadType; }
namespace Unity::IO::LowLevel::Unsafe { class Priority; }
namespace Unity::IO::LowLevel::Unsafe { class AssetLoadingSubsystem; }

namespace Unity::IO::LowLevel::Unsafe
{
	inline static constexpr unsigned int AsyncReadManagerRequestMetric_TypeDefinitionIndex = 30890;

	class AsyncReadManagerRequestMetric : public Il2CppObject
	{
	public:
		::System::String* _AssetName_k__BackingField; // 0x10
		::System::String* _FileName_k__BackingField; // 0x18
		::System::UInt64 _OffsetBytes_k__BackingField; // 0x20
		::System::UInt64 _SizeBytes_k__BackingField; // 0x28
		::System::UInt64 _AssetTypeId_k__BackingField; // 0x30
		::System::UInt64 _CurrentBytesRead_k__BackingField; // 0x38
		::System::UInt32 _BatchReadCount_k__BackingField; // 0x40
		::System::Boolean _IsBatchRead_k__BackingField; // 0x44
		::Unity::IO::LowLevel::Unsafe::ProcessingState* _State_k__BackingField; // 0x48
		::Unity::IO::LowLevel::Unsafe::FileReadType* _ReadType_k__BackingField; // 0x4C
		::Unity::IO::LowLevel::Unsafe::Priority* _PriorityLevel_k__BackingField; // 0x50
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* _Subsystem_k__BackingField; // 0x54
		::System::Double _RequestTimeMicroseconds_k__BackingField; // 0x58
		::System::Double _TimeInQueueMicroseconds_k__BackingField; // 0x60
		::System::Double _TotalTimeMicroseconds_k__BackingField; // 0x68

	};
}

