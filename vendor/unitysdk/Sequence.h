#pragma once
#include "unitysdk.h"

namespace Animancer { class AnimancerEvent; }
namespace Animancer { class AnimancerState; }
namespace UnityEngine { class AnimationClip; }

#define SEQUENCE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x4947A0)
#define SEQUENCE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x4947B0)
#define SEQUENCE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x4947C0)
#define SEQUENCE_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x494870)
#define SEQUENCE_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x494890)
#define SEQUENCE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x494A30)
#define SEQUENCE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x494A40)
#define SEQUENCE_SETSHOULDNOTMODIFYREASON_OFFSET UNITYSDK_OFFSET(0x494A50)
#define SEQUENCE_ONSEQUENCEMODIFIED_OFFSET UNITYSDK_OFFSET(0x494A60)
#define SEQUENCE_GET_ENDEVENT_OFFSET UNITYSDK_OFFSET(0x494A70)
#define SEQUENCE_SET_ENDEVENT_OFFSET UNITYSDK_OFFSET(0x494A80)
#define SEQUENCE_GET_ONEND_OFFSET UNITYSDK_OFFSET(0x494AA0)
#define SEQUENCE_SET_ONEND_OFFSET UNITYSDK_OFFSET(0x494AB0)
#define SEQUENCE_GET_NORMALIZEDENDTIME_OFFSET UNITYSDK_OFFSET(0x494AC0)
#define SEQUENCE_SET_NORMALIZEDENDTIME_OFFSET UNITYSDK_OFFSET(0x494AD0)
#define SEQUENCE_GETDEFAULTNORMALIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x494AE0)
#define SEQUENCE_GETDEFAULTNORMALIZEDENDTIME_OFFSET UNITYSDK_OFFSET(0x494B00)
#define SEQUENCE_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x494B20)
#define SEQUENCE_GETNAME_OFFSET UNITYSDK_OFFSET(0x494B30)
#define SEQUENCE_SETNAME_OFFSET UNITYSDK_OFFSET(0x494B60)
#define SEQUENCE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x494C70)
#define SEQUENCE_INDEXOFREQUIRED_OFFSET UNITYSDK_OFFSET(0x494CF0)
#define SEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x494DF0)
#define SEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x494EE0)
#define SEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x495000)
#define SEQUENCE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x495210)
#define SEQUENCE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x495250)
#define SEQUENCE_ASSERTNORMALIZEDTIMES_OFFSET UNITYSDK_OFFSET(0x4952A0)
#define SEQUENCE_ASSERTNORMALIZEDTIMES_OFFSET UNITYSDK_OFFSET(0x4958D0)
#define SEQUENCE_DEEPTOSTRING_OFFSET UNITYSDK_OFFSET(0x4953C0)
#define SEQUENCE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4958E0)
#define SEQUENCE_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ANIMANCER.ANIMANCEREVENT_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x495930)
#define SEQUENCE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4959C0)
#define SEQUENCE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x495A50)
#define SEQUENCE_INDEXOFREQUIRED_OFFSET UNITYSDK_OFFSET(0x495D10)
#define SEQUENCE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x495A80)
#define SEQUENCE_INDEXOFREQUIRED_OFFSET UNITYSDK_OFFSET(0x495D40)
#define SEQUENCE_ADD_OFFSET UNITYSDK_OFFSET(0x495E00)
#define SEQUENCE_ADD_OFFSET UNITYSDK_OFFSET(0x495F20)
#define SEQUENCE_ADD_OFFSET UNITYSDK_OFFSET(0x495F70)
#define SEQUENCE_ADD_OFFSET UNITYSDK_OFFSET(0x4960C0)
#define SEQUENCE_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x496170)
#define SEQUENCE_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x496470)
#define SEQUENCE_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x496530)
#define SEQUENCE_REMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x496560)
#define SEQUENCE_REMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x496680)
#define SEQUENCE_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x4966B0)
#define SEQUENCE_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x496700)
#define SEQUENCE_ASSERTCALLBACKUNIQUENESS_OFFSET UNITYSDK_OFFSET(0x496760)
#define SEQUENCE_ASSERTEVENTUNIQUENESS_OFFSET UNITYSDK_OFFSET(0x496770)
#define SEQUENCE_SETNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x496780)
#define SEQUENCE_SETNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x496CB0)
#define SEQUENCE_SETNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x496CE0)
#define SEQUENCE_INSERT_OFFSET UNITYSDK_OFFSET(0x495EB0)
#define SEQUENCE_INSERT_OFFSET UNITYSDK_OFFSET(0x495FD0)
#define SEQUENCE_INSERT_OFFSET UNITYSDK_OFFSET(0x496A40)
#define SEQUENCE_REMOVE_OFFSET UNITYSDK_OFFSET(0x496940)
#define SEQUENCE_REMOVE_OFFSET UNITYSDK_OFFSET(0x496D30)
#define SEQUENCE_REMOVE_OFFSET UNITYSDK_OFFSET(0x496DC0)
#define SEQUENCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x496E10)
#define SEQUENCE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x495100)
#define SEQUENCE_ADDALLEVENTS_OFFSET UNITYSDK_OFFSET(0x496E90)
#define SEQUENCE_COPYTO_OFFSET UNITYSDK_OFFSET(0x497080)
#define SEQUENCE_CONTENTSAREEQUAL_OFFSET UNITYSDK_OFFSET(0x4970B0)

	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 35110;

	class Sequence : public Il2CppObject
	{
	public:
		::System::String* IndexOutOfRangeError; // 0x0
		::Il2CppArray<::System::Object*>* _Events; // 0x10
		::System::Int32 _Count_k__BackingField; // 0x18
		::System::Int32 DefaultCapacity; // 0x0
		::System::Int32 _Version; // 0x1C
		::Animancer::AnimancerEvent* _EndEvent; // 0x20
		::Il2CppArray<::System::Object*>* _Names; // 0x30

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_Version(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SET_VERSION_OFFSET))(arg, nullptr);
		}

		::System::Void SetShouldNotModifyReason(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SETSHOULDNOTMODIFYREASON_OFFSET))(str, nullptr);
		}

		::System::Void OnSequenceModified()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ONSEQUENCEMODIFIED_OFFSET))(nullptr);
		}

		::Animancer::AnimancerEvent* get_EndEvent()
		{
			return (return (::Animancer::AnimancerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_ENDEVENT_OFFSET))(nullptr);
		}

		::System::Void set_EndEvent(::Animancer::AnimancerEvent* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SET_ENDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OnEnd()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_ONEND_OFFSET))(nullptr);
		}

		::System::Void set_OnEnd(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SET_ONEND_OFFSET))(arg, nullptr);
		}

		::System::Single get_NormalizedEndTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_NORMALIZEDENDTIME_OFFSET))(nullptr);
		}

		::System::Void set_NormalizedEndTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SET_NORMALIZEDENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Single GetDefaultNormalizedStartTime(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GETDEFAULTNORMALIZEDSTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Single GetDefaultNormalizedEndTime(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GETDEFAULTNORMALIZEDENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Object[]&* get_Names()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_NAMES_OFFSET))(nullptr);
		}

		::System::String* GetName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetName(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SETNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 IndexOf(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_INDEXOF_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 IndexOfRequired(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_INDEXOFREQUIRED_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Sequence* arg)
		{
			((::System::Void(*)(Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerEvent* get_Item(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerEvent*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerEvent* get_Item(::System::String* str)
		{
			return (return (::Animancer::AnimancerEvent*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void AssertNormalizedTimes(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ASSERTNORMALIZEDTIMES_OFFSET))(arg, nullptr);
		}

		::System::Void AssertNormalizedTimes(::Animancer::AnimancerState* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ASSERTNORMALIZEDTIMES_OFFSET))(arg, arg, nullptr);
		}

		::System::String* DeepToString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_DEEPTOSTRING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Animancer.AnimancerEvent_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ANIMANCER.ANIMANCEREVENT_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Int32(*)(::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOfRequired(::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Int32(*)(::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_INDEXOFREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Int32 arg, ::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_INDEXOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOfRequired(::System::Int32 arg, ::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_INDEXOFREQUIRED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Add(::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Int32(*)(::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(::System::Single arg, ::System::Action* arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Add(::System::Int32 arg, ::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Add(::System::Int32 arg, ::System::Single arg, ::System::Action* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddCallback(::System::Int32 arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ADDCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCallback(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ADDCALLBACK_OFFSET))(str, arg, nullptr);
		}

		::System::Void RemoveCallback(::System::Int32 arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_REMOVECALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveCallback(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_REMOVECALLBACK_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetCallback(::System::Int32 arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SETCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCallback(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SETCALLBACK_OFFSET))(str, arg, nullptr);
		}

		::System::Void AssertCallbackUniqueness(::System::Action* arg, ::System::Action* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ASSERTCALLBACKUNIQUENESS_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AssertEventUniqueness(::System::Int32 arg, ::Animancer::AnimancerEvent* arg)
		{
			((::System::Void(*)(::System::Int32, ::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ASSERTEVENTUNIQUENESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 SetNormalizedTime(::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SETNORMALIZEDTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 SetNormalizedTime(::System::String* str, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SETNORMALIZEDTIME_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 SetNormalizedTime(::Animancer::AnimancerEvent* arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::Animancer::AnimancerEvent*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_SETNORMALIZEDTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Insert(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_INSERT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Insert(::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_INSERT_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Boolean Remove(::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(Sequence* arg)
		{
			((::System::Void(*)(Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void AddAllEvents(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_ADDALLEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ContentsAreEqual(Sequence* arg)
		{
			return (return (::System::Boolean(*)(Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCE_CONTENTSAREEQUAL_OFFSET))(arg, nullptr);
		}

	};

