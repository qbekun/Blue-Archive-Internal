#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_SHIFTTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_TOCONTINUOUSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_SORTBYSTARTTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_MAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GET_TIMEDVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GETBACKWARDITERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXStudio::LipSync::Commons
{
	inline static constexpr unsigned int Timeline`1_TypeDefinitionIndex = 36908;

	class Timeline`1 : public Il2CppObject
	{
	public:
		Il2CppObject* timelineValues; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ShiftTime(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_SHIFTTIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToContinuousTimestamp(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_TOCONTINUOUSTIMESTAMP_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SortByStartTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_SORTBYSTARTTIME_OFFSET))(nullptr);
		}

		Il2CppObject* Map(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_MAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_TimedValues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GET_TIMEDVALUES_OFFSET))(nullptr);
		}

		Il2CppObject* GetBackwardIterator(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GETBACKWARDITERATOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMELINE`1_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

