#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_MANAGEDSTREAMHELPERS_VALIDATELOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0xA230D40)
#define UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMREAD_OFFSET UNITYSDK_OFFSET(0xA230E70)
#define UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMSEEK_OFFSET UNITYSDK_OFFSET(0xA230F80)
#define UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMLENGTH_OFFSET UNITYSDK_OFFSET(0xA231080)

namespace UnityEngine
{
	inline static constexpr unsigned int ManagedStreamHelpers_TypeDefinitionIndex = 31156;

	class ManagedStreamHelpers : public Il2CppObject
	{
	public:
		::System::Void ValidateLoadFromStream(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_VALIDATELOADFROMSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void ManagedStreamRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ManagedStreamSeek(::System::Int64 arg, ::System::UInt32 arg, ::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::UInt32, ::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMSEEK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ManagedStreamLength(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMLENGTH_OFFSET))(arg, arg, nullptr);
		}

	};
}

