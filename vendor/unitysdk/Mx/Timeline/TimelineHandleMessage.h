#pragma once
#include "../../unitysdk.h"

#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_DESTROYAFTERPLAYING_OFFSET UNITYSDK_OFFSET(0xE24BD0)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE21EE0)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0xE24C20)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_PATH_OFFSET UNITYSDK_OFFSET(0xE24C30)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0xE24C40)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_ONPLAYED_OFFSET UNITYSDK_OFFSET(0xE24C50)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_DESTROYAFTERPLAYING_OFFSET UNITYSDK_OFFSET(0xE24C60)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_ONLASTFRAMEREACHED_OFFSET UNITYSDK_OFFSET(0xE24C70)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_PATH_OFFSET UNITYSDK_OFFSET(0xE24C80)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_ONPLAYED_OFFSET UNITYSDK_OFFSET(0xE24C90)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0xE24CA0)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_ONLASTFRAMEREACHED_OFFSET UNITYSDK_OFFSET(0xE24CB0)
#define MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_CANSKIP_OFFSET UNITYSDK_OFFSET(0xE24CC0)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineHandleMessage_TypeDefinitionIndex = 10377;

	class TimelineHandleMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::String* _Path_k__BackingField; // 0x18
		::System::Boolean _CanSkip_k__BackingField; // 0x20
		::System::Boolean _DestroyAfterPlaying_k__BackingField; // 0x21
		Il2CppObject* _OnPlayed_k__BackingField; // 0x28
		Il2CppObject* _OnStopped_k__BackingField; // 0x30
		Il2CppObject* _OnLastFrameReached_k__BackingField; // 0x38

		::System::Void set_DestroyAfterPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_DESTROYAFTERPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_.CTOR_OFFSET))(str, arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean get_CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_CANSKIP_OFFSET))(nullptr);
		}

		::System::Void set_Path(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_PATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_OnStopped()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_ONSTOPPED_OFFSET))(nullptr);
		}

		::System::Void set_OnPlayed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_ONPLAYED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DestroyAfterPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_DESTROYAFTERPLAYING_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnLastFrameReached()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_ONLASTFRAMEREACHED_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_PATH_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnPlayed()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_GET_ONPLAYED_OFFSET))(nullptr);
		}

		::System::Void set_OnStopped(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_ONSTOPPED_OFFSET))(arg, nullptr);
		}

		::System::Void set_OnLastFrameReached(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_ONLASTFRAMEREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanSkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLEMESSAGE_SET_CANSKIP_OFFSET))(arg, nullptr);
		}

	};
}

