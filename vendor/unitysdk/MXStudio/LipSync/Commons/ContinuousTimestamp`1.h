#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class TimeRange; }

#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_TIMEBOUND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_SET_TIMEBOUND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_FINDVALUEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_FINDSEGMENTAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_TOTIMELINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_CHANGETIMEBOUND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_BACKWARDENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_LAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXStudio::LipSync::Commons
{
	inline static constexpr unsigned int ContinuousTimestamp`1_TypeDefinitionIndex = 36899;

	class ContinuousTimestamp`1 : public Il2CppObject
	{
	public:
		Il2CppObject* sortedTimingMap; // 0x0
		::MXStudio::LipSync::Commons::TimeRange* _TimeBound_k__BackingField; // 0x0
		Il2CppObject* _DefaultValue_k__BackingField; // 0x0

		::MXStudio::LipSync::Commons::TimeRange* get_TimeBound()
		{
			return (return (::MXStudio::LipSync::Commons::TimeRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_TIMEBOUND_OFFSET))(nullptr);
		}

		::System::Void set_TimeBound(::MXStudio::LipSync::Commons::TimeRange* arg)
		{
			((::System::Void(*)(::MXStudio::LipSync::Commons::TimeRange*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_SET_TIMEBOUND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DefaultValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_SET_DEFAULTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXStudio::LipSync::Commons::TimeRange* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MXStudio::LipSync::Commons::TimeRange*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* Clone()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_CLONE_OFFSET))(nullptr);
		}

		Il2CppObject* FindValueAt(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_FINDVALUEAT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindSegmentAt(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_FINDSEGMENTAT_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_INSERT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToTimeline()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_TOTIMELINE_OFFSET))(nullptr);
		}

		Il2CppObject* ChangeTimeBound(::MXStudio::LipSync::Commons::TimeRange* arg)
		{
			return (return (Il2CppObject*(*)(::MXStudio::LipSync::Commons::TimeRange*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_CHANGETIMEBOUND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* BackwardEnumerator(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_BACKWARDENUMERATOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_First()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_FIRST_OFFSET))(nullptr);
		}

		Il2CppObject* get_Last()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_LAST_OFFSET))(nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_ISEMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* Get(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_CONTINUOUSTIMESTAMP`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

	};
}

